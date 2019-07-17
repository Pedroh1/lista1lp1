#ifndef DATA_H
#define DATA_H
#include <string>

using namespace std;

class Data{
public:
	Data();
	Data(int dia, int mes, int ano);
	int compara(Data obj);
	string getMesExtenso();
	bool eBissexto();
	int getDia();
	int getMes();
	int getAno();
	void setDia(int dia);
	void setMes(int mes);
	void setAno(int ano);

private:
	int dia;
	int mes;
	int ano;

};

#endif
