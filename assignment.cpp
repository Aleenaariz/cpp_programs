#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<chrono>
using namespace std;
using namespace std::chrono;

int main(){

    int arr[1000];
    int n = sizeof(arr) / sizeof(arr[0]);
	for( int i=0; i < n; i++){
        arr[i] = rand();
    }
    /*for( int i=0; i < n; i++){
        cout<< arr[i]<< " ";
    }*/
    auto start1 = high_resolution_clock::now();
    sort(arr, arr+n);
    auto stop1 = high_resolution_clock::now();
    /*for( int i=0; i < 5; i++){
        cout<< arr[i]<< " ";
    }*/

    auto duration1 = duration_cast<microseconds>(stop1-start1);

    cout << "Time taken by function1:"<<
             duration1.count() << "ms" << endl;

    auto start2 = high_resolution_clock::now();
    sort(arr, arr+n);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2-start2);

    cout << "Time taken by function2:"<<
             duration2.count() << "ms" << endl;
    
    auto start3 = high_resolution_clock::now();
    reverse(arr, arr+n);
    auto stop3 = high_resolution_clock::now();

    auto duration3 = duration_cast<microseconds>(stop3-start3);

    cout << "Time taken by function3:"<<
             duration3.count() << "ms" << endl;
    /*for( int i=0; i < 5; i++){
        cout<< arr[i]<< " ";
    }*/

    return 0;
}