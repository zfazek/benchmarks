import kotlin.math.sqrt

fun isPrime(n: Int): Boolean {
    if (n < 2) {
        return false
    }
    for (i in 2..sqrt(n.toDouble()).toInt()) {
        if (n % i == 0) {
            return false
        }
    }
    return true
}

fun main() {
    val start = System.currentTimeMillis()
    var sum: Long = 0
    println("Hello")
    for (n in 1..1_000_000) {
        if (isPrime(n)) {
            sum += n
        }
    }
    val end = System.currentTimeMillis()
    println(sum)
    println(String.format("time (ms): %s", end - start))
}
