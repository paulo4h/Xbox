#include "Xbox.h"



Xbox::Xbox(const string &nomeUsuario, bool statusKinect, int x, int y, int d , int numeroAtualJogos, float temperaturaFonte, const string &jogoAtual, const string &newGame)
:Console(numeroAtualJogos, temperaturaFonte, jogoAtual, newGame)
{
    this->nomeUsuario = nomeUsuario;
    bool->statusKinect = statusKinect;
    x < 10 ? this->x = x : this->x = 0 ;
    y < 10 ? this->y = y : this->y = 0 ;
    d < 10 ? this->d = y : this->d = 0 ;
}

Xbox::~Xbox()
{

}
