#include<iostream>
using namespace std;
int main(){int n;
cout<<"Enter number of elements in array: ";
cin>>n;
int arr[n];
cout<<endl<<"Enter elememts of array : ";
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
//Q 1
int x ,count= 0;
cout<<endl<<"Enter the value for  x : ";
cin>>x;
for(int i =0; i<n;i++){
    for(int j =i+1;j<n;j++){
        for(int k =j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k] == x){
                count++;
            }
        }
    }
}
cout<<"no.of required triplets = "<<count;

//Q 2
int fact=1,max = arr[0];
for(int i =1; i<n;i++){
if(arr[i]>max){
    max = arr[i];
}
}
for(int i =2;i<=max;i++){
    fact*=i;
}
cout<<endl<<"Required factorial = "<<fact;
// Q 3
for(int i =0;i<n;i++){
    for(int j =0;j<n;j++){
        if(arr[i] == arr[j] && i != j){
            break;
        }
        else if(j == n-1){
            cout<<"The required elemment is "<<arr[i];
            i = n;
        }
    }
}
// Q 4
int m;
cout<<endl<<"Enter number of elements in big array : ";
cin>>m;
int arr2[m];
cout<<endl<<"Enter elememts of array : ";
for(int i = 0;i<m;i++){
    cin>>arr2[i];
}
for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){if(arr[i] == arr[j]){if(i == n-1){
        cout<<endl<<"Given array is a subset of bigger array.";
    }
        break;}
      else if(j == m-1){
        cout<<"Given array is not asubset of bigger array.";
        i =n;
      }
    }
}
}