#ifndef _PERSON_
#define _PERSON_


class Person
{
public:
	Person( std::string forename, std::string surname ) : forename_( forename ), surname_( surname ) {}

	std::string getForename() const { return forename_; }
	std::string getSurname() const { return surname_; }

private:
	std::string forename_;
	std::string surname_;
};

#endif // !_PERSON_
