
/*
A type of inheritance which contain single base class and single deived class is called single inheritance
*/
#include<iostream>
using namespace std;

class Base
{
	private:
		int a,b;
	public:
		void inputB(){
			cout<<"Enter the value for Base class : "<<endl;
			cin>>a>>b;
		}
		void showB(){
			cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
		}
};
class Drive:public Base
{
	private:
		int x,y;
	public:
		void inputD(){
			cout<<"Enter the value for Drive class : "<<endl;
			cin>>x>>y;
		}
		void showD(){
			cout<<"X : "<<x<<endl<<"Y : "<<y<<endl;
	    }
};

int main(){
	Base objB;
	Drive objD;
	
	objB.inputB();
	objB.showB();
	objD.inputD();
	objD.showD();
	
	objD.inputB();
	objD.showB();
	
	return 0;
}
