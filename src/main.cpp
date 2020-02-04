#include <iostream>
#include <memory>

#include "person.h"

using namespace std;

int main() 
{ 
	shared_ptr<Person> max = make_shared<Person>( Forename( "Max" ), Surname( "Mustermann" ) );

    cout << "Hallo " << max->getForename().get() << " " << max->getSurname().get() << endl;
      
    return 0; 
} 