29-01-2024

Bubble sort:

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a[]={1,3,2,4,5,6,7,9,8,0};
    int getArrayLength = sizeof(a)/sizeof(int);
    for(int i=0;i<getArrayLength;i++)
    {
        for(int j=0;j<getArrayLength-1;j++)
        if(a[j]<a[j+1]){
            int temp =a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    for(int i=0;i<getArrayLength;i++){
        cout<<a[i];
    }
}
    