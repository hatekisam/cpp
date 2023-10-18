#include <iostream>
using namespace std;
class Student
{
private:
	string name;

public:
	Student(string name);
	void displayName();
};

Student::Student(string name)
{
	this->name = name;
}

void Student::displayName()
{
	if(this->name.empty()) cout << "There is no name" << endl;
	cout << "Student name is " << name << endl;
}

int main()
{
	string name;
	cout << "Enter the name of the student :" ; 
	getline(cin,name);
	Student one(name);
	one.displayName();
	return 0;
}