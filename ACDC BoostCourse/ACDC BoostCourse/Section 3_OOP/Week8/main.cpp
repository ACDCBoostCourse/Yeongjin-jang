#include "components.h"
int main() {
	//1
	Warrior warrior("warrior", 1, 100, 10);
	Magician magician("magician", 1, 100, 10);
	Archer archer("archer", 1, 100, 10);
	//2
	Manager manager("Àå¿µÁø");
	//3
	Item sword1("sword1", 100);
	Item sword2("sword2", 100);
	Item staff1("staff1", 100);
	Item staff2("staff2", 100);
	Item bow1("bow1", 100);
	Item bow2("bow2", 100);
	//4
	warrior.attack();
	warrior.defend();
	magician.attack();
	magician.defend();
	archer.attack();
	archer.defend();
	//5
	sword1 + sword2;
	sword1.GetPerformance();
	//6
	manager.openBurningEvent();
	//7
	staff1 + staff2;
	staff1.GetPerformance();
	//8
	manager.closeBurningEvent();
	//9
	bow1 + bow2;
	bow1.GetPerformance();
}