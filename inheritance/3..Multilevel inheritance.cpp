#include<iostream>
using namespace std;
/*
The inheritance in which contain one Base class and multiple drived class called multi level inheritance
*/

class Base
{
	private:
		int b;
	public:
		void inputValueB(){
			cout<<"Enter the value of Base : "<<endl;
			cin>>b;
		}
		void showB(){
			cout<<"The vlaue of Base is : "<<b<<endl;
		}
};
class Drive1:public Base
{
	private:
		int d1;
	public:
		void inputValueD1(){
			cout<<"Enter the value of Drive1 : "<<endl;
			cin>>d1;
		}
		void showD1(){
			cout<<"The value of Drive1 is : "<<d1<<endl;
		}
};
class Drive2:public Drive1
{
	private:
		int d2;
	public:
		void inputValueD2(){
			cout<<"Enter the value of Drive2 : "<<endl;
			cin>>d2;
		}
		void showD2(){
			cout<<"The value of Drive2 is : "<<d2<<endl;
		}
};

int main(){
	Base objb;
	Drive1 objd1;
	Drive2 objd2;
	
    objb.inputValueB();
    objb.showB();
    cout<<endl;
    objd1.inputValueD1();
    objd1.showD1();
    cout<<endl;
    objd2.inputValueD2();
    objd2.showD2();
	return 0;
}
