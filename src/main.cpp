#include <iostream>

#include "person.h"

using namespace std;

int main() 
{ 
	Person* max = new Person("Max", "Mustermann");

    cout << "Hello " << max->getForename().c_str() << " " << max->getSurname().c_str() << endl; 
      
    return 0; 
} 