#include "GuardiaReal.h"

GuardiaReal::GuardiaReal(){
	edad = ataque = defensa = 0;
}

GuardiaReal::GuardiaReal(string name, int age, string type, int attack, int defense){
	nombre = name;
	edad = age;
	tiposoldado = type;
	ataque = attack;
	defensa = defense;
}



GuardiaReal::~GuardiaReal(){

}
