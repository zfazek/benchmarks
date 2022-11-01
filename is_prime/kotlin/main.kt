import kotlin.math.sqrt


fun isPrime(n: Int): Boolean {
    if (n < 2) {
        return false
    }
    return (2..sqrt(n.toDouble()).toInt()).all { i -> n % i != 0 }
}

fun main() {
    val start = System.currentTimeMillis()
    val s: Long = (1L..1_000_000).filter { i -> isPrime(i.toInt()) }.sum()
    val end = System.currentTimeMillis()
    println(s)
    println(String.format("time (ms): %s", end - start))
}
