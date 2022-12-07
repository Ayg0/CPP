/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <ted-dafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:00:59 by ted-dafi          #+#    #+#             */
/*   Updated: 2022/12/04 14:08:09 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define	PHONEBOOK_HPP
# include "contact.hpp"

class Phonebook
{
private:
	Contact contact[8];
public:
	int			set_contact(int cont_i, int index, std::string val);
	std::string	get_contact(int cont_i, int index);
	std::string	get_field(int cont_i, int index);
};
#endif