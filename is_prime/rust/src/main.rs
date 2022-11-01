fn is_prime(n: i64) -> bool {
    if n < 2 {
        return false;
    }
    (2..=(n as f64).sqrt() as i64).all(|i| n % i != 0)
}

fn main() {
    let s: i64 = (1..1000000 as i64).filter(|n| is_prime(*n)).sum();
    println!("{}", s);
}
