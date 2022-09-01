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
    const int number_of_objects = 10000000;
    for (int i = 0; i < number_of_objects; ++i) {
        Data data;
        for (int j = 0; j < Data::SIZE; ++j) {
            data.arr[j] = j;
        }
    }
    long end = chrono::duration_cast<chrono::milliseconds>(
                   chrono::system_clock::now().time_since_epoch())
                   .count();
    long duration = end - start;
    cout << "time: (ms): " << duration << endl;
}
