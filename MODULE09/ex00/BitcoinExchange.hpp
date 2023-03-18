#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>
# include <ctime>
# include <vector>

class	Entries{
	private:
		std::vector<int>			date;
		std::vector<float>			price;
	public:
		Entries();
		Entries(Entries &entries);
		Entries &operator=(Entries &entries);
		int		eval_date(std::string const &date);
		int		add_entry(std::string *data);
		float	eval_price(std::string const &price);
		~Entries();			
};
#endif