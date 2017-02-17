#include <iostream>

#ifndef FAMILIASNOBLES_H
#define FAMILIASNOBLES_H

class FamiliasNobles{
	public:
		FamiliasNobles();

		//getters
		string getNombre();
		string getSimbolo();
		string getLema();
		int getPersonas();
		int getAtaque();
		int getDefensa();

		//setters
		void setNombre(string);
		void setSimbolo(string);
		void setLema(string);
		void setCantPersonas(int);
		void setAtaque(int);
		void setDefensa(int);


		~FamiliasNobles();
	private:
		string nombre;
		string simbolo;
		string lema;
		int cantpersonas;
		int ataque;
		int defensa;
};

#endif

