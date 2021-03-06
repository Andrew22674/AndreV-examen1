#include <iostream>
#include <string>
#include <vector>

#include "Dothraki.h"
#include "FamiliasNobles.h"
#include "GuardiaReal.h"
#include "Lannister.h"
#include "Starks.h"
#include "Targaryen.h"

using namespace std;

int main(){
	Lannister* lannister;
	Starks* starks;
	Targaryen* targaryen;

	int menu = 0;
	bool lan = false, stark = false, targ = false;//estos boolean sirven para ver si ya existen las familas	
	while(menu != 6){
		cout << "MENU\nIngrese numero\n1. Agregar \n2. Listar\n4. Eliminar\n5. Simulacion\n6. Salir" << endl;
		cin >> menu;
	
		switch(menu){
			case 1:{
				int opcion;
				cout << "1. Familias\n2. Guerreros" << endl;
				cin >> opcion;
				if(opcion == 1){
					int opcion2;
					cout << "1. Stark\n2. Lannister\n3. Targaryen" << endl;
					cin >> opcion2;
					string jefe, emblema, lema;
					int cant;
					switch(opcion2){
						case 1:{
							string guerrero;
							int lobos;
							cout << "Ingrese nombre de jefe de familia" << endl;
                                        		cin >> jefe;
							cout << "Ingrese cantidad de lobos" << endl;
							cin >> lobos;
							cout << "Ingrese animal emblema" << endl;
							cin >> emblema;
							cout << "Ingrese lema" << endl;
							cin >> lema;
							cout << "Ingrese guerrero mas valioso" << endl;
							cin >> guerrero;
							cout << "Ingrese cantidad de integrantes" << endl;
							cin >> cant;
							starks = new Starks(jefe, lobos, emblema, lema, guerrero, cant);
							
                                        		
							stark = true;//existe la familia   
							break;
						}
						case 2:{
							double dinero;
							int guardia;
							cout << "Ingrese nombre de jefe de familia" << endl;
							cin >> jefe;
							cout << "Ingrese animal emblema" << endl;
							cin >> emblema;
							cout << "Ingrese lema" << endl; cin >> lema;
							cout << "Ingrese cantidad de dinero" << endl; cin >> dinero;
							cout << "Ingrese fuerza de la montana (int)" << endl; cin >> guardia;
							cout << "Ingrese cantidad de integrantes" << endl; cin >> cant;
							lannister = new Lannister(jefe, emblema, lema, dinero, guardia, cant); 
							lan = true; 
                                                        break;
                                                }
						case 3:{
							string reina;
							int cantdrag, cantbarco;

							cout << "Ingrese nombre de reina" << endl; cin >> reina;
							cout << "Ingrese animal emblema" << endl; cin >> emblema;
							cout << "Ingrese lema" << endl; cin >> lema;
							cout << "Ingrese cantidad de dragones" << endl; cin >> cantdrag;
							cout << "Ingrese cantidad de barcos" << endl; cin >> cantbarco;				
							targaryen = new Targaryen(reina, emblema, lema, cantdrag, cantbarco);
							targ = true;			
                      	                           	break;
                                                }


					}
					
					
					
					
				}else if(opcion == 2){
					cout << "Ingrese familia a la cual quiere agregar un ejercito\n1. Stark\n2. Lannister\n3. Targaryen" << endl;
					int ejercito;
					cin >> ejercito;
					string name;
					int ataque, defensa;
					if(ejercito == 1){
						
						if(stark == true){
                                                cout << "Ingrese nombre de familia" << endl; cin >> name;
						string escudo, motto;
						int personas;
						cout << "Ingrese simbolo" << endl; cin >> escudo;
						cout << "Ingrese lema" << endl; cin >> motto;
						cout << "Ingrese cantidad de personas" << endl; cin >> personas;
						cout << "Ingrese ataque" << endl; cin >> ataque;
						cout << "Ingrese defensa" << endl; cin >> defensa;

						starks -> setFamilia(name, escudo, motto, personas, ataque, defensa);
                                        	}else{
                                                	cout << "No existe la familia stark" << endl;
                                        	}

					}
					
				}else{

				}			
				
				break;
			}
			case 2:{
				cout << "Ingrese familia que desea listar\n1. Stark\n2. Lannister\n3. Targaryen";
				int listar;
				cin >> listar;
				if(listar == 1){
					int size = starks -> getVectorSize();
					//vector<FamiliasNobles*> familias = starks -> getVector();
					for(int i =0; i < size; i++){
						//string nomb;
						//nomb = familias.at(i) -> getNombre();
						FamiliasNobles* fn = starks -> getFamilias(i);
						cout << fn -> getNombre() << endl;
					}
				}else if(listar == 2){

				}else if(listar == 3){

				}				
				break;
			}
			case 3:{

                                break;
                        }
			case 4:{

                                break;
                        }
			case 5:{

                                break;
                        }
			default:{
				return 10;
			}

		}
	}


	return 0;
}
