#include <iostream>
#include "DynamicIntegerArray.h"
using namespace std;
int main()
{
    DynamicIntegerArray a(2);
	a.set(4,0); 
	a.set(2,1);
	if (true) {
		DynamicIntegerArray b = a;
	}
	a.print();
	a.pushback(5);
	a.print();
	a.pushback(7);
	a.pushback(0);
    a.print();
	a.insertar(1,3);
	a.insertar(12,1);
	a.print();
	a.remove(2);
	a.print();
	a.remove(5);
	a.print();
	return 0;
}