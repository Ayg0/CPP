#include "RPN.hpp"

int	main(int ac, char **av){
	std::stack<ssize_t>	nums;
	if (ac != 2)
		goto ERR;
	for (size_t i = 0; av[1][i]; i++)
	{
		switch (av[1][i])
		{
		case '+':
			BLUS_MINOSU_MULTO_DAVI(+);
			break;
		case '-':
			BLUS_MINOSU_MULTO_DAVI(-);
			break;
		case '*':
			BLUS_MINOSU_MULTO_DAVI(*);
			break;
		case '/':
			BLUS_MINOSU_MULTO_DAVI(/);
			break;
		case ' ':
			break;
		default:
			if (isdigit(av[1][i]) && !isdigit(av[1][i + 1]))
				nums.push(av[1][i] - 48);
			else
				goto ERR_VALUES;
			break;
		}
	}
	if (nums.size() != 1)
		goto ERR_MORE;
	std::cout << nums.top() << std::endl;
	return 0;
	{
		ERR:
			std::cerr << "Error" << std::endl;
			return 1;
		ERR_VALUES:
			std::cerr << "Error, Couldn't proccess one of the values entered." << std::endl;
			return 2;
		ERR_OPERANDS:
			std::cerr << "Error, unable to find enough operands for the operation." << std::endl;
			return 3;
		ERR_MORE:
			std::cerr << "Error, the operations couldn't satisfy the number of operands." << std::endl;
			return 3;
	}
}