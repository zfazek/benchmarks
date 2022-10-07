import math

fn is_prime(n i32) bool {
    if n < 2 {
        return false
    }
    for i := 2; i <= math.sqrt(n); i += 1 {
        if n % i == 0 {
            return false
        }
    }
    return true
}

fn main() {
    mut sum := u64(0)
    println("Hello")
    for n := 1; n < 1000000; n += 1 {
        if is_prime(n) {
            sum += u64(n)
        }
    }
    println(sum)
}
