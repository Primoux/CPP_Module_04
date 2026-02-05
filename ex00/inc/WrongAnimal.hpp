#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <ostream>
#include <string>

class WrongAnimal
{
  private:


  protected:
	std::string _type;

  public:
	// CONSTRUCTOR
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &original);

	// OPERATOR
	WrongAnimal &operator=(const WrongAnimal &other);

	//MEMBER FUNCTION
	const std::string getType(void) const;
	void makeSound(void) const;
};
std::ostream &operator<<(std::ostream &o, const WrongAnimal &obj);

#endif // !WRONGANIMAL_HPP