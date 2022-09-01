import time

struct Data {
	mut:
	 size int
	 arr []int
}

fn main() {
	println("Hello")
	start := time.now().unix_time_milli()
	mut checksum := i64(0)
	for i := 0; i < 1000000; i++ {
		mut data := &Data{}
		data.size = 1024
		for j := 0; j < data.size; j++ {
			data.arr << j
			checksum += data.arr[j]
		}
	}
	end := time.now().unix_time_milli()
	println(checksum)
	print("time (ms): ")
	println(end - start)
}