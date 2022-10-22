// #include<iostream>
// using namespace std;
// void update(int arr[], int n)

// {
//     arr[0]= 120;
//     for(int i=0;i<3;i++)
//     {
//         cout<<arr[i];
//     }
//      cout<<endl<<"inside the main fuction\n";
// }
// int main(){
// int arr[3]={1,2,3};
// update(arr,3);
// for(int i=0;i<3;i++)
//     {
//         cout<<arr[i];
//     }
// return 0;
// }

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