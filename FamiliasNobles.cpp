#include "FamiliasNobles.h"

FamiliasNobles::FamiliasNobles(){
	cantpersonas = ataque = defensa;
}

FamiliasNobles::FamiliasNobles(string nombre, string simbolo, string lema, int cantidad, int ataque, int defensa){
	this -> nombre = nombre;
	this -> simbolo = simbolo;
	this -> lema = lema;
	cantpersonas = cantidad;
	this -> ataque = ataque;
	this -> defensa = defensa;
}

FamiliasNobles::~FamiliasNobles(){

}
