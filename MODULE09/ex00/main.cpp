#include "BitcoinExchange.hpp"

int	parse_in(std::fstream &input, Entries &data){
	std::string line, word[2];
	int			i;

	getline(input, line);
	while(getline(input, line)){
		std::stringstream	s(line);
		i = 0;
		while (i < 2 && getline(s, word[i], ','))
			i++;
		if (i == 3 || data.add_entry(word))
			return 1;
	}
	input.close(); 
	return (0);
}

int exec(Entries &data, std::fstream	&inputf){
	std::string line, val[2];
	int				i = 0;
	int				date;
	float			value;
	std::map<int, float>::iterator it, end;

	getline(inputf, line);
	while (getline(inputf, line))
	{
		std::stringstream	s(line);
		i = 0;
		while (i < 2 && getline(s, val[i], '|'))
			i++;
		if (i == 3 || i < 2){
			std::cerr << "Error: bad input => " << s.str() << std::endl;
			continue;
		}
		if (val[0].length() == 11)
			val[0][10] = 0;
		if ((date = eval_date(val[0])) < 0){
			std::cerr << "Error: Date Format." << std::endl;
			continue;
		}
		if ((value = eval_price(val[1])) < 0){
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		}
		if (value > 1000){
			std::cerr << "Error: too large a number." << std::endl;
			continue;
		}
		it = data.date_exchange.find(date);
		end = data.date_exchange.end();
		if (it == end && (it = data.date_exchange.lower_bound(date)) == end){
			std::cerr << "Error: Couldn't find a valid value." << std::endl;
			continue;
		}
		std::cout << val[0] << " => " << value << " = " << it->second * value << std::endl;
	}
	return (0);
}

int	main(int ac, char **av){
	Entries 		data;
	std::fstream	dataf;
	std::fstream	inputf;
	if (ac != 2)
		goto args;
	dataf.open("data.csv", std::ios::in);
	inputf.open(av[1], std::ios::in);
	if (dataf.fail() || inputf.fail())
		goto args;
	if (parse_in(dataf, data))
		goto parse_error;
	exec(data, inputf);
	return (0);
	// ERRS:
	{
	args:
		std::cerr << "Error: could not open file." << std::endl;
	return 1;
	parse_error:
		std::cerr << "Error: Parsing the Data file." << std::endl;
	return 2;
	}
}