#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();

        Horario(int hora, int minuto, int segundo);
        int Verifica(Horario obj);

        void setHorario(int hora, int numero, int segundo);

        int getHora();
        int getMinuto();
        int getSegundo();

        void setHora(int hora);
        void setMinuto(int minuto);
        void setSegundo(int segundo);



    private:
        int hora;
        int minuto;
        int segundo;
};

#endif // HORARIO_H
