#include "Device.h"

Device::Device(int voltagem, bool onOff)
{
    voltagem == 110 || voltagem == 220 ? this->voltagem = voltagem : this->voltagem = 0;
    this->onOff = onOff;
}


Device::Device(const Device &deviceCopia)
{
    this->voltagem = deviceCopia.voltagem;
    this->onOff = deviceCopia.onOff;
}


Device::~Device()
{

}
