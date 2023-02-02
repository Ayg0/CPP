#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
private:
	std::vector<int>	vec;
	unsigned int		max_len;
public:
	Span();
	Span(unsigned int size);
	Span(Span& copy);
	Span& operator=(Span& assign);
	void addNumber(int number);
	unsigned int size();
	void insertElements(int *elements, unsigned long size);
	std::vector<int>& getVector();
	unsigned int shortest_span();
	unsigned int longest_span();
	~Span();
};

# endif