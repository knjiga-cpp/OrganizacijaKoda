#include "Tocka.h"
#include <iostream>

int main()
{
	Tocka t1(3.4, 4.5);
	t1.Postavi(10, 20);

	Tocka t2 = std::move(t1);
    std::cout << "Hello World!\n"; 
}
