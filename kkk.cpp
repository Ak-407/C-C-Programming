#include<iostream>
using namespace std;
template <class t1, class t2>
float getdata(t1 a, t2 b){
	int answer;
	answer = a * b / 2;
	return answer;
}
int main()
{
	float z;
	z = getdata(3, 5.5);
	cout<<"we get the value of z as = .2f"<<z;
	printf("we get the value of z as = %.2f", z);
	return 0;
	
}