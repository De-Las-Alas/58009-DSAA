#include<iostream>
using namespace std;
int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x, elem;
    cout<<"\nThe Array is:\n";
    for(x=0; x<10; x++)
        cout<<numbers[x]<<" ";
    cout<<"\n\nThe Reverse of The Array is:\n";
    for(x=(10-1); x>=0; x--)
        cout<<numbers[x]<<" ";
    cout<<endl;
    return 0;
}