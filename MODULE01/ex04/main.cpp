#include "sed.hpp"

std::string	read_file(char  *name){
    std::ifstream infile(name);

    std::stringstream strStream;
    strStream << infile.rdbuf();
	infile.close();
    return (strStream.str());
}

void	write_to_file(std::string str, char **av){
	std::fstream	outfile;

	outfile.open(std::string(av[1]).append(".replace"), std::ios::out);
	str = replace(str, av[2], av[3]);
	outfile << str;
	outfile.close();
}

int main(int ac, char **av) {

	if (ac != 4 || !strlen(av[2])){
		std::cout << "invalid arguments" << std::endl;
		return (1);	
	}
	std::string str = read_file(av[1]);
	write_to_file(str, av);
}