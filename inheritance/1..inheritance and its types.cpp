#include<iostream>
using namespace std;

class father
{
    protected:
	string surname = "Barkat khan";
};
class son1:public father
{
    public:
	string name = "Badhar khan";
		void show(){
			cout<<name<<" "<<surname<<endl;
		}
};
class son2:public father
{
	public:
		string name = "Nasir khan";
		void display(){
			cout<<name<<" "<<surname<<endl;
		}
};

int main(){
	son1 s1; son2 s2; father f;
	s1.show();
	s2.display();
	
	return 0;
}
