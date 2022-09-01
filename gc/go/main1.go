package main

import (
	"fmt"
	"time"
)

type Data struct {
	SIZE int
	arr  []int
}

func main() {
	fmt.Println("Hello")
	start := time.Now()
	var checksum int64 = 0
	for i := 0; i < 1000000; i++ {
		data := new(Data)
		arr := make([]int, 1024)
		data.arr = arr
		data.SIZE = 1024
		for j := 0; j < data.SIZE; j++ {
			data.arr[j] = j
			checksum += int64(data.arr[j])
		}
	}
	end := time.Now()
	fmt.Println(checksum)
	fmt.Printf("time (ms): %d\n", end.Sub(start)/1000000)
}
