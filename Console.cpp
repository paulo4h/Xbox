#include "Console.h"
#include <iostream>
using std::cout;


Console::Console(int numeroAtualJogos, float temperaturaFonte, const string &jogoAtual, const string &newGame, int memoria, int voltagem, bool onOff, int MAXJOGOS)
:Device(voltagem, onOff), MAXJOGOS(MAXJOGOS)
{
  numeroAtualJogos >= 0 && numeroAtualJogos < this->MAXJOGOS ? this->numeroAtualJogos = numeroAtualJogos : this->numeroAtualJogos = 0;
  temperaturaFonte < 120 ? this->temperaturaFonte = temperaturaFonte : this->temperaturaFonte = 0;
  this->jogoAtual = jogoAtual;
  this->historicoJogos = new string [1];
  historicoJogos[ 0 ] = newGame;
  memoria < 50 ? this->memoria = memoria : this->memoria = 0;

}


Console::Console(const Console &atual)
:MAXJOGOS(atual.MAXJOGOS)
{
    this->numeroAtualJogos = atual.numeroAtualJogos;
    this->temperaturaFonte = atual.temperaturaFonte;
    this->jogoAtual = atual.jogoAtual;

    if(historicoJogos != 0)
    {
      historicoJogos = new string[numeroAtualJogos];
      for(int i=0;i<numeroAtualJogos;i++)
        this->historicoJogos[i] = atual.historicoJogos[i];
    }

}

Console::~Console()
{
 delete [] historicoJogos;

}

void Console::exibirHistoricoJogos()
{
    int i;

    if(numeroAtualJogos == 0)
    {
        cout<<"voce nao possui jogos no console";
    }
    else
    {
        for(i=0;i<numeroAtualJogos;i++)
            cout<< "jogo :" << historicoJogos[i];
    }

}


void Console::adicionarJogos( const string &jogoAtual )
{
    if( numeroAtualJogos != 0)
    {
        if(numeroAtualJogos <= MAXJOGOS)
        {
        int i;

        string *aux = new string[numeroAtualJogos];
        for(i=0;i<numeroAtualJogos;i++)
            aux[i] = historicoJogos[i];
        delete [] this->historicoJogos;
        historicoJogos = new string[++numeroAtualJogos];

        for(i=0;i<numeroAtualJogos;i++)
            historicoJogos[i] = aux[i];

        historicoJogos[numeroAtualJogos-1] = jogoAtual;

        delete [] aux;

        }
    }

}

 void Console::verificarTemperaturaFonte()
 {
     if (temperaturaFonte > 90)
        cout<<"sua fonte esta com temperatura de " << temperaturaFonte << "graus, desligue o console";
 }


