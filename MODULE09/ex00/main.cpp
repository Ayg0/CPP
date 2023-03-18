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
	return 0;
}