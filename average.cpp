#include<iostream>
using namespace std;
int main(){
int n;
cout<< "Enter the size of the array: ";
cin >> n;
int arr[n];
for(int i = 0; i< n; i++){
cout<< "Enter number " << i;
cin >> arr[i];
}
int sum = 0;
for(int i = 0; i<n; i++){
sum += arr[i];
}
float avg = sum/n;
cout<< "Average is " <<avg;
}
