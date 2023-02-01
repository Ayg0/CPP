#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
void	easyfind(T &a, int i){
	if (std::find(a.begin(), a.end(), i) == a.end())
		throw std::runtime_error("Couldn't find the integer.");
}

# endif