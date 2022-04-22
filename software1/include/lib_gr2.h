#ifndef LIB_GR2.H
#define LIB_GR2.H




#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class Participante{
	private://Atributos
	    int participant_id;
	    string nombre;
	    int veces_pushed;
	public: //Metodos
	    Participante();
		void setParticipante(int,string);
		int getParticipanteP();  		
		string getParticipanteN();  
		int getParticipanteV();	
	
};

#endif