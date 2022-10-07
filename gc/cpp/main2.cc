#include <chrono>
#include <iostream>
#include <memory>

using namespace std;

struct Data {
    constexpr static int SIZE = 1024;
    int arr[SIZE];
};

int main() {
    cout << "Hello" << endl;
    long start = chrono::duration_cast<chrono::milliseconds>(
                     chrono::system_clock::now().time_since_epoch())
                     .count();
    long checksum = 0;
    const int number_of_objects = 10000000;
    for (int i = 0; i < number_of_objects; ++i) {
        Data data;
        for (int j = 0; j < Data::SIZE; ++j) {
            data.arr[j] = j;
            checksum += data.arr[j];
        }
    }
    long end = chrono::duration_cast<chrono::milliseconds>(
                   chrono::system_clock::now().time_since_epoch())
                   .count();
    long duration = end - start;
    cout << checksum << endl;
    cout << "time: (ms): " << duration << endl;
}
