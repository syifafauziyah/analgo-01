#include<iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main(int argc, char** argv)
{
	
	int n, i, arr[50], search, first, last, middle;
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" number :";
	for (i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter a number to find :";
	cin>>search;
	auto start = high_resolution_clock::now();
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;

		}
		else if(arr[middle] == search)
		{
			cout<<search<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<search<<" is not present in the list.";
	}
	//getch();
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start); 
  
    cout << "Time taken by function: "
         << duration.count() << " nanoseconds" << endl; 
    return 0;
}
