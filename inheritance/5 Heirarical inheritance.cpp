#include<iostream>
using namespace std;
/* A class which contain only one Base class and multiple Drived classes but each Drive class access Base class 
   is called Heirarical inheritance
*/

class Base
{
	private:
		int a,b;
	public:
		void inputValueB(){
			cout<<"Enter the values of Base : "<<endl;
			cin>>a>>b;
		}
        void showB(){
        	cout<<"A="<<a<<"  B="<<b<<endl;
		}
};
class Drive1:public Base
{
	protected:
		int d1;
	public:
		void inputValueD1(){
			cout<<"Enter the value of Drive1 : "<<endl;
			cin>>d1;
		}
		void showD1(){
			cout<<"D1="<<d1<<endl;
		}
};
class Drive2:public Base,Drive1
{
	private:
		int d2;
	public:
		void inputValueD2(){
			cout<<"Enter the value of Drive2 : "<<endl;
			cin>>d2;
		}
		void showD2(){
			cout<<"D2="<<d2<<endl;
		}
};

int main(){
	Base objb;
	Drive1 objd1;
	Drive2 objd2;
	
	objb.inputValueB();
	objb.showB();
	
	objd1.inputValueD1();
	objd1.showD1();
	
	objd2.inputValueD2();
	objd2.showD2();
	objd1.inputValueB();
	objd1.showB();
	return 0;
}
