#include <iostream>
#include <windows.h>
#include "calc.h"
#include "myUtil/myUtil.h"
#include "optFile/optFile.h"

using std::cout;
using std::endl;

int main(int argc, char **argv) {	// 打印utf-8的中文格式
	SetConsoleOutputCP(65001);
    optFile();
    return 0;
}
