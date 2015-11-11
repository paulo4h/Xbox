#include "Ps4.h"

Ps4::Ps4(bool statusInternet, bool disponibilidadeDownloadJogo, int numeroAtualJogos, float temperaturaFonte, const string &jogoAtual, const string &newGame, int memoria, int voltagem, bool onOff, int MAXJOGOS)
:Console(numeroAtualJogos, temperaturaFonte, jogoAtual, newGame ,memoria, voltagem, onOff,  MAXJOGOS)
{
    this->statusInternet = statusInternet;
    this->disponibilidadeDownloadJogo = disponibilidadeDownloadJogo;
}

Ps4::Ps4(const Ps4 &ps4copiado)
{
    this->statusInternet = ps4copiado.statusInternet;
    this->disponibilidadeDownloadJogo = ps4copiado.disponibilidadeDownloadJogo;
}

Ps4::~Ps4()
{

}


void Ps4::ligarInternet()
{
    statusInternet = true;
    cout<<"a internet esta ligada"<< endl;


}

void Ps4::baixarJogo()
{
    if(statusInternet == true)
    {
        if(disponibilidadeDownloadJogo == true )
        {
            cout<<"jogo baixado"<<endl;
        }
        else
        {
            cout<<"o jogo nao esta disponivel para baixar"<<endl;
        }
    }

}


void Ps4::ligar()
{
    onOff = true;
    cout<<"o Ps4 esta ligado"<<endl;

}


void Ps4::desligar()
{
    onOff = false;
    cout<<"o Ps4 foi desligado"<<endl;

}

void Ps4::verificarMemoria()
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
