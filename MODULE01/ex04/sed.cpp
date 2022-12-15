#include "sed.hpp"

std::string	replace(std::string str, char *from, char *to){
	std::string	s = "";
	size_t	found;
	int		next;

	next = strlen(from);
	while (1)
	{
		found = str.find(from);
		if (found == std::string::npos)
		{
			next = -1;
			found = str.size();
		}
		s.append(std::string(str.begin(), str.begin() + found));
		if (next == -1)
			return (s);
		s.append(to);
		str = str.substr(found + next);
	}
	return (s);
}