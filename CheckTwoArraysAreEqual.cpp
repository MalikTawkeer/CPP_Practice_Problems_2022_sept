// program to check whether two arrays are equal or not
/* 
arr1[] = {1,2,3,4}
arr2[] = {1,2,3,5}
*/
#include<iostream>
using namespace std;

void matchArrays(int arr1[], int arr2[], int size)
{
    for(int i = 0;i<size;i++)
    {
        if(arr1[i] != arr2[i])
        {
            cout<<" TWO ARRAYS ARE NOT EQUAL!!"<<endl;
            return;
        }
    }
    cout<<"TWO ARRAYS ARE EQUAL"<<endl;
}

int main()
{
    int arr1[4] = {1,2,3,4};
    int arr2[4] = {1,2,3,5};
    int size = 4;

    matchArrays(arr1,arr2,size);
}
