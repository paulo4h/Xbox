#ifndef XBOX_H
#define XBOX_H
#include <string>
using std::string;

class Xbox : public Console
{
    public:
        Xbox(const string & = "", bool = false,int = 0,int = 0,int = 0, int = 0, float = 0.0,const string & = "", const string & = "");
        Xbox(const Xbox &);
        ~Xbox();
        void ligarKinect();
        void verificarLocalizacao();
        void fazerLogin(const string & );

    private:
        string nomeUsuario;
        bool statusKinect;
        int x;
        int y;
        int d;

};

#endif // XBOX_H
