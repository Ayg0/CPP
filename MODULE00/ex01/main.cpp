#include <iostream>
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

int		show_options(Phonebook *pb)
{
	int	index;

	index = 0;
	std::cout << "|     Index|first Name| Last Name| Nick Name|" << std::endl;
	while (!pb->get_contact(index, 0).empty() && index < 8)
	{
		std::cout << "|" << std::setw(10) << (index + 1) << "|";
		for(int i = 0; i < 3; i++)
			handle_printing(pb, index, i);
		std::cout << std::endl;
		index++;
	}
	return (index);
}

void	search(Phonebook *pb)
{
	int	cont_i;
	std::string	nbr;

	cont_i = 0;
	
	cont_i = show_options(pb);
	std::cout << ">>> ";
	std::getline(std::cin, nbr);
	if (nbr.size() == 1 && nbr[0] - 49 < cont_i && (nbr[0] -= 49) >= 0)
		for(int i = 0; i < 5; i++)
			std::cout << pb->get_field(nbr[0], i)
				<< pb->get_contact(nbr[0], i) << std::endl;
	else
		std::cout << "Error" << std::endl;
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