#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

typedef struct Node {
    int arr[SIZE];
} Node;


int main() {
    puts("Hello");
    long checksum = 0;
    for (int i = 0; i < 1000000; ++i) {
        Node node;
        for (int j = 0; j < SIZE; ++j) {
            node.arr[j] = j;
            checksum += node.arr[j];
        }
    }
    printf("%lu\n", checksum);
}
