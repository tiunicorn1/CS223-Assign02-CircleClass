// CircleClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Circle.h"

using namespace std;



int main()
{
	Circle circle01;
	Circle circle02(5.7);
	Circle circle03;
	Circle circle04;

	circle01.displayCircleInfo("circle01");
	circle02.displayCircleInfo("circle02");

	circle03.setRadius(9.75);

	circle03.displayCircleInfo("circle03");

	circle04 = circle02;

	circle04.displayCircleInfo("circle04");

	cout << endl << endl;
	system("pause");
	return 0;
}

