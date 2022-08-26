//선언부

#ifndef  COMPONENTS_H
#define COMPONENTS_H
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//유저
class Username {
private:
	
	int money;
	static bool isBurning;
	friend class Manager;
	friend class Item;
	
protected:
	string const name;
	int level;
	static int luck;
public:
	Username();
	Username(string name, int level, int money, int luck);
	virtual void attack();
	void defend();
	virtual void combinate();
	Item combinate(Item a, Item b);
};

class Warrior :Username {
public:
	Warrior();
	Warrior(string Name, int Level, int money, int Luck);
	void attack();
	void defend();
};
class Magician : Username {
public:
	Magician();
	Magician(string Name, int Level, int money, int Luck);
	void attack();
	void defend();
};
class Archer : Username {
public:
	Archer();
	Archer(string Name, int Level, int money, int Luck);
	void attack();
	void defend();
};

//아이템
class Item {
protected:
	string const name;
	int  performance;
private	:
	static string Name;
	int Performance;
	friend class Manager;
	friend class User;
public:
	Item(string Name, int  Performance);
	static int SuccessPercentage;
	int GetPerformance();
	Item & operator+ (Item b);
};

//Manager
class Manager {
	string  name;
public:
	Manager(string  name);
	void openBurningEvent();
	void closeBurningEvent();
};

#endif 
