#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <ostream>
#include <string>

using std::string;

class Brain
{
  private:
	string ideas[100];

  public:
	// CONSTRUCTOR
	Brain();
	~Brain();
	Brain(const Brain &original);

	// OPERATOR
	Brain &operator=(const Brain &other);

	//MEMBER FUNCTION
	const string getIdea(unsigned int index);
};
std::ostream &operator<<(std::ostream &o, const Brain &obj);

#endif // !BRAIN_HPP