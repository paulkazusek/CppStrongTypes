#include <iostream>
#include <memory>

#include "person.h"

using namespace std;

int main() 
{ 
	shared_ptr<Person> max = make_shared<Person>("Max", "Mustermann");

    cout << "Hello " << max->getForename().c_str() << " " << max->getSurname().c_str() << endl; 
      
    return 0; 
} 