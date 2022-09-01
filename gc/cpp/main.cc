#include <chrono>
#include <iostream>
#include <memory>
#include <vector>

using namespace std;
using namespace chrono;

struct Data {
    constexpr static int SIZE = 1024;
    vector<int> arr;
};

int main() {
    cout << "Hello" << endl;
    long start = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    long checksum = 0;
    const int number_of_objects = 1000000;
    for (int i = 0; i < number_of_objects; ++i) {
        unique_ptr<Data> data = make_unique<Data>(Data());
        for (int j = 0; j < Data::SIZE; ++j) {
            data->arr.push_back(j);
            checksum += data->arr[j];
        }
    }
    long end = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    cout << checksum << endl;
    cout << "time (ms): " << end - start << endl;
}
