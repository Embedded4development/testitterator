#include "UniTest.h"
#include<vector>
void UniTest::RegisterTest(TestFunction fun,std::string name)
{

UniTest::_TestInfo TypeInfo{fun,name};
ListTestInfo.push_back(TypeInfo);

}
void UniTest::Run()
{

	std::list<_TestInfo>::iterator itr;

	for (itr = ListTestInfo.begin();itr != ListTestInfo.end(); itr++)
	{
		TestFunction fun = (TestFunction)(itr)->_Func;
		fun();


	/*
		((TestFunction)itr->_Func) = this->_TestInfo::_Func;
		itr->_Func();
*/
	}

}

