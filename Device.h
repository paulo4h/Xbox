#ifndef DEVICE_H
#define DEVICE_H


class Device
{
    public:
        Device(int = 0, bool = false);
        Device(const Device &);
        virtual ~Device();
        virtual void ligar() = 0;
        virtual void Desligar() = 0;

    protected:
        int voltagem;
        bool onOff;


};

#endif // DEVICE_H
