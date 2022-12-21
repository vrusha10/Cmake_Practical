Final :- Final Keyword specifes that a virtual  function cannot be overridden in derived class.
         It also specifies that class cannot to be inherited from.
         Ensure that function is virtual,otherwise comiple time error genereated. 

/*Virtual Fun Using Final Keyword*/
#include <iostream>
using namespace std;

class Base final  
{
public:
	virtual void fun() final
	{
		cout << "fun Base"<<endl;
	}
};
class Derived : public Base         //Not Possible
{
	void fun()     //Error
	{
		cout << "fun Derived"<<endl;
	}
};

int main()
{
	Base *b = new Derived;       //not possible
	b->fun();
}


/*Virtual Fun Using Final Keyword*/
#include <iostream>
using namespace std;

class Base
{
public:
	virtual void fun() 
	{
		cout << "fun Base"<<endl;
	}
};
class Derived final : public Base        
{
	void fun()     final
	{
		cout << "fun Derived"<<endl;
	}
};

int main()
{
	Base *b = new Derived;          //possible
	b->fun();
}
o/p=Fun Derived

/*Basic Program*/
#include <iostream>
using namespace std;
class Base
{
};
class Derived final : public Base        
{
};

int main()
{
   Derived d;   //It is Possible
}


#include <iostream>
using namespace std;
class Base final
{
};
class Derived : public Base        
{
};

int main()
{
   Derived d;   //It is Not Possible
}