#include<iostream>

using namespace std;

float factorial( int n);

float factorial( int n){
  
  float result = 1.;
  int i;
  if(n==0||n==1){
	return result;
  }
  else{
	for(i=n;i>1;i--){
	  result *= i;
	}
	return result;
  }
  
  
}

int main(int argc, char *argv[]){

  int n;
  cout<<"Enter an integer: ";
  cin>>n;
  cout<<n<<"! = "<<factorial(n)<<endl;
  
  return 0;
  
}
