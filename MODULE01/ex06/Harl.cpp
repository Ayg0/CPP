#include "Harl.hpp"

void	Harl::harlConfused(){
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::debug(){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon";
	std::cout << " for my 7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << " burger. I really do!" << std::endl;
}

void	Harl::info(){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << " cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger";
	std::cout << "! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl;
}

void	Harl::error(){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}