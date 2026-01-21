#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <ostream>

class Cat : public Animal
{
	private:
	
	
	public:
	// CONSTRUCTOR
	Cat();
	~Cat();
	Cat(Cat const &original);
	
	// OPERATOR
	Cat &operator=(const Cat &other);
	
	//MEMBER FUNCTION
	void makeSound(void) const;
};
std::ostream &operator<<(std::ostream &o, const Cat &obj);

#endif // !CAT_HPP