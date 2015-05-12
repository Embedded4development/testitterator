#include<iostream>
#include<list>
#include<string>

class UniTest
{
public:
	typedef UniTest         Type;
	typedef void (*TestFunction)();
struct _TestInfo
{
		TestFunction _Func;
		std::string _Name;
}myStrct;

void RegisterTest(TestFunction fun,std::string name);
void Run();
private:
	std::list<_TestInfo> ListTestInfo;

};

