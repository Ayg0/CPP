#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <stack>
# include <deque>
# include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename MutantStack::container_type::iterator iterator;
		typedef typename MutantStack::container_type::const_iterator const_iterator;
		iterator	begin(){
			return (this->c.begin());
		}
		iterator	end(){
			return (this->c.end());
		}
		
		const_iterator	cbegin(){
			return (this->c.cbegin());
		}
		const_iterator	cend(){
			return (this->c.cend());
		}
};

# endif