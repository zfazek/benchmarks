use std::time::{SystemTime, UNIX_EPOCH};

const SIZE: usize = 1024;

struct Data {
    arr: Vec<i32>,
}

struct DataArr {
    arr: [i32; SIZE],
}

fn foo() {
    println!("Hello");
    let start = SystemTime::now()
        .duration_since(UNIX_EPOCH)
        .unwrap()
        .as_millis();
    let mut checksum: i64 = 0;
    for _ in 0..1000000 {
        let arr = Vec::new();
        let mut data = Box::new(Data { arr });
        for i in 0..SIZE {
            data.arr.push(i as i32);
            checksum += data.arr[i] as i64;
        }
    }
    let end = SystemTime::now()
    .duration_since(UNIX_EPOCH)
    .unwrap()
    .as_millis();
    println!("{}", checksum);
    println!("time (ms): {}", end - start);
}

fn foo1() {
    println!("Hello");
    let start = SystemTime::now()
    .duration_since(UNIX_EPOCH)
    .unwrap()
    .as_millis();
    let mut checksum: i64 = 0;
    for _ in 0..1000000 {
        let arr = [0; SIZE];
        let mut data = DataArr { arr };
        // let mut data = Box::new(DataArr{arr});
        for i in 0..SIZE {
            data.arr[i] = i as i32;
            checksum += data.arr[i] as i64;
        }
    }
    let end = SystemTime::now()
        .duration_since(UNIX_EPOCH)
        .unwrap()
        .as_millis();
    println!("{}", checksum);
    println!("time (ms): {}", end - start);
}

fn main() {
    // foo();
   foo1();
}
