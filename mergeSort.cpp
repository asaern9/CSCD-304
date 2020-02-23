#include <iostream>

using namespace std;

// Merge Function
void merge(int *Arr, int lowIndex, int highIndex, int mid)
{
    int x, y, z, TempArray[30];
    x = lowIndex;
    z = lowIndex;
    y = mid + 1;
    while (x <= mid && y <= highIndex) {
        if (Arr[x] < Arr[y]) {
            TempArray[z] = Arr[x];
            z++;
            x++;
        }
        else  {
            TempArray[z] = Arr[y];
            z++;
            y++;
        }
    }
    while (x <= mid) {
        TempArray[z] = Arr[x];
        z++;
        x++;
    }
    while (y <= highIndex) {
        TempArray[z] = Arr[y];
        z++;
        y++;
    }
    for (x = lowIndex; x < z; x++)  {
        Arr[x] = TempArray[x];
    }
}

    // Function for sorting the array
void mergeSort(int *Arr, int lowIndex, int highIndex)
{
    int mid;
    if (lowIndex < highIndex){
        mid=(lowIndex + highIndex)/2;
        mergeSort(Arr,lowIndex,mid);
        mergeSort(Arr,mid+1,highIndex);
        merge(Arr,lowIndex,highIndex,mid);
    }
}

int main()
{
    int Arr[30], number;
    cout<<"Enter the  number of elements to be sorted in the array:";
    cin>>number;
    for (int i = 0; i < number; i++) {
        cin>>Arr[i];
    }
    mergeSort(Arr, 0, number-1);
    cout<<"The Sorted array is given below\n";
    for (int i = 0; i < number; i++)
    {
        cout<<Arr[i]<<"\t";
    }
}