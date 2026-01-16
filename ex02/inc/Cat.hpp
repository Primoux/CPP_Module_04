#include "Animal.hpp"
#include "Brain.hpp"
#include <ostream>

class Cat : public Animal
{
  private:
	Brain *brain;
	

  public:
	// CONSTRUCTOR
	Cat();
	~Cat();
	Cat(Cat const &original);

	// OPERATOR
	Cat &operator=(const Cat &other);

	//MEMBER FUNCTION
	void makeSound(void) const;
	void lookInside(void) const;

};
std::ostream &operator<<(std::ostream &o, const Cat &obj);