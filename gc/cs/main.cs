using System;
using System.Collections.Generic;

class HelloWorld
{
    static void Main()
    {
        Console.WriteLine("Hello");
        var start = DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
        long checksum = 0;
        for (int i = 0; i < 1_000_0; i++)
        {
            Data data = new Data();
            for (int j = 0; j < Data.N; j++)
            {
                data.arr.Add(j);
                checksum += data.arr[j];
            }
        }
        var end = DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
        Console.WriteLine(checksum);
        Console.WriteLine(String.Format("time (ms): {0}", end - start));
    }
}

class Data
{
    public static int N = 1024;
    public List<int> arr = new List<int>();
}