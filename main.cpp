#include <iostream>
#include "calculator.h"
#include <stdlib.h>
using namespace std;


int main(int argc, char** argv[]) {
	int a = rand() % 100;
	int b = rand() % 100;
	Calculator c;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "Sum = " << c.Add(a,b) << endl;
	cout << "Dif = " << c.Sub(a,b) << endl;

	return 0;	
}
