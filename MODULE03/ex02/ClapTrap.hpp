/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <ted-dafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:24:05 by ted-dafi          #+#    #+#             */
/*   Updated: 2023/01/09 11:45:33 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &a);
		ClapTrap   &operator = (const ClapTrap &a);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	set_energy_points(int nu);
		void	set_hit_points(int nu);
		void	set_attack_points(int nu);
		int		get_energy_points(void) const;
		int		get_hit_points(void) const;
		int		get_attack_points(void) const;
		~ClapTrap();
};


#endif