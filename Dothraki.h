#include <iostream>
#include <string>


using namespace std;

#ifndef DOTHRAKI_H
#define DOTHRAKI_H

class Dothraki{
	public:
		Dothraki();
		Dothraki(string, string, string, string, int, int);		
		//getters
		
		string getNombre();
		string getJefe();
		string getCaballo();
		string getColorCaballo();
		int getAtaque();
		int getDefensa();
		//setters
		void setNombre(string);
		void setJefe(string);
		void setCaballo(string);
		void setColorCaballo(string);
		void setAtaque(int);
		void setDefensa(int);

		~Dothraki();
	private:
		string nombre;
		string jefe;
		string caballo;
		string colorcaballo;
		int ataque;
		int defensa;
};

#endif
