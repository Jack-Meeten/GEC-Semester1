#ifndef MAMMALS_H
#define MAMMALS_H
#include <iostream>
using namespace::std;

//mammal is the base class

class Mammal
{
public:
	Mammal() : itsAge(1){}
	~Mammal() {}

	virtual void Speak() const { cout << "Mammal speak!\n"; }

protected:
	int itsAge;
};

//dogclass
class Dog : public Mammal
{
public:
	void Speak() const { cout << "Woof\n"; }
};
//catclass
class Cat : public Mammal
{
public:
	void Speak() const { cout << "meow\n"; }
};
//horseclass
class Horse : public Mammal
{
public:
	void Speak() const { cout << "Neigh\n"; }
};
//pigclass
class Pig : public Mammal
{
public:
	void Speak() const { cout << "Oink\n"; }
};
#endif

