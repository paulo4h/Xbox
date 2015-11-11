#include "Xbox.h"
#include <iostream>
using std::cout;
using std::endl;

Xbox::Xbox(const string &nomeUsuario, bool statusKinect, int x, int y, int d , int numeroAtualJogos, float temperaturaFonte, const string &jogoAtual, const string &newGame,int memoria, int voltagem, bool onOff, int MAX)
:Console(numeroAtualJogos, temperaturaFonte, jogoAtual, newGame,memoria, MAXJOGOS)
{
    this->nomeUsuario = nomeUsuario;
    this->statusKinect = statusKinect;
    x < 10 ? this->x = x : this->x = 0 ;
    y < 10 ? this->y = y : this->y = 0 ;
    d < 10 ? this->d = y : this->d = 0 ;
}

Xbox::Xbox(const Xbox &xboxCopiado)
{
    this->nomeUsuario = xboxCopiado.nomeUsuario;
    this->statusKinect = xboxCopiado.statusKinect;
    this->x = xboxCopiado.x;
    this->x = xboxCopiado.y;
    this->d = xboxCopiado.d;
}

Xbox::~Xbox()
{

}

void Xbox::ligarKinect()
{
    this->statusKinect = true;
}


void Xbox::fazerLogin(const string &nomeUsuario)
{
    if(this->nomeUsuario == nomeUsuario)
    {
        cout<<"Bem vindo," << nomeUsuario << " !!!!";
    }
    else
    {
        cout<<"usuario invalido"<< endl;
    }


}


void Xbox::ligar()
{
    onOff = true;
    cout<<"o Xbox esta ligado"<<endl;

}


void Xbox::desligar()
{
    onOff = false;
    cout<<"o Xbox foi desligado"<<endl;

}

void Xbox::verificarMemoria()
{
    if(numeroAtualJogos != 0)
    {
        memoria = memoria - (10*numeroAtualJogos);

    }
    else
    {
        cout<<"sua memoria ja esta cheia"<< endl;

    }

}
