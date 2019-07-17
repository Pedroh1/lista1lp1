#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

int main(){
	Data data1=Data();
	Data data2=Data(5,0,2025);
	Data data3=Data(19,5,2000);

	data1.setDia(24);
	data1.setMes(2);
	data1.setAno(2006);

	cout << data1.getDia() << endl << data1.getMes() << endl << data1.getAno() << endl << endl;
	cout << data2.getDia() << endl << data2.getMes() << endl << data2.getAno() << endl << endl;
	cout << "comparacao entre data1 e data2: " << data1.compara(data2) << endl << endl;
	cout << "d3 e bissexto: " << data3.isBissexto() << endl << endl;

	cout << "O mes de data1 e: " << data1.getMesExtenso() << endl << "O mes de data2 eh: " << data2.getMesExtenso() << endl << "O mes de data3 eh: " << data3.getMesExtenso() << endl;


	return 0;
}
