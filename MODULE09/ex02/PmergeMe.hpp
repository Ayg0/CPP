#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

int	fill(char **av, std::vector<int> &vec, std::deque<int> &deq);

template <typename	T>
void	merge(T &arr, T const &left_arr, T const &right_arr){
	size_t	l = 0, r = 0;
	size_t	l_size = left_arr.size();
	size_t	r_size = right_arr.size();
	size_t	size = arr.size();

	for (size_t i = 0; i < size; i++)
	{
		if ((l < l_size && r < r_size && left_arr[l] < right_arr[r]) || (l < l_size && r >= r_size)){
			arr[i] = left_arr[l];
			l++;
			continue;	
		}
		arr[i] = right_arr[r];
		r++;
	}
}

template <typename	T>
void	insersion_sort(T &arr){
	size_t	size = arr.size();
	size_t	j;

	for (size_t i = 1; i < size; i++){
		j = i;
		while (j && arr[j] < arr[j - 1])
		{
			std::swap(arr[j], arr[j - 1]);
			j--;
		}
	}
}

template <typename	T>
void	mergeInsertionSort(T &arr){
	size_t	size = arr.size();
	if (size > 4){
	size /= 2;
	T left_arr(arr.begin(), arr.begin() + size);
	T right_arr(arr.begin() + size, arr.end());
	mergeInsertionSort(left_arr);
	mergeInsertionSort(right_arr);
	merge(arr, left_arr, right_arr);
	}
	else
		insersion_sort(arr);
}

#endif