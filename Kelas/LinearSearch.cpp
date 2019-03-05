#include<iostream>
#include<conio.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main(int argc, char** argv)
{
	
	int arr[10], i, num, n, c=0, pos;
	cout<<"Enter the array size : ";
	cin>>n;
	cout<<"Enter Array Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be search : ";
	cin>>num;
	auto start = high_resolution_clock::now();
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<num<<" found at position "<<pos;
	}
	//getch();
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start); 
  
    cout << "Time taken by function: "
         << duration.count() << " nanoseconds" << endl; 
    return 0;
}
