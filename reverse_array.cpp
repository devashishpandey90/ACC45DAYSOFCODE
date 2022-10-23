// WRITE THE PROGRAM AN REVERSE AN ARRAY 
#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int start = 0;
    int end= n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start ++;
        end--;
    }
    cout<<endl;
}

void printarray(int arr[],int n)
{
    for (int i = 0; i <n; i++)
    {
         cout<<arr[i];
    }
    
}



int main(){
  int size[5]={2,3,4,5,6};
  reverse(size,5);
  printarray(size,5);
}