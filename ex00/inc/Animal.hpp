#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <ostream>

using std::string;

class Animal
{
  private:


  protected:
	string type;

  public:
	// CONSTRUCTOR
	Animal();
	~Animal();
	Animal(const Animal &original);

	// OPERATOR
	Animal &operator=(const Animal &other);

	//MEMBER FUNCTION
	void makeSound(void);
};
std::ostream &operator<<(std::ostream &o, const Animal &obj);

#endif // !ANIMAL_HPP