#include "Animal.hpp"
#include <ostream>

class Cat : Animal
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
	void makeSound(void);
};
std::ostream &operator<<(std::ostream &o, const Cat &obj);