using System;
using System.Collections;
namespace Creative1 {
	class geometric_digit_number {
		static void Main(string[] args) {
			Show(Find());
			Console.WriteLine("\n fini");
			Console.ReadLine();
		}

		static ArrayList Find() {
			ArrayList s = new ArrayList();
			int[] odd_digit = {1, 3, 5, 7, 9};
			int[] sup = {0, 3, 2, 1, 1, 1, 1, 1, 1, 1};
			for (int a = 1; a <= 9; ++a) {
				for (int q = 1; q <= sup[a]; ++q)
					s.Add(a * (100 + 10 * q + q * q));
			}
			return s;
		}

		static void Show(int[] s) {
			foreach (int x in s) Console.Write(x + " ");
		}
	}
}