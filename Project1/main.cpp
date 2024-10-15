#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
	srand(time(0));


	/*
	* 
	* Vector obj4 = ++obj1; // obj4 = 0 1 2 3 4 5   obj1 = 0 1 2 3 4 5
	* Vector obj5 = obj1++; // obj5 = 1 2 3 4 5     obj1 = 0 1 2 3 4 5
	*  òàê æå è äåêðåìåíò(obj5--, --ob5)
	* Vector obj6(3); // 1 2 3
	* obj6+=5; // 1 2 3 0 0 0 0 0
	* obj6-=5; // êîëè÷åñòâî óìåíüøàåì íà 5 åñëè òåê. ðàçìåð >=5,èíà÷å íè÷åãî íå äåëàåì
	* obj6*=5; // êàæäûé ýëåìåíò óìíîæàåì íà 5, âîçâðàùàåì ìàññèâ ïîñëå èçìåíåíèÿ
	
	*/

	Vector obj1(5);
	obj1.Print();
	Vector obj4 = obj1++;
	obj4.Print(); 
	obj1.Print();
	Vector obj8(6);
	obj8.Print();
	obj8 *= 2;
	obj8.Print();

	//Vector obj5 = ++obj1;
	//obj5.Print();

	//Vector obj7 = --obj1;
	//obj7.Print();
	


	


}
