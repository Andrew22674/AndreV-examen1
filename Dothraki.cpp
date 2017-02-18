#include "Dothraki.h"

Dothraki::Dothraki(){
	ataque = defensa = 0;
}

Dothraki::Dothraki(string name, string chief, string horse, string color, int attack, int defense){
	nombre = name;
	jefe = chief;
	caballo = horse;
	colorcaballo = color;
	ataque = attack;
	defensa = defense;
}



Dothraki::~Dothraki(){

}
