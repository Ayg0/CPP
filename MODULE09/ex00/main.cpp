#include "BitcoinExchange.hpp"

int	parse_in(std::fstream &input, Entries &data){
	std::string line, word[2];
	int			i;

	getline(input, line);
	if (line != "date,exchange_rate")
		return 1;
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

float	custom_lower_bound(std::map<int, float>::iterator begin, std::map<int, float>::iterator end, int date){
	for (size_t i = 0; begin != end; i++)
	{
		if (begin->first > date){
			if (i == 0 && begin->first != date)
				return (-1);
			if (i != 0)
				begin--;
			return (begin->second);
		}
		begin++, i++;
	}
	return ((--begin)->second);
}

int exec(Entries &data, std::fstream	&inputf){
	std::string line, val[2];
	int			i, date, err_flag;
	float		value, price;
	

	getline(inputf, line);
	if (line != "date | value")
		return -1;
	while (getline(inputf, line))
	{
		std::stringstream	s(line);
		i = 0;
		err_flag = 0;
		while (i < 2 && getline(s, val[i], '|'))
			i++;
		if (i != 2 || val[1].empty())
			goto BAD_INPUT;
		if (val[0].length() == 11 && val[0][10] == ' ')
			val[0][10] = 0;
		date = eval_date(val[0]);
		if (date < 0)
			goto BAD_INPUT;
		value = eval_price(&val[1][(val[1][0] == ' ')], err_flag);
		if (err_flag)
			goto NOT_A_PURE_NUMBER;
		if (value < 0)
			goto NEGATIVE;
		if (value > 1000)
			goto TOO_BIG;
		price = custom_lower_bound(data.date_exchange.begin(), data.date_exchange.end(), date);
		if (price < 0)
			goto NO_VALID_OPTION;
		std::cout << val[0] << " => " << value << " = " << price * value << std::endl;
		continue;
	// ERRS
		BAD_INPUT:
			std::cerr << "Error: bad input => " << s.str() << std::endl;
			continue;
		NEGATIVE:
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		TOO_BIG:
			std::cerr << "Error: too large a number." << std::endl;
			continue;
		NO_VALID_OPTION:
			std::cerr << "Error: Couldn't find a valid value." << std::endl;
			continue;
		NOT_A_PURE_NUMBER:
			std::cerr << "Error: not a pure number :" << val[1] << " ;" << std::endl;
			continue;
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
	if (exec(data, inputf))
		goto header_error;
	return (0);
	// ERRS:
	{
	args:
		std::cerr << "Error: could not open file." << std::endl;
	return 1;
	parse_error:
		std::cerr << "Error: Parsing the Data file." << std::endl;
	return 2;
	header_error:
		std::cerr << "Error: require 'date | value' ." << std::endl;
	return 2;
	}
}