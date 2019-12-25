#include "student.h"
#include "roster.h"

int Student::getAge()
{
	return age;
}

int* Student::getDaysInCourse()
{
	return daysToComplete;
}

string Student::getEmail()
{
	return emailAddress;
}

string Student::getFirstName()
{
	return firstName;
}

string Student::getLastName()
{
	return lastName;
}

string Student::getStudentId()
{
	return studentID;
}

Degree Student::getDegreeType()
{
	return Degree();
}

void Student::setAge(int age)
{
	this->age = age;
}

void Student::setDaysInCourse(int* daysInCourse)
{
	for (int i = 0; i < daysArraySize; i++) {
		daysToComplete[i] = daysInCourse[i];
	}
}

void Student::setEmail(string emailAddress)
{
	this->emailAddress = emailAddress;
}

void Student::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Student::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Student::setStudentId(string studentID)
{
	this->studentID = studentID;
}

void Student::setDegreeType(Degree degreeType)
{
	DegreeType = degreeType;
}

Student::Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse[3], Degree degreeType)
{
	setStudentId(studentId);
	setFirstName(firstName);
	setLastName(lastName);
	setEmail(emailAddress);
	setAge(age);
	setDaysInCourse(daysInCourse);
	setDegreeType(degreeType);
}

void Student::print()
{
	int* daysInCourse = getDaysInCourse();
	cout << getStudentId();
	cout << "\tFirst Name: " << getFirstName();
	cout << "\tLast Name: " << getLastName();
	cout << "\tAge: " << getAge();
	cout << "\tDays in Course: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "} ";
	cout << "Degree Program: ";

	switch (getDegreeProgram()) {
	case SECURITY: cout << "Security\n";
		break;
	case NETWORKING: cout << "Networking\n"; 
		break;
	case SOFTWARE: cout << "Software\n";
		break;
	case NA: cout << "N/A\n";
	}
}

Degree Student::getDegreeProgram()
{
	return DegreeType;
}

Student::~Student()
{
}