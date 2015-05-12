#include<iostream>
#include"UniTest.h"
#include "database.h"
using namespace std;

int main()
{
	UniTest test;
	UniTest::_TestInfo strvar;

	test.RegisterTest(&fun1, "fun1");
	test.RegisterTest(&fun2, "fun1");
	test.Run();


	//test.myStrct._Func = test.fun1;
	//strvar._Func() = test.fun1;
	//strvar._Name = "fun1";
	//test.RegisterTest(fun1,"fun1");
	//test.RegisterTest(run,"Nothing");

	return 0;
}
