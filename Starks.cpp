#include "Starks.h"


	Starks::Starks(){
		cantidadlobos = integrantes = 0;
	}
	
	Starks::Starks(string chief, int wolves, string emblem, string motto, string warrior, int members){
		jefe = chief;
		cantidadlobos = wolves;
		animalemblema = emblem;
		lema = motto;
		guerrerovalioso = warrior;
		members = integrantes;
	}
	
	string Starks::getJefe(){
		return jefe;
	}	

	string Starks::getLema(){
		return lema;
	}

	string Starks::getAnimal(){
		return guerrerovalioso;
	}

	int Starks::getCantLobos(){
		return cantidadlobos;
	}
	
	int Starks::getIntegrantes(){
		return integrantes;
	}

	FamiliasNobles* Starks::getFamilias(int index){
		return familias.at(index);
	}
	void Starks::setJefe(string x){
		jefe = x;
	}

	void Starks::setLema(string x){
		lema = x;
	}

	void Starks::setAnimal(string x){
		animalemblema = x;
	}

	void Starks::setGuerrero(string x){
		guerrerovalioso = x;
	}

	void Starks::setCantLobos(int cant){
		cantidadlobos = cant;
	}

	void Starks::setIntegrantes(int cant){
		integrantes = cant;
	}

	void Starks::setFamilia(string nombre, string simbolo, string lema, int cant, int ataque, int defensa){
		familias.push_back(new FamiliasNobles(nombre, simbolo, lema, cant, ataque, defensa));
	}
	
	Starks::~Starks(){
		
	}

