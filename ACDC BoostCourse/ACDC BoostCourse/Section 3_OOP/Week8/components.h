//선언부
#ifndef  COMPONENTS_H
#define COMPONENTS_H
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Username;
class Warrior;
class Magician;
class Archer;
class Item;
class Manager;

//유저
class Username {
private:
	static bool isBurning;
	friend class Manager;
	friend class Item;
protected:
	string name;
	int level;
	int money;
	int luck;
public:
	Username();
	Username(string name, int level, int money, int luck);
	void attack();
	void defend();
	void combinate();
	Item combinate(Item a, Item b);
};

class Warrior :public Username {
public:
	//Warrior();
	Warrior(const string name, int level, int money, int luck);
	void attack();
	void defend();
};
class Magician :public Username {
public:
	//Magician();
	Magician(const string name, int level, int money, int luck);
	void attack();
	void defend();
};
class Archer :public Username {
public:
	//Archer();
	Archer(const string name, int level, int money, int luck);
	void attack();
	void defend();
};

//아이템
class Item {
private:
	friend class Manager;
	friend class Username;
	const string name;
	const int  performance;
public:
	Item(string name, int  performance);
	static int SuccessPercentage;
	int GetPerformance();
	friend Item operator+ (Item a,Item b);
};

//Manager
class Manager {
	const string  name;
public:
	Manager(string  name);
	void openBurningEvent();
	void closeBurningEvent();
};

Item operator +(Item a, Item b);
#endif
