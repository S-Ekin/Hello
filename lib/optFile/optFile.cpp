#include <iostream>
#include <fstream>
#include <string>
#include "optFile.h"
using namespace std;

class CsStudent {
	public:
	char id[11];
	char name[21];
};

void change(int **p){
	int c = 110;
	*p = &c;
}
void change2(int *p){
	int c = 101;
	p = &c;
}

void optFile () {
	
	int *p1 = NULL;
	int **p2 = NULL;

	int i = 10;
	int b = 12;

	p1 = &i;

	p2 = &p1;

	cout << *p2 << "   " << p2 << endl;	
	cout << *p1 << "   "<< p1 << endl;	

	change(p2);

	cout << *p1 << "   "<< p1 << endl;	


};
