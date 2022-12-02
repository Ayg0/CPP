#include "phonebook.hpp"

int	Phonebook::set_contact(int cont_i, int index, std::string val)
{
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