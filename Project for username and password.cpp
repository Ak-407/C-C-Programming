#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int registration(string a,string b){
	cout<<"you have chosed registration in J&K Bank.-->"<<endl;
	cout<<"Username: "<<endl;
	cin>>a;
	//getline(cin, a);
	cout<<"Password: "<<endl;
	cin>>b;
	//getline(cin, b);
	ofstream out("Bank security.txt");
	out<<a<<endl;
	out<<b;
}
int login(string m, string n){
	cout<<"you have chosed login in J&K Bank.-->"<<endl;
	string x, y;
	cout<<"Username: "<<endl;
	cin>>m;
	//getline(cin, m);
	cout<<"Password: "<<endl;
	cin>>n;
	//getline(cin, n);
	ifstream read("Bank security.txt");
	getline(read, x);
	getline(read, y);
	if(m==x && n==y){
	cout<<"you have sucessfully loged in."<<endl;
    }
    else{
    	cout<<"failed"<<endl;
	}
}
int main(){
	int p;
	cout<<"Please Select \n 1.login \n 2.Registration"<<endl;
	cin>>p;
	if(p==2){
	string a ;
	string b ;
	registration(a, b);
	}
	else
	{
		string m;
		string n;
		login(m,n);
	}
	
}