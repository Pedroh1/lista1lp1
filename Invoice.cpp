#include "Invoice.h"
#include <string>

using namespace std;

Invoice::Invoice(){}

Invoice::Invoice(int num,string desc,int qtd,double preco){
	this->num=num;
	this->desc=desc;
	if(qtd<0){
		this->qtd=0;
	}else{
		this->qtd=qtd;
	}
	if (preco<0){
		this->preco=0.00;
	}else{
		this->preco=preco;
	}
}

int Invoice::getNum(){
	return num;
}

string Invoice::getDesc(){
	return desc;
}

int Invoice::getQtd(){
	return qtd;
}

double Invoice::getPreco(){
	return preco;
}

void Invoice::setNum(int num){
	this->num=num;
}

void Invoice::setDesc(string desc){
	this->desc=desc;
}

void Invoice::setQtd(int qtd){
	this->qtd=qtd;
}

void Invoice::setPreco(double preco){
	this->preco=preco;
}

double Invoice::getInvoiceAmount(){
	return getQtd() * getPreco();
}
