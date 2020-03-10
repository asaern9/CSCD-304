#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
  

void selectionSort(int array[], int arraySize)
{
  for (int x = 0; x < arraySize - 1; x++)
  {
    int min = x;
    for (int i = x + 1; i < arraySize; i++)
    {
      if (array[i] < array[min])
        min = i;
    }
    swap(&array[min], &array[x]);
  }
}
int main()
{
  int arraySize;
  cout<<"Enter the size of the array: ";
  cin>>arraySize;
  int Arr[arraySize], element;
  for(int x=0; x<arraySize; x++){
      cout<<"Enter element for index"<<x<<" ";
      cin>>element;
      Arr[x] = element;
  }
  selectionSort(Arr, arraySize);
  cout << "Sorted array in Acsending Order: ";
  for (int i = 0; i < arraySize; i++)
  {
    cout << Arr[i] << " ";
  }
}