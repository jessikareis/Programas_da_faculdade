/*Desafio 1
Autora: Jéssika Reis de Mello
Data:23/06/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<locale.h>

using namespace std;

int primo(int x)
{
		
	for (int a=2; a<x; a++)
	{
		if( x %a ==0 )
		{
			x=false;
			break;
		}
	}
	
}
main()
{
	bool p=true;
	int num;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Informe um número para saber se ele é primo: ";
	cin >> num;
	p=primo(num);

	if(p==true)	
	cout<< num << " é número primo.";
		else 
	cout<<num<<" não é número primo.";
}
