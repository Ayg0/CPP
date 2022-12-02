#include <iostream>
#include <string>
#include <iomanip>
#include "phonebook.hpp"

void	add(Phonebook *phonebook, int *cont_i)
{
	int			index;
	std::string	s;

	index = 0;
	while (index < 5 && !std::cin.fail())
	{
		std::cout << phonebook->get_field(*cont_i, index);
		std::getline(std::cin, s);
		if (s.empty() || phonebook->set_contact(*cont_i, index, s))
		{
			if (!std::cin.fail())
				std::cout << "invalid input ?!" << std::endl;
			continue;
		}
		index++;
	}
	(*cont_i)++;
	return;
}

void handle_printing(Phonebook *pb, int cont_i, int i)
{
	std::string	tmp;

	tmp = pb->get_contact(cont_i, i);
	if (tmp.size() <= 10)
		std::cout << std::setw(10) << tmp << "|";
	else
		std::cout << std::string(tmp.begin(), tmp.begin() + 9) << ".|";
	return;
}

void	search(Phonebook *pb)
{
	int	cont_i;

	cont_i = 0;
	std::cout << "|     Index|first Name| Last Name| Nick Name|" << std::endl;
	while (!pb->get_contact(cont_i, 0).empty() && cont_i < 8)
	{
		std::cout << "|" << std::setw(10) << (cont_i + 1) << "|";
		for(int i = 0; i < 3; i++)
			handle_printing(pb, cont_i, i);
		std::cout << std::endl;
		cont_i++;
	}
	return;
}

int	main()
{
	std::string	s;
	Phonebook	phonebook;
	int			index;

	index = 0;
	while (!std::cin.fail())
	{
		std::cout << ">> ";
		std::getline(std::cin, s);
		if (s == "ADD")
			add(&phonebook, &index);
		else if (s == "SEARCH")
			search(&phonebook);
		else if (s == "EXIT")
			return(0);
		index %= 8;
	}
}