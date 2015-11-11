#ifndef PS4_H
#define PS4_H
#include "Console.h"
#include <string>
using std::string;

class Ps4 : public Console
{
    public:
        Ps4(bool = false, bool = false, int = 0, float = 0.0,const string & = "", const string & = "",int = 0, int = 0, bool = false, int MAXJOGOS = 0);
        Ps4(const Ps4 &);
        virtual ~Ps4();
        void ligarInternet();
        void baixarJogo();

        virtual void ligar() = 0;
        virtual void desligar() = 0;
        virtual void verificarMemoria() = 0;

    private:
        bool statusInternet;
        bool disponibilidadeDownloadJogo;

};

#endif // PS4_H
