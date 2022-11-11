#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;

int main()
{
    vector<int> values(10000000);

    auto f = []() -> int {return rand()%10000; };

    generate(values.begin(), values.end(), f);

    auto start1 = high_resolution_clock::now();
    sort(values.begin(), values.end());
    auto stop1 = high_resolution_clock::now();

    auto duration1 = duration_cast<milliseconds>(stop1-start1);

    cout << "Time taken by function1:"<<
             duration1.count() << "ms" << endl;
    
    auto start2 = high_resolution_clock::now();
    sort(values.begin(), values.end());
    auto stop2 = high_resolution_clock::now();

    auto duration2 = duration_cast<milliseconds>(stop2-start2);

    cout << "Time taken by function2:"<<
             duration2.count() << "ms" << endl;

    auto start3 = high_resolution_clock::now();
    reverse(values.begin(), values.end());
    //sort(values.begin(), values.end(), greater<int>());
    auto stop3 = high_resolution_clock::now();

    auto duration3 = duration_cast<microseconds>(stop3-start3);

    cout << "Time taken by function3:"<<
             duration3.count() << "ms" << endl;

    return 0;
}