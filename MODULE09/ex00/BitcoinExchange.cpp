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
	if (!tmp || *tmp != '\0' || t.tm_mday == 0)
		return (-1);
	// dates 2009-12-02 = 20091202
	return (((t.tm_year + 1900) * 100 + (t.tm_mon + 1)) * 100 + t.tm_mday);
}

float	eval_price(std::string const &price, int &err_flag){
	char	*ind;
	float	res;
	std::string	tmp(price);

	if (tmp[0] == ' ')
		tmp[0] = 'a';
	res = std::strtod(tmp.c_str(), &ind);
	if (*ind != '\0' || &tmp[0] == ind)
		err_flag = -1;
	return (res);
}

int	Entries::add_entry(std::string *data){
	int		date;
	float	price;
	int		err_flag;

	err_flag = 0;
	date = eval_date(data[0]);
	price = eval_price(data[1], err_flag);
	if (date < 0 || price < 0 || err_flag)
		return 1;
	date_exchange[date] = price;
	return (0);
}

Entries::~Entries(){
}
