#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
private:
	T 		*arr;
	unsigned int	len;
public:
	Array(){
		arr = NULL;
		len = 0;
	}
	Array(unsigned int n){
		arr = new T[n]();
		len = n;
	}
	Array(Array &copy){
		this->operator=(copy);
	}
	Array &operator=(Array &copy){
		if (arr)
			delete[] arr;
		len = copy.size();
		arr = new T[len];
		for (unsigned int i = 0; i < len; i++)
			arr[i] = copy[i];
		return (*this);
	}
	T	&operator[](long index){
		if (index >= len || index < 0)
			throw std::runtime_error("Exception: index is out of bounds.");
		return (arr[index]);
	}
	unsigned int	size(void) const{
		return (len);
	}
	~Array(){
		delete arr;
	}
};


# endif