#include "Harl.hpp"

Harl::Harl(){
	std::cout << "A new Harl came to the World ..." << std::endl;
}

Harl::~Harl(){
	std::cout << "... Finally some rest from Harl"<< std::endl;
}

void	Harl::harlConfused(){
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::debug(){
	std::cout << "[ DEBUG ]" << std::endl
	<< "I love having extra bacon for my 7XL-double-cheese-"
	<< "triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(){
	std::cout << "[ INFO ]" << std::endl
	<< " cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger"
	<< "! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(){
	std::cout << "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra bacon for free."
	<< " I’ve been coming for years whereas you started "
	<< "working here since last month." << std::endl;
}

void	Harl::error(){
	std::cout << "[ ERROR ]" << std::endl
	<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}