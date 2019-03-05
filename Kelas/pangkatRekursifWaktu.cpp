#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int Pangkat(int x,int y){
    if (y==0){
        return 1;
    }
    else{
        return (x*Pangkat(x,y-1));
    }
        
}
int main(int argc, char** argv) {
    int b,p;
    cout<<"masukkan bilangan : "<<endl;
    cin>>b;
    cout<<"masukkan pangkat : "<<endl;
    cin>>p;
    cout<<endl;
    auto start = high_resolution_clock::now();
    cout<<b<<"^"<<p<<"="<<Pangkat(b,p)<<endl;
    auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start); 
  
    cout << "Time taken by function: "
         << duration.count() << " nanoseconds" << endl; 
    return 0;
}
