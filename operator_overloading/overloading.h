#include <iostream>

using namespace std;

//Func overloading ayn�isimde farkl� tipte parametreyle func tan�mla


class Person
{
private:
	string personName, personSurname;
	int personAge;

public:
	//>> << nunmember olarak a��r� y�klenir
	friend void PersonFriend(const Person& personObject);
	//s�n�f�n nesnesi == ,biz her iki taraf�da d��ar�dan alaca��z.
	friend bool operator !=(const Person& firstObject, const Person& secondObject);

	friend ostream& operator<<(ostream&, const Person&);//Nesne kullan bilgi yaz const
	friend istream& operator>>(istream&, Person&);//Nesne �zerinde de�i�iklik yap

	Person();
	Person(string name, string surname, int age);
	void display();
	
	//== overloading
	bool operator==(const Person& oth);

	void operator++();
	void operator++(int);
};

Person::Person()
{
	personName = "";
	personSurname = "";
	personAge = 0;

}

Person::Person(string name,string surname,int age)
{
	personName = name;
	personSurname = surname;
	personAge = age;

}

void Person::display()
{
	cout << "Ad: " << personName << endl;
	cout << "Soyad: " << personSurname << endl;
	cout << "Yas: " << personAge << endl;

}

bool Person::operator==(const Person& oth)
{
	return (personName == oth.personName && personSurname == oth.personSurname&&personAge==oth.personAge);

}


void Person::operator++()
{
	personAge++;
}

//Overload
void Person::operator++(int)
{
	personAge++;
}

void PersonFriend(const Person& personObject)
{
	cout << "Ad: " << personObject.personName << endl;
	cout << "Soyad: " << personObject.personSurname << endl;
	cout << "Yas: " << personObject.personAge << endl;
}

bool operator !=(const Person& firstObject, const Person& secondObject)
{
	return !(firstObject.personName == secondObject.personName && firstObject.personSurname == secondObject.personSurname && firstObject.personAge == secondObject.personAge);
}

ostream& operator<<(ostream& osObject, const Person& personObject)
{
	osObject << "Ad: " << personObject.personName << endl
		     << "Soyad: " << personObject.personSurname << endl
		     << "Yas: " << personObject.personAge << endl;

	return osObject;
}

istream& operator>>(istream& isObject, Person& personObject)
{
	isObject >> personObject.personName >> personObject.personSurname >> personObject.personAge;

	return isObject;
}












