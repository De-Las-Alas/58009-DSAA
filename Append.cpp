#include<iostream>
using namespace std;
int main()
{
    int numbers[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}, x, elem;
    cout<<"\nThe Current Array is:\n";
    for(x=0; x<10; x++)
        cout<<numbers[x]<<" ";
        cout<<"\n";
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    elem = numbers[10];
    cout<<"\nThe New Array is:\n";
    for(x=0; x<11; x++)
        cout<<numbers[x]<<" ";
    cout<<endl;
    return 0;
}