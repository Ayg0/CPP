#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

# define BLUS_MINOSU_MULTO_DAVI(OP) \
 do {\
	if (nums.size() < 2)\
		goto ERR_OPERANDS;\
	ssize_t	n[2];\
	n[0] = nums.top();\
	nums.pop();\
	n[1] = nums.top();\
	nums.pop();\
	nums.push(n[1] OP n[0]);\
 } while (0)
 
#endif

