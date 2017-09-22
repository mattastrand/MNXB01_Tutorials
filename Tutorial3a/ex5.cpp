// Create a functionand then call it from main.

#include <iostream>
using namespace std;


int DetLarger(int first, int second) {
	int larger;
	larger = second;
	if(first > second){
		larger = first;
	}
	return larger;
}

int main() {
	int first,second;
	cout<<"Enter the first number:"<<endl;
	cin>>first;
	cout<<"Enter the second number:"<<endl;
	cin>>second;
	cout<<"The larger one is: "<< DetLarger(first,second);
}
