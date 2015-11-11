#ifndef XBOX_H
#define XBOX_H
#include <string>
using std::string;
#include "Console.h"

class Xbox : public Console
{
    public:
        Xbox(const string & = "", bool = false,int = 0,int = 0,int = 0, int = 0, float = 0.0,const string & = "", const string & = "",int = 0, int = 0, bool = false, int MAX = 0);
        Xbox(const Xbox &);
        ~Xbox();
        void ligarKinect();
        void verificarLocalizacao();
        void fazerLogin(const string & );

        virtual void ligar() = 0;
        virtual void desligar() = 0;
        virtual void verificarMemoria() = 0;


    private:
        string nomeUsuario;
        bool statusKinect;
        int x;
        int y;
        int d;

};

#endif // XBOX_H
