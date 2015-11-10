#include "Console.h"

Console::Console(int numeroAtualJogos, float temperaturaFonte, const string &jogoAtual, const string &newGame)
{
  numeroAtualJogos >= 0 && numeroAtualJogos < 6 ? this->numeroAtualJogos = numeroAtualJogos : this->numeroAtualJogos = 0;
  temperaturaFonte < 120 ? this->temperaturaFonte = temperaturaFonte : this->temperaturaFonte = 0;
  this->jogoAtual = jogoAtual;
  this->historicoJogos = new string [1];
  historicoJogos[ 0 ] = newGame;

}


Console::Console(const Console &atual)
{
    this->numeroAtualJogos = atual.numeroAtualJogos;
    this->temperaturaFonte = atual.temperaturaFonte;
    this->jogoAtual = atual.jogoAtual;

    if(historicoJogos != 0)
    {
      historicoJogos = new string[numeroAtualJogos];
      for(i=0;i<numeroAtualJogos;i++)
        this->historicoJogos[i] = atual.historicoJogos[i];
    }

}

Console::~Console()
{
 delete [] historicoJogos;

}

void Console::exibirHistoricoJogos()
{


}


void Console::adicionarJogos( const string &jogoAtual )
{
    if( numeroAtualJogos != 0)
    {
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


void Console::verificarTemperaturaFonte()
{

}



