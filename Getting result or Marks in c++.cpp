#include<iostream>
using namespace std;
class student{
	int roll_number;
	public:
		void setrollnumber(int);
		void getrollnumber(void);
};
void student :: setrollnumber(int x)
{
	roll_number = x;
}
void student :: getrollnumber(void)
{
	cout<<"The roll number of student is "<<roll_number<<endl;
}
class marks : public student{
	protected:
	int maths;
	int chem;
	public:
		void setmarks(int, int);
		void getmarks(void);
		
}; 
void marks :: setmarks(int a, int b){
	maths = a;
	chem = b;
}
void marks :: getmarks(void){
	cout<<"The marks of maths and chemistry is "<<maths<<" and "<<chem<<endl;
}
class result : public marks{
	float result;
	public:
		void display()
		{
	
		getrollnumber();
		getmarks();
		cout<<"the result of student is "<<(maths+chem)/2<<"%"<<endl;
	}
};

int main()
{
	result amaan;
	
	amaan.setrollnumber(36);
	
	amaan.setmarks(100, 50);
	amaan.display();
	
	
}