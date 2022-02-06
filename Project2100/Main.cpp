#include "Weapon.h"
#include "Character.h"
#include "MainCharacter.h"
#include "MainOpponent.h"
#include <iostream>

static void PushActorBackward(Actor* actor)
{
	actor->Move_Backwards();
}

static void PrintObjects(Object** objArray, i32 numberOfObjects)
{
	for (isize i = 0; i < numberOfObjects; ++i)
		objArray[i]->print();
}

i32 main()
{
	Object* obj = new Object("Object0");
	Actor* actor = new Actor(3500, "Actor7");
	MainCharacter* mc = new MainCharacter(150, 87, "Player2");
	MainOpponent* mo = new MainOpponent(475, 24, "Boss3");

	std::cout << "==================================== PRINTING FROM TYPES ===========================================\n\n";

	obj->print();
	actor->print();
	mc->print();
	mo->print();


	std::cout << "\n\n==================================== PRINTING FROM OBJECT POINTERS ===========================================\n\n";

	Object* arr[4];
	arr[0] = obj;
	arr[1] = actor;
	arr[2] = mc;
	arr[3] = mo;

	PrintObjects(arr, 4);
}
