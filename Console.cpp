#include "Console.h"

Console::Console(int numeroAtualJogos, float temperaturaFonte, const string &jogoAtual, const string &newGame)
{
  numeroAtualJogos >= 0 && numeroAtualJogos < 6 ? this->numeroAtualJogos = numeroAtualJogos : this->numeroAtualJogos = 0;
  temperaturaFonte < 120 ? this->temperaturaFonte = temperaturaFonte : this->temperaturaFonte = 0;
  this->jogoAtual = jogoAtual;
  this->historicoJogos = new string [1];
  historicoJogos[ 0 ] = newGame;

}

Console::~Console()
{
 delete [] historicoJogos;

}
