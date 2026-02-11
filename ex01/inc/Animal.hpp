#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <ostream>
#include <string>


class Animal
{
  private:


  protected:
	std::string _type;

  public:
	// CONSTRUCTOR
	Animal();
	virtual ~Animal();
	Animal(const Animal &original);

	// OPERATOR
	Animal &operator=(const Animal &other);

	//GETTERS
	const std::string getType(void) const;

	//MEMBER FUNCTION
	virtual void makeSound(void) const;
	virtual void printBrain(void) const;

};
std::ostream &operator<<(std::ostream &o, const Animal &obj);

#endif // !ANIMAL_HPP