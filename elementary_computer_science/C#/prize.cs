using System;
using System.IO;
namespace Creative1 {
	class prize {
		static void Main() {
			Console.WriteLine(prize(7, 4));
			Console.WriteLine("\n Fini");
			Console.ReadLine();
		}

		static long prize(int m, int n) {
			long[] c = new long[m + 1];
			Array.Clear(c, 0, c.Length);
			c[0] = 1;
			for (int j = 1; j <= n; ++j)
				for (int i = 1; i <= n; ++i)
					c[i] += c[i - j];
			return c[m];
		}
	}
}