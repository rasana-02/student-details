#include<iostream>
using namespace std;
class student{
	int admno;
	char sname[20];
	float eng,math,science;
	float total;
	public:
		void take_data(){
			cout<<"enter admno\n";
			cin>>admno;
			cout<<"sname\n";
			cin>>sname;
			cout<<"enter eng,math science respectively\n";
			cin>>eng>>math>>science;
		}
		void ctotal(){
			total=eng+math+science;
			
		}
		void showdata(){
		cout<<"all details are\n";
		cout<<admno<<endl;
		cout<<sname<<endl;
		cout<<eng<<endl;
		cout<<math<<endl;
		cout<<science<<endl;
		cout<<"the total is:"<<total<<endl;
		}
};
int main(){
	student S;
	S.take_data();
	S.ctotal();
	S.showdata();
	return 0;
	
}
