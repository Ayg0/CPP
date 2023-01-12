#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal(std::string type);
		WrongAnimal & operator=(const WrongAnimal &assign);
		std::string getType() const;
		virtual void		makeSound() const = 0;
		~WrongAnimal();
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		void	makeSound() const;
		WrongCat & operator=(const WrongCat &assign);		
		~WrongCat();
	private:
		
};

#endif