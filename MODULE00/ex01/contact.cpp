#include "contact.hpp"

Contact::Contact()
{
	contact_fields[0] = "First Name: ";
	contact_fields[1] = "Last Name: ";
	contact_fields[2] = "Nick Name: ";
	contact_fields[3] = "Phone Number: ";
	contact_fields[4] = "Darkest Secret: ";
	contact_info[0].clear();
	contact_info[1].clear();
	contact_info[2].clear();
	contact_info[3].clear();
	contact_info[4].clear();
}

void	Contact::set_param(int index, std::string val)
{
	contact_info[index] = val;
}

std::string Contact::get_param(int index)
{
	return (contact_info[index]);
}
std::string Contact::get_contact_field(int index)
{
	return (contact_fields[index]);
}