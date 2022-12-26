#include "Harl.hpp"

Harl::Harl(){
	std::cout << "A new Harl came to the World ..." << std::endl;
}

Harl::~Harl(){
	std::cout << "... Finally some rest from Harl"<< std::endl;
}


void	Harl::harlConfused(){
	std::cout << "Harl got the extra bacon ? Harl confused ? what Harl think of now ?" << std::endl;
}

void	Harl::debug(){
	std::cout << "I love having extra bacon";
	std::cout << " for my 7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << " burger. I really do!" << std::endl;
}

void	Harl::info(){
	std::cout << " cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger";
	std::cout << "! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl;
}

void	Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	void	(Harl::*fun_pointer[])(void) = {&Harl::harlConfused, &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	all[] = {"debug", "info", "warning", "error"};
	int		index;
	index = !(level.compare(all[0])) * 1 + !(level.compare(all[1])) * 2 + !(level.compare(all[2])) * 3 + !(level.compare(all[3])) * 4;
	(this->*fun_pointer[index])();
}