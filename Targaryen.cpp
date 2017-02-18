#include "Targaryen.h"

Targaryen::Targaryen(){
	cantdragones = cantbarcos = 0;
}

Targaryen::Targaryen(string queen, string emblem, string motto, int dragons, int boats){
	reina = queen;
	animal = emblem;
	lema = motto;
	cantdragones = dragons;
	cantbarcos = boats;
}

void Targaryen::setDothraki(string name, string chief, string horse, string color, int attack, int defense){
	dothrakis.push_back(new Dothraki(name, chief, horse, color, attack, defense));
}

Dothraki* Targaryen::getDothraki(int index){
	return dothrakis.at(index);
}


Targaryen::~Targaryen(){

}
