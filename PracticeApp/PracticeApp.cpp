// PracticeApp.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <stdio.h>
#include "stdafx.h"
char A[100] = { 0 };
void Binary(int n)
{
	if (n<1)
	{
		printf("%s", A);
		printf("\n");
	}
	else
	{
		A[n - 1] = '0';
		Binary(n - 1);
		A[n - 1] = '1';
		Binary(n - 1);
	}
}
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	printf("Hello World\n");
	Binary(1);
	printf("done......\n");
	return 0;
}

