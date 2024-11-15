#include<iostream>
using namespace std;
// A class which contain more Base classes and only one Drived class is called multiple inheritance

class Base1
{
	private:
		int a,b,c;
	public:
		void inputValuesB1(){
			cout<<"Enter the values of Base1 : "<<endl;
			cin>>a>>b;
		}
		void showB1(){
			c = a+b;
			cout<<"The sum of Base1 is : "<<c<<endl;
		}
};
class Base2
{
	private:
		int a,b,c;
	public:
		void inputValuesB2(){
			cout<<"Enter the values of Base2 : "<<endl;
			cin>>a>>b;
		}
		void showB2(){
			c = a-b;
			cout<<"The subtraction of Base2 is : "<<c<<endl;
		}
};
class Drive:public Base1,public Base2
{
	private:
		int a,b,c;
	public:
		void inputValuesD(){
			cout<<"Enter the values of Drive : "<<endl;
			cin>>a>>b;
		}
		void showD(){
			c = a*b;
			cout<<"The multiplication of Drive : "<<c<<endl;
			
		}
		
};

int main(){
//	Base1 objb1;
//	Base2 objb2;
//	Drive objd;
	
//	objb1.inputValuesB1();
//	objb1.showB1();
//	cout<<endl;
//	objb2.inputValuesB2();
//	objb2.showB2();
//	cout<<endl;
//	objd.inputValuesD();
//	objd.showD();

    Drive objd;
    objd.inputValuesD();
    objd.showD();
    cout<<endl;
	objd.inputValuesB1();
	objd.showB1();
	cout<<endl;
	objd.inputValuesB2();
	objd.showB2();
	 

	
	return 0;
}
