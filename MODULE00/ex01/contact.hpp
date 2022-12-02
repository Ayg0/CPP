#ifndef CONTACT_HPP
# define	CONTACT_HPP
#include <string>
class Contact
{
	private:
		std::string	contact_info[5];
		std::string	contact_fields[5];
	public:
		Contact();
		void		set_param(int index, std::string val);
		std::string	get_param(int index);
		std::string	get_contact_field(int index);
};


#endif