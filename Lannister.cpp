#include "Lannister.h"


Lannister::Lannister(){
	dinero = 0.0;
	fuerzaMontana = integrantes = 0;
}

Lannister::Lannister(string chief, string emblem, string motto, double money, int force, int members){

	jefe = chief;
	animal = emblem;
	lema = motto;
	dinero = money;
	fuerzaMontana = force;
	integrantes = members;
	
}

GuardiaReal* Lannister::getGuardias(int index){
	return guardias.at(index);
}

void Lannister::setGuardia(string name, int age, string type, int attack, int defense){
	guardias.push_back(new GuardiaReal(name, age, type, attack, defense));
}

Lannister::~Lannister(){

}
