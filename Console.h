#ifndef CONSOLE_H
#define CONSOLE_H
#include <string>
using std::string;


class Console
{
    public:
        Console(int = 0, float = 0.0,const string & = "", const string & = "");
        Console(const Console &);
        ~Console();
        void exibirHistoricoJogos();
        void adicionarJogos();
        void verificarTemperaturaFonte();
    protected:
        float temperaturaFonte;
    private:
        int numeroAtualJogos;
        string jogoAtual;
        string *historicoJogos;
};

#endif // CONSOLE_H
