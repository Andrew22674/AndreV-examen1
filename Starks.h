#include <iostream>

#ifndef STARKS_H
#define STARKS_H

class Starks{
	public:
		//constructor
		Starks();
		//destructor
		~Starks();
		
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

	private:
		string jefe;
		int cantidadlobos;
		string animalemblema;
		string lema;
		//agregar ejercito
		string guerrerovalioso;
		int integrantes;
};

#endif
