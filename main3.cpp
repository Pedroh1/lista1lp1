#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main(){
	Invoice fone=Invoice(5,"fone de ouvido",7,99.99);
	Invoice mousepad=Invoice();

	mousepad.setNum(6);
	mousepad.setDesc("mousepad");
	mousepad.setQtd(20);
	mousepad.setPreco(50.00);

	cout << fone.getNum() << endl << fone.getDesc() << endl << fone.getQtd() << endl << fone.getPreco() << endl <<fone.getInvoiceAmount() << endl << endl;
	cout << mousepad.getNum() << endl << mousepad.getDesc() << endl << mousepad.getQtd() << endl << mousepad.getPreco() << endl << mousepad.getInvoiceAmount() << endl;



	return 0;
}
