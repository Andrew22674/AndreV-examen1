#include <iostream>
#include <string>
#include <vector>

#include "Dothraki.h"

using namespace std;

#ifndef TARGARYEN_H
#define TARGARYEN_H

class Targaryen{
	public:
		Targaryen();
		Targaryen(string, string, string, int, int);		
		//getters
		string getReina();
		string getAnimal();
		string getLema();
		int getDragones();
		int getBarcos();
		Dothraki* getDothraki(int);
		//setters
		void setDothraki(string, string, string, string, int, int);
		void setReina(string);
		void setAnimal(string);
		void setLema(string);
		void setDragones(int);
		void setBarcos(int);

		
		~Targaryen();
	private:
		vector<Dothraki*> dothrakis;		
		string reina;
		string animal;
		string lema;
		int cantdragones;
		//agregar ejercito dothraki
		int cantbarcos;
};

#endif
