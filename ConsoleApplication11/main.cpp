#include "includes.h"
#include "add.h"
#include "mult.h"
#include "Display.h"
int main()
{
	int a = 155, b = 10;
	int res;
	res = add (a,b);
	Display(res);
	res = mult (a,b);
	Display(res);
}