#ifndef PESSOA_H
#define PESSOA_H
#include<string>

class Pessoa
{
    private:
        std::string nome;
        int idade;
        std::string telefone;

    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome, int idade, std::string telefone);
        std::string getNome();
        int getIdade();
        std::string getTelefone();

        void setNome(std::string nome);
        void setIdade(int idade);
        void setTelefone(std::string telefone);


};

#endif // PESSOA_H
