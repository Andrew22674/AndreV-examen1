#include <iostream>
#include <vector>
#include <string>

#include "FamiliasNobles.h"

using namespace std;

#ifndef STARKS_H
#define STARKS_H

class Starks{
	public:
		//constructor
		Starks();

		
		//getteres
		string getJefe();
		string getLema();
		string getAnimal();
		string getGuerrero();
		int getCantLobos();
		int getIntegrantes();
		

		//setters
		void setJefe(string);
		void setLema(string);
		void setAnimal(string);
		void setGuerrero(string);
		void setCantLobos(int);
		void setIntegrantes(int);
		void setFamilia(string, string, string, int, int, int);
		//destructor
		~Starks();
	private:
		string jefe;
		int cantidadlobos;
		string animalemblema;
		string lema;
		vector<FamiliasNobles*> familias;		
		//agregar ejercito
		string guerrerovalioso;
		int integrantes;
};

#endif
