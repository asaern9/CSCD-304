#include <iostream>
using namespace std;

void bubbleSort(int array[], int arraySize)
{
  for (int x = 0; x < arraySize - 1; ++x)
  {
    for (int i = 0; i < arraySize - x - 1; ++i)
    {
      if (array[i] > array[i + 1])
      {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

int main()
{
  int arraySize,element;
  cout<<"Enter the size of the array: ";
  cin>>arraySize;
  int Arr[arraySize];
  
  for(int x=0; x<arraySize; x++){
      cout<<"Enter element for index"<<x<<": ";
      cin>>element;
      Arr[x] = element;
  }
  
  bubbleSort(Arr, arraySize);
  cout << "Sorted Array in Ascending Order: ";
  for (int i = 0; i < arraySize; ++i)
  {
    cout << "  " << Arr[i];
  }
}