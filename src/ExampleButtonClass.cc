#include "ExampleButtonClass.h"
#include <iostream>

using namespace std;

ExampleButtonClass::ExampleButtonClass(QObject *parent) : QObject(parent)
{

}

Q_INVOKABLE void ExampleButtonClass::exampleFunction(){
    cout << "Software Update: We can call C++ functions from QML!!" << endl;
}
