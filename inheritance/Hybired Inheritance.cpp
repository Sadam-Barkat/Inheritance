/*
It is the combinatioin of more than one type of inheritance is called Hybired Inheritance
*/
#include<iostream>
using namespace std;

class A
{
	private:
		int n;
	public:
		void input(){
			cout<<"Enter the number : "<<endl;
			cin>>n;
		}
		void show(){
			cout<<"The required number is : "<<n<<endl;
		}
};
class B:virtual public A
{
		
};
class C:virtual public A
{
	
};
class D:public B,public C
{
	
};
int main(){
	A obja;
	B objb;
	C objc;
	D objd;
	obja.input();
	obja.show();
	
	objb.input();
	objb.show();
	
	objc.input();
	objc.show();
	
	objd.input();
	objd.show();
	
	return 0;
}
