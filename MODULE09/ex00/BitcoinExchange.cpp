#include "BitcoinExchange.hpp"

Entries::Entries(){
}

Entries::Entries(Entries &entries){
	this->operator=(entries);
}

Entries &Entries::operator=(Entries &entries){
	this->date_exchange = entries.date_exchange;
	return (*this);
}

int	eval_date(std::string const &date){
	char	*tmp;
	std::tm	t;

	tmp = strptime(date.c_str(), "%F", &t);
	if (!tmp || *tmp != '\0')
		return (-1);
	// dates 2009-12-02 = 20091202
	return (((t.tm_year + 1900) * 100 + (t.tm_mon + 1)) * 100 + t.tm_mday);
}

float	eval_price(std::string const &price){
	char	*ind;
	float	res;

	res = std::strtod(price.c_str(), &ind);
	if (*ind != '\0')
		return (-1);
	return (res);
}

int	Entries::add_entry(std::string *data){
	int		date;
	float	price;

	date = eval_date(data[0]);
	price = eval_price(data[1]);
	if (date < 0 || price < 0)
		return 1;
	date_exchange[date] = price;
	return (0);
}

Entries::~Entries(){
}
