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
	cout << "Student name is " << name << endl;
}

int main()
{
	Student one("Mugisha Yves");
	one.displayName();
	return 0;
}