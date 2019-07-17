#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa pessoa1=Pessoa("Pedro");
    Pessoa pessoa2=Pessoa("Vinicius", 13, "40028922");

    pessoa1.setIdade(20);
    pessoa1.setTelefone("87689456");

    cout << pessoa1.getNome() << endl << pessoa1.getIdade() << endl << pessoa1.getTelefone() << endl;
	cout << pessoa2.getNome() << endl << pessoa2.getIdade() << endl << pessoa2.getTelefone() << endl;
    return 0;
}
