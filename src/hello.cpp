#include <iostream>
#include "calc.h"
#include "math/Maths.h"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
    cout<<"hello world"<< endl;
    cout << StaticMath::add(2,4) << endl;
    return 0;
}