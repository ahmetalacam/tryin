#include <string>
#include <iostream>
#include "Transportation.h"
using namespace std;

int main()
{
	string initial, final;
	Path p1;
	cout<<"Enter the initial place: ";
	cin>>initial;
	if(initial=="A")
	{
		p1.displayA();
	}
	if(initial=="B")
	{
		p1.displayB();
	}
	if(initial=="C")
	{
		p1.displayC();
	}
	if(initial=="D")
	{
		p1.displayD();
	}
	if(initial=="E")
	{
		p1.displayE();
	}
	if(initial=="F")
	{
		p1.displayF();
	}
	if(initial=="G")
	{
		p1.displayG();
	}
	if(initial=="H")
	{
		p1.displayH();
	}
	if(initial=="I")
	{
		p1.displayI();
	}
	if(initial=="J")
	{
		p1.displayJ();
	}
	
	cout<<"Enter the final place: ";
	cin>>final;
	if(final=="A")
	{
		p1.chooseA();
	}
	if(final=="B")
	{
		p1.chooseB();
	}
	if(final=="C")
	{
		p1.chooseC();
	}
	if(final=="D")
	{
		p1.chooseD();
	}
	if(final=="E")
	{
		p1.chooseE();
	}
	if(final=="F")
	{
		p1.chooseF();
	}
	if(final=="G")
	{
		p1.chooseG();
	}
	if(final=="H")
	{
		p1.chooseH();
	}
	if(final=="I")
	{
		p1.chooseI();
	}
	if(final=="J")
	{
		p1.chooseJ();
	}
	
	
}

