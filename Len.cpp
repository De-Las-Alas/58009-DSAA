#include <iostream>
using namespace std;
int main()
{
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x;
    cout<<"\nThe Array is:\n";
    for(x=0; x<10; x++)
        cout<<numbers[x]<<" ";
        cout<<"\n";
  int numbSize = sizeof(numbers)/sizeof(numbers[0]);
  cout << "\nThe Size of The Array is: " << numbSize << "\n";
  return 0;
}