#include <iostream>
#include "calc.h"
#include "myMath.h"
#include "myUtil/myUtil.h"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
    cout<<"hello world"<< endl;
    cout << StaticMath::add(2,4) << endl;
    cout << MyMaths::sin(4,5) << endl;
    myUtil a;
    a.show();
    return 0;
}