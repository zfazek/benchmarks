public class Main1 {
	
	public static void main(String[] args) {
		System.out.println("Hello");
		long start = System.currentTimeMillis();
        long checksum = 0;
		for (int i = 0; i < 1_000_000; i++) {
			Data data = new Data();
			for (int j = 0; j < Data.N; j++) {
				data.arr[j] = j;
                checksum += data.arr[j];
			}
		}
		long end = System.currentTimeMillis();
        System.out.println(checksum);
		System.out.format("time (ms): %d\n", end - start);
	}

}

class Data {
	static final int N = 1024;
	int[] arr = new int[Data.N];
}