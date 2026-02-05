#include "Animal.hpp"
#include "Brain.hpp"
#include <ostream>

class Cat : public Animal
{
  private:
	Brain *_brain;
	

  public:
	// CONSTRUCTOR
	Cat();
	~Cat();
	Cat(Cat const &original);

	// OPERATOR
	Cat &operator=(const Cat &other);

	//MEMBER FUNCTION
	void makeSound(void) const;
	void printBrain(void) const;

};
std::ostream &operator<<(std::ostream &o, const Cat &obj);