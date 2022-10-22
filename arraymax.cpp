 QUESTION 1 - WRITE THE PROGRAM TO FIND THE MAXIMUM NUMBER AND MININMUM NUMBER THROUGH ARRAY?
     
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"ENTER THE NUMBER"<<endl;
cin>>n;

int arr[n];

for(int i =0;i<n;i++)
{
    cin>>arr[i];
}

int maxno = INT16_MIN;
int minno = INT16_MAX;
for(int i =0;i<n;i++)
{
    if(arr[i]>maxno)
    {
        maxno=arr[i];
    }
    if(arr[i]<minno)
    {
        minno=arr[i];
    }
}
cout<<"maximum number is"<<maxno<<endl;
cout<<"minimum number is" <<minno<<endl;

return 0;
}
