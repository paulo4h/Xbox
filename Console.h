#ifndef CONSOLE_H
#define CONSOLE_H
#include <string>
using std::string;
#include "Device.h"

class Console : public Device
{
    public:
        Console(int = 0, float = 0.0,const string & = "", const string & = "",int = 0, int = 0, bool = false, int MAXJOGOS = 0);
        Console(const Console &);
        ~Console();
        void exibirHistoricoJogos();
        void adicionarJogos(const string &);
        void verificarTemperaturaFonte();

        virtual void ligar() = 0;
        virtual void desligar() = 0;
        virtual void verificarMemoria() = 0;


    protected:
        int memoria; // tomando como padrao que cada jogo ocupe na memoria um valor constante de 10 gigabytes.
        int numeroAtualJogos;
        const int MAXJOGOS;
        float temperaturaFonte;
        string jogoAtual;
        string *historicoJogos;

};

#endif // CONSOLE_H
