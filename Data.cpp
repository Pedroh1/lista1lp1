#include "Data.h"
#include <string>

using namespace std;

Data::Data(){}

Data::Data(int dia, int mes, int ano){
	if(dia < 1 || dia > 31){
		this->dia=1;
	}else{
		this->dia=dia;
	}

	if(mes<1 || mes > 12){
		this->mes=1;
	}else{
		this->mes=mes;
	}
	if(ano<1){
		this->ano=1;
	}else{
		this->ano=ano;
	}
}

int Data::compara(Data obj){
	if (obj.dia == dia && obj.mes == mes && obj.ano == ano){
		return 0;
	}else if (ano > obj.ano){
		return 1;
	}else if(mes > obj.mes && ano == obj.ano){
		return 1;
	}else if(dia > obj.dia && mes == obj.mes && ano==obj.ano){
		return 1;
	}else{
		return -1;
	}

}

string Data::getMesExtenso(){
	switch ( mes )
	{
		case 1:
			return "Janeiro";

		case 2:
			return "Fevereiro";

		case 3:
			return "Marco";

		case 4:
			return "Abril";

		case 5:
			return "Maio";

		case 6:
			return "Junho";

		case 7:
			return "Julho";

		case 8:
			return "Agosto";

		case 9:
			return "Setembro";

		case 10:
			return "Outubro";

		case 11:
			return "Novembro";

		case 12:
			return "Dezembro";

	}


}

bool Data::eBissexto(){
	if (ano%4==0 && ano%100!=0){
		return true;
	}else if (ano%4!=0 && ano%400==0){
		return true;
	}else{
		return false;
	}
}

int Data::getDia(){
	return dia;
}

int Data::getMes(){
	return mes;
}

int Data::getAno(){
	return ano;
}

void Data::setDia(int dia){
	this->dia=dia;
}

void Data::setMes(int mes){
	this->mes=mes;
}

void Data::setAno(int ano){
	this->ano=ano;
}


