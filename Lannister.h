#include <iostream>

#ifndef LANNISTER_H
#define LANNISTER_H

class Lannister{
	public:
		Lannister();

		//getters
		string getJefe();
		string getAnimal();
		string getLema();
		double getDinero();
		int getFuerzaM();
		int getIntegrantes();

		//setters
		void setJefe(string);
		void setAnimal(string);
		void setLema(string);
		void setDinero(double);
		void setFuerzaM(int);
		void setIntegrantes(int);
		
		~Lannister();
	private:
		string jefe;
		string animal;
		string lema;
		//agregar ejercito de la guardia real
		double dinero;
		int fuerzaMontana;
		int integrantes;

};

#endif
