package main

import "fmt"
import "time"

type Data struct {
    SIZE int
    arr []int
}

func main() {
    fmt.Println("Hello")
    start := time.Now()
    var checksum int64 = 0
    for i := 0; i < 1000000; i++ {
        data := Data{}
        data.SIZE = 1024
        for j := 0; j < data.SIZE; j++ {
           data.arr = append(data.arr, j)
           checksum += int64(data.arr[j])
        }
    }
    end := time.Now()
    fmt.Println(checksum)
    fmt.Printf("time (ms): %d\n", end.Sub(start) / 1000000)
}
