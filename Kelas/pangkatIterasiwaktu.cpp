#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

main(){
	int pangkat, hasil, n;
	
	cout<<"Masukan nilai utama : "<<endl;
	cin>>n;
	cout<<"Masukan pangkat : "<<endl;
	cin>>pangkat;
	hasil = n;

	auto start = high_resolution_clock::now();
		
	for(int i = 0; i<pangkat-1; i++){
		hasil*=n;
	}
	
	cout<<"\nHasil = "<< hasil<<endl;
	
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start); 
  
    cout << "Time taken by function: "
         << duration.count() << " nanoseconds" << endl; 
}
