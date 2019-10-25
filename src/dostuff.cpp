#include "dostuff.h"
#include <iostream>

DoStuff::DoStuff(QObject *parent) : QObject(parent)
{

}

void DoStuff::sayHello(){
    std::cout << "Hello world" << std::endl;
}
