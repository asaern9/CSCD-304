#include <iostream>
using namespace std;

int searchR(int A[], int n, int key){
    if(n<0){
	cout<<"not found"<<endl;
        return -1;
    }
    if(key == A[n]){
	cout<<key<<" is at found at index "<<n<<endl;
        return n;
    }

    return searchR(A,n-1,key);
}

int main() {
	int arraySize;
	int key;
	cout<<"Enter the size of the array ";
	cin>>arraySize;
	int Arr[arraySize];
	int i;
	cout<<"Enter the numbers into the array"<<endl;
	for(i=0;i<arraySize;i++){
		cout<<"Enter number for index"<<i<<"  ";
		cin>>Arr[i];
	}
	cout<<"Enter the number you want to search: ";
	cin>>key;
	searchR(Arr,arraySize,key);	
	return 0;
}
