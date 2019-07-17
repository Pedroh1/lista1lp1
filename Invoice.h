#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice{
    private:
        int num;
        string desc;
        int qtd;
        double preco;


    public:
        Invoice();
        Invoice(int num, string desc,int qtd,double preco);
        int getNum();
        string getDesc();
        int getQtd();
        double getPreco();
        void setNum(int num);
        void setDesc(string desc);
        void setQtd(int qtd);
        void setPreco(double preco);
        double getInvoiceAmount();




};

#endif
