#include <iostream>
#include "DynamicIntegerArray.h"
using namespace std;
int main()
{
    DynamicIntegerArray a(3);
	a.set(4,0); 
	a.set(2,1);
	if (true) {
		DynamicIntegerArray b = a;
	}
	a.print();
	a.pushback(5);
	a.pushback(7);
	a.pushback(0);
    a.print();
	a.insertar(1,3);
	a.print();
	a.remove(2);
	a.print();
	return 0;
}