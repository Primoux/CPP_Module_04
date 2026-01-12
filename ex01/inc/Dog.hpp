#include "Animal.hpp"
#include "Brain.hpp"
#include <ostream>

class Dog : public Animal
{
  private:
	Brain *brain;

	
  public:
	// CONSTRUCTOR
	Dog();
	~Dog();
	Dog(Dog const &original);

	// OPERATOR
	Dog &operator=(const Dog &other);

	//MEMBER FUNCTION
	void makeSound(void) const;
	void lookInside(void) const;
};
std::ostream &operator<<(std::ostream &o, const Dog &obj);