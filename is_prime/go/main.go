package main

import (
	"fmt"
	"math"
)

func is_prime(n int) bool {
	if n < 2 {
		return false
	}
	for i := 2; float64(i) <= math.Sqrt(float64(n)); i += 1 {
		if n%i == 0 {
			return false
		}
	}
	return true
}

func main() {
	sum := uint64(0)
	fmt.Println("Hello")
	for n := 1; n < 1000000; n += 1 {
		if is_prime(n) {
			sum += uint64(n)
		}
	}
	fmt.Println(sum)
}
