#include <stdlib.h>
#include <iostream>

#include "MyObject.h"

using namespace std;

Q_INVOKABLE void MyObject::sayHello(){
    cout << "Hello" << endl;
}

