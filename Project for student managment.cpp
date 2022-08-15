#include<iostream>
#include<fstream>
#include<string>

using namespace std;
class student{
	string college; 
	string name;
	int roll;
	string coarse;
	string email;
	int number;
	public:
		int setdata(){
			
			ofstream in;
			in.open("Student Report.txt");
			
			cout<<endl<<"Write College Name = ";
		    cin>>college;
		    in<<college<<endl;
			cout<<endl<<"Write Your Name = ";
			cin>>name;
			in<<name<<endl;
			cout<<endl<<"Write Roll number = ";
			cin>>roll;
			in<<roll<<endl;
			cout<<endl<<"Write Your Email ID: = ";
			cin>>email;
			in<<email<<endl;
			cout<<endl<<"Write Your coarse = ";
			cin>>coarse;
			in<<coarse<<endl;
			cout<<endl<<"Write Your Phone Number = ";
			cin>>number;
			in<<number<<endl;
		    in.close();
}
    	int getdata2(){
    		
    		 string a;
    			ifstream in;
    			in.open("Student Report.txt");
    			while (in.eof() ==0){
    				getline(in, a);
    				cout<<a<<endl;
					}	
			}
			
};
int main()
{
	menustart:
    int x;
	cout<<"                    _______________________________"<<endl<<"                    ::Student Management System::"<<endl<<"                   ________________________________";
	cout<<endl<<"                    1.Enter New Record."<<endl<<"                    2.Display Record."<<endl<<"                    3.Modify Record."<<endl<<"                    4.Search Record."<<endl<<"                    5.Delete Record"<<endl<<"                    6.EXIT"<<endl
	;
	int a;
	cin>>a;
	student c1;
    if (a==1){
		cout<<"You have selected 1.";
		do{
	    c1.setdata();
	    cout<<"If you want to redo press 1 of to exit press any number";
	    cin>>x;
	    }while(x==1);
	    goto menustart;
}
	else if (a==2){
	cout<<"You have selected 2. \n";
	c1.getdata2();
	int x;
	cout<<"press 1 for Main Menu or exit by any key.";
	cin>>x;
	if(x==1){
		 goto menustart;
	}	
	else{
		return 0;
	}
	}
	else if (a==3){
		cout<<"Working On This.";
		 goto menustart;
	}
	else if (a==4){
		cout<<"Working On This.";
		 goto menustart;
	}
	else if (a==5){
		cout<<"Working On This.";
		 goto menustart;
	}
	else
	{
		return 0;
	}
	
   
}
