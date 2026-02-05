#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <ostream>
#include <string>

#define MAX_IDEAS 10

using std::string;

class Brain
{
  private:
	string _ideas[MAX_IDEAS];

  public:
	// CONSTRUCTOR
	Brain();
	~Brain();
	Brain(const Brain &original);

	// OPERATOR
	Brain &operator=(const Brain &other);

	//MEMBER FUNCTION
	const string getIdea(unsigned int index);
	void setIdea(const string &idea);
};
std::ostream &operator<<(std::ostream &o, const Brain &obj);

#endif // !BRAIN_HPP