#include <iostream>

#ifndef GUARDIAREAL_H
#define GUARDIAREAL_H

GuardiaReal{
	public:
		GuardiaReal();

		//Getters
		string getNombre();
		string getTipoSoldado();
		int getEdad();
		int getAtaque();
		int getDefensa();

		//setters
		void setNombre(string);
		void setTipoSoldado(string);
		void setEdad(int);
		void setAtaque(int);
		void setDefensa(int);

		
		~GuardiaReal();
	private:
		string nombre;
		string tiposoldado;
		int edad;
		int ataque;
		int defensa;
};

#endif
