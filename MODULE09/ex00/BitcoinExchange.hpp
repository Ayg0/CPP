#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>
# include <ctime>
# include <map>

class	Entries{
	public:
		std::map<int, float>		date_exchange;

		Entries();
		Entries(Entries &entries);
		Entries &operator=(Entries &entries);
		int		add_entry(std::string *data);
		~Entries();			
};
int		eval_date(std::string const &date);
float	eval_price(std::string const &price);
#endif