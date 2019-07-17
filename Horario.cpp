#include "Horario.h"

Horario::Horario(){}

Horario::Horario(int hora, int minuto, int segundo){
    if (hora < 0 || hora > 23){
        this->hora=00;
    }else{
        this->hora=hora;
    }
    if(minuto < 0 || minuto > 59){
        this->minuto=00;
    }else{
        this->minuto=minuto;
    }
        if(segundo < 0 || segundo > 59){
        this->segundo=00;
    }else{
        this->segundo=segundo;
    }
}
int avancarHorario(int hora, int minuto, int segundo){
    if(segundo == 59){
            segundo = segundo + 1;
            minuto = minuto + 1;
        }
    if(minuto == 59 && segundo == 59){
            hora= hora+1;
            minuto=00;
            segundo=00;

    }
}
int Horario::getHora(int hora){
    return hora;
}
int Horario::getMinuto(int minuto){
    return minuto;
}
int Horario::getSegundo(int segundo){
    return segundo;
}
void Horario::setHora(int hora){
    this->hora=hora;
}
void Horario::setMinuto(int minuto){
    this->minuto=minuto;
}
void Horario::setSegundo(int segundo){
    this->segundo=segundo;
}
