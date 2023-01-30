#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
private:
	T 		*arr;
	size_t	len;
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
		set_size(copy.size());
		arr = new T[len];
		for (size_t i = 0; i < len; i++)
			arr[i] = copy[i];
		return (*this);
	}
	T	&operator[](unsigned int index){
		if (index >= len)
			throw std::runtime_error("Exception: index is out of bounds.");
		return (arr[index]);
	}
	size_t	size(void) const{
		return (len);
	}
	void	set_size(unsigned int n){
		len = n;
	}
	~Array(){
		delete arr;
	}
};


# endif