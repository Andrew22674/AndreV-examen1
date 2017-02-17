#include <iostream>

#ifndef TARGARYEN_H
#define TARGARYEN_H

class Targaryen{
	public:
		Targaryen();
		
		//getters
		string getReina();
		string getAnimal();
		string getLema();
		int getDragones();
		int getBarcos();

		//setters
		void setReina(string);
		void setAnimal(string);
		void setLema(string);
		void setDragones(int);
		void setBarcos(int);

		
		~Targaryen();
	private:
		string reina;
		string animal;
		string lema;
		int cantdragones;
		//agregar ejercito dothraki
		int cantbarcos;
};

#endif
