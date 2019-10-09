#include<iostream>
using namespace std;
//fid the square root of the function by using alogrithim


	int main(){
		float f,t,i;
		cout<<"enter the number to which you want to find the root of that \n";
		cin>>t;
		cout<<"\n enter the guess ";
		cin>>f;
		for(i=0;i<t;i++){
			if(f*f==t){
			cout<<"Answer is: "<<f;
			break;
		}
		else{
			f=(f+t/f)/2;
			
		}
	}
	cout<<"Ends hello Algo ";
	return 0;
}
