#include <iostream>
#include <string>
#include <vector>

#include "GuardiaReal.h"

using namespace std;

#ifndef LANNISTER_H
#define LANNISTER_H

class Lannister{
	public:
		Lannister();
		Lannister(string, string, string, double, int, int);
		//getters
		string getJefe();
		string getAnimal();
		string getLema();
		double getDinero();
		int getFuerzaM();
		int getIntegrantes();
		GuardiaReal* getGuardias(int);
		
		//setters
		void setJefe(string);
		void setAnimal(string);
		void setLema(string);
		void setDinero(double);
		void setFuerzaM(int);
		void setIntegrantes(int);
		void setGuardia(string, int, string, int, int);
		
		~Lannister();
	private:
		vector<GuardiaReal*> guardias;
		string jefe;
		string animal;
		string lema;
		//agregar ejercito de la guardia real
		double dinero;
		int fuerzaMontana;
		int integrantes;

};

#endif
