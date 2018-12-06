#include "stdafx.h" #include "funcs.h"
double MySum(double a, double b) 
{ return a + b; }
double MySub(double a, double b) 
{ return a - b; }
double MyMul(double a, double b) 
{ return a * b; }
double MyDiv(double a, double b)
{
	return a / b;
	if (b == 0) 
		return 0;
}
double MyPow(double a)
{
	return a*a;
}