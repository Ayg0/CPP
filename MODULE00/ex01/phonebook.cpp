#include "phonebook.hpp"

int	checkif_all_nums(std::string val)
{
	size_t i;

	for(i = 0; isdigit(val[i]); i++);
	return (val[i]);
}

int	Phonebook::set_contact(int cont_i, int index, std::string val)
{
	if (index == 3 && checkif_all_nums(val))
		return (1);
	contact[cont_i].set_param(index, val);
	return (0);
}

std::string	Phonebook::get_contact(int cont_i, int index)
{
	return (contact[cont_i].get_param(index));
}

std::string	Phonebook::get_field(int cont_i, int index)
{
	return (contact[cont_i].get_contact_field(index));
}