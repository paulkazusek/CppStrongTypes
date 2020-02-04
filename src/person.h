#ifndef _PERSON_
#define _PERSON_

#include <string>

#include "named_typed.h"

using Forename = NameTyped<std::string>;
using Surname = NameTyped<std::string>;

class Person
{
public:
	Person( Forename forename, Surname surname ) : forename_( forename.get() ), surname_( surname ) {}

	Forename getForename() const { return forename_; }
	Surname getSurname() const { return surname_; }

private:
	Forename forename_;
	Surname surname_;
};

#endif // !_PERSON_
