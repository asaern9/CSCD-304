#include <iostream>

using namespace std;

// Function for finding the minimum number in the array
int  Min(int Arr[], int arraySize){
	int temp = Arr[0];  
	for(int y=1; y<arraySize; y++){
		
		if(temp>Arr[y]){
			temp = Arr[y];
		}
	}
	cout<<"The Minimum number in the array is "<<temp<<endl;
}

// Function for finding the maximum number in the array
int  Max(int Arr[], int arraySize){
	int temp = Arr[0];
	for(int z=1; z<arraySize; z++){
		if(temp<Arr[z]){
			temp = Arr[z];
		}
	}
	cout<<"The Maximum number in the array is "<<temp<<endl;
}

int main(){
	int arraySize;

	cout<<"Enter the size of the array: ";
	cin>>arraySize;
	cout<<"Provide the numbers into the array\n";
	
	int Arr[arraySize], arrayNumber;
	
	for(int x= 0; x<arraySize; x++){
		cout<<"Enter the number at index"<<x<<" :";
		cin>>arrayNumber;
		Arr[x] = arrayNumber;
	}

	cout<<"The element of the array is provided below"<<endl;
	
	for(int i=0; i<arraySize; i++){
		cout<<Arr[i]<<", ";
	}

	int operation;
	
	cout<<"\nSelect the operation you want to perform"<<endl;
	cout<<"1. Minimum number of the array \n2.Maximum number of the array\n3.Exit program"<<endl;
	cout<<"Option: ";
	cin>>operation;

	if(operation == 1){
		Min(Arr,arraySize); // calling the minimum function
	}
	else if(operation == 2){
		Max(Arr,arraySize);  // calling the maximum function
	}
	else if(operation == 3){
		return 1;			//exit the program
	}
	else{
		cout<<"Invalid input"<<endl;
	}
	return 0;
}