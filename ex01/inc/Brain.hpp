#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <ostream>
#include <string>

#define MAX_IDEAS 100

class Brain
{
  private:
	std::string 	_ideas[MAX_IDEAS];
	unsigned int 	_id;

  public:
	// CONSTRUCTOR
	Brain();
	~Brain();
	Brain(const Brain &original);

	// OPERATOR
	Brain &operator=(const Brain &other);

	//MEMBER FUNCTION
	const std::string	getIdea(unsigned int index);
	void 				setIdea(const std::string &idea);
	unsigned int 		getId(void) const;
	

};
std::ostream &operator<<(std::ostream &o, const Brain &obj);

#endif // !BRAIN_HPP