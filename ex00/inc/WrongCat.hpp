#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <ostream>

class WrongCat : public WrongAnimal
{
  private:
	

  public:
	// CONSTRUCTOR
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &original);

	// OPERATOR
	WrongCat &operator=(const WrongCat &other);

	//MEMBER FUNCTION
	void makeSound(void) const;
};
std::ostream &operator<<(std::ostream &o, const WrongCat &obj);

#endif // !WRONGCAT_HPP