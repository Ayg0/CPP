#include "BitcoinExchange.hpp"

Entries::Entries(){
}

Entries::Entries(Entries &entries){
	this->operator=(entries);
}

Entries &Entries::operator=(Entries &entries){
	this->date = entries.date;
	this->price = entries.price;
	return (*this);
}

int	Entries::eval_date(std::string const &date){
	char	*tmp;
	std::tm	t;

	tmp = strptime(date.c_str(), "%F", &t);
	if (!tmp || *tmp != '\0')
		return (-1);
	// dates 2009-12-02 = 20091202
	return (((t.tm_year + 1900) * 100 + (t.tm_mon + 1)) * 100 + t.tm_mday);
}

float	Entries::eval_price(std::string const &price){
	size_t ind;
	float	res;
	try{
		res = stof(price, &ind);
	}
	catch(...){
		return (-1);
	}
	if (price[ind] != '\0'){
		return (-1);
	}
	return (res);
}

int	Entries::add_entry(std::string *data){
	int		date;
	float	price;

	date = eval_date(data[0]);
	price = eval_price(data[1]);
	if (date < 0 || price < 0)
		return 1;
	this->date.push_back(date);
	this->price.push_back(price);
	return (0);
}

Entries::~Entries(){
}
