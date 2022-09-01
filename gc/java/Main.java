import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		System.out.println("Hello");
		long start = System.currentTimeMillis();
        long checksum = 0;
		for (int i = 0; i < 1_000_000; i++) {
			Data data = new Data();
			for (int j = 0; j < Data.N; j++) {
				data.arr.add(j);
                checksum += data.arr.get(j);
			}
		}
		long end = System.currentTimeMillis();
        System.out.println(checksum);
		System.out.format("time (ms): %d\n", end - start);
	}

}

class Data {
	static final int N = 1024;
	List<Integer> arr = new ArrayList<>();
}
