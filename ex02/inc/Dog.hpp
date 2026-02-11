#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <ostream>

class Dog : public Animal
{
  private:
	Brain *_brain;


  public:
	// CONSTRUCTOR
	Dog();
	~Dog();
	Dog(Dog const &original);

	// OPERATOR
	Dog &operator=(const Dog &other);

	//MEMBER FUNCTION
	void makeSound(void) const;
	void printBrain(void) const;
	void setIdea(const std::string &idea);
};
std::ostream &operator<<(std::ostream &o, const Dog &obj);

#endif // !DOG_HPP