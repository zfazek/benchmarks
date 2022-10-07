fn is_prime(n: i32) -> bool {
    if n < 2 {
        return false;
    }
    (2..=(n as f64).sqrt() as i32).all(|i| n % i != 0)
}

fn main() {
    let mut sum: u64 = 0;
    println!("Hello, world!");
    for n in 1..1000000 {
        if is_prime(n) {
            sum += n as u64;
        }
    }
    println!("{}", sum);
}
