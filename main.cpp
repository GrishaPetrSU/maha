#include "stdafx.h" 
#include <iostream> 
#include "funcs.h" 
using namespace std;

int main() 
{
		cout << "Menu:"; 				//Commentarii
	cout « "Enter 2 numbers: "; 
	cin » a » b; 
	cout « "1. Summa"; 
	cout « "2. Vichitan"; 
	cout « "3. Umnozhenie";
	cout << "4. Delenie";
	cout << "5. Exit";
	cout « "Enter action:"; 
	cin » n; 
	switch (n)
	case '1':
	cout << MySum(a,b) << endl;	
	case '2':
	cout << MySub(a,b) << endl;
	case '3':
	cout << MyMul(a,b) << endl;
	case '4':
	cout << MyDiv(a,b) << endl;
	return 0;
}
	system("pause"); 
	return 0; 
}