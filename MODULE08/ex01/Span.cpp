#include "Span.hpp"

Span::Span(){
	max_len = 0;
}

Span::Span(unsigned int len){
	max_len = len;
}

unsigned int Span::size(){
	return (max_len);
}

Span::Span(Span& copy){
	this->operator=(copy);
}

std::vector<int>& Span::getVector(){
	return (vec);
}

Span& Span::operator=(Span& assign){
	vec = assign.getVector();
	max_len = assign.size();
	return (*this);
}

void Span::addNumber(int number){
	if (max_len == (vec.size()))
		throw std::runtime_error("Max numbers reached Can not Add More...");
	vec.push_back(number);
}

void Span::insertElements(int *elements, unsigned long size){
	if (vec.size() + size > max_len)
		throw std::runtime_error("Max numbers will be exeeded can no add these elements");
	vec.insert(vec.end(), elements, elements + size);
}

unsigned int Span::shortest_span(){
	std::vector<int>	tmp = vec;
	int					dis;

	std::sort(tmp.begin(), tmp.end());
	dis = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < max_len; i++)
		dis = dis * (dis <= (tmp[i] - tmp[i - 1])) + (tmp[i] - tmp[i - 1]) * (dis > (tmp[i] - tmp[i - 1]));
	return (dis);
}

unsigned int Span::longest_span(){
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[max_len - 1] - tmp[0]);
}

Span::~Span(){
	std::cout << "Span Destructor Called >>" << std::endl;
}
