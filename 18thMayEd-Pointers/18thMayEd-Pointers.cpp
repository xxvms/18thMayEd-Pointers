// 18thMayEd-Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>

using namespace std;
class String   // user-defined string type
{
private:
	char str[20];
public:
	String()
	{  }
	String(char s[])
	{   
		strcpy_s(str, s);
	}
	operator char*()			// conversion function
	{
		return str;
	}	// converts String to string
};

int main()
{
	String s2 = "Bonne Annee!";	// uses constructor 1
	cout << (char*)s2 << endl;	// use conversion function
	cin.get();				// to convert String to string
	return 0;
}
