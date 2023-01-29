#include "Data.hpp"

uintptr_t	serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));	
}

Data	*deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int	main(){
	uintptr_t	p;
	
	{
		Data	data;
		data.i = 6;
		data.c = 'a';
		data.d = 6.66;
		data.ui = -3;
		data.s = "It's working.";
		p = serialize(&data);
	}
	Data	*data = deserialize(p);
	std::cout << data->i << std::endl;
	std::cout << data->c << std::endl;
	std::cout << data->d << std::endl;
	std::cout << data->ui << std::endl;
	std::cout << data->s << std::endl;
}