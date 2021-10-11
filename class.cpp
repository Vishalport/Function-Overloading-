#include <iostream>
#include<string>
using namespace std;

class Employee {        // creating  class

	public: 
		int id;
		string firstName;
		string lastName;

		Employee() {        // creating constructor 

			/*
				this line of code autometic creat, when the object of the class is created.
			*/

			cout<< "object is created " << endl;
		}


	string getFullName() {        // methord function 
		return firstName + "" + lastName;
	}
};

int main() {

	/*
		creating 1st class  object 
	*/

	Employee user1;     
	user1.id = 2165;
	user1.firstName = "ROHAN";
	user1.lastName = "SHARMA";

	
	cout<<"user ID :\t"<< user1.id << endl;
	cout<< "user_name :\t"<<user1.getFullName() << endl<<endl;

	/*
		 creating 2nd class object 
	*/

	Employee user2;
	user2.id = 2166;
	user2.firstName = "AMAN";
	user2.lastName = "KUMAR";




	/* 
	printing class object
	*/

	cout<< "user_ID :\t" << user2.id <<endl;
	cout<< "user_name :\t"<< user2.getFullName() << endl<< endl;

}