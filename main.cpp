#include <iostream>
#include "Horario.h"
using namespace std;

int main(){
	Horario h1=Horario();
	Horario h2=Horario(16,40,57);
	Horario h3;

	h1.setHora(9);
	h1.setMin(10);
	h1.setSeg(59);

	h3.setHorario(10,50,30);

	h2.avancarHorario();

	cout  << h1.getHora() << ":" << h1.getMin() << ":" << h1.getSeg() << endl << endl;
	cout  << h2.getHora() << ":" << h2.getMin() << ":" << h2.getSeg() << endl << endl;
	cout  << h3.getHora() << ":" << h3.getMin() << ":" << h3.getSeg() << endl << endl;

    	return 0;
