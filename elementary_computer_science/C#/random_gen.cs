using System;
namespace Creative1 {
	class RandomGen {
		static void Main(string[] args) {
			Show(Gen(200));
			Console.WriteLine("\n Fini ");
			Console.ReadLine();
		}

		static int [] Gen(int n) {
			int[] a = new int[n];
			Random r = new Random();
			for (int i = 0; i < n; ++i)
				a[i] = r.Next(n);
			return a;
		}

		static void Show(int[] s) {
			foreach (int x in s) Console.Write(x + " ");
	}
}