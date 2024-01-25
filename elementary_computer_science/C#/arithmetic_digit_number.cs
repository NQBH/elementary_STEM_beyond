using System;
namespace Creative1 {
	class arithmetic_digit_number {
		static void Main(string[] args) {
			Show(Find());
			Console.WriteLine("\n fini");
			Console.ReadLine();
		}

		static int[] Find() {
			int cnt = 0;
			int [] odd_digit = {1, 3, 5, 7, 9};
			int [] s = new int[25];
			int x;
			for (int i = 0; i < 5; ++i) {
				x = 105 * odd_digit[i];
				for (int j = 0; j < 5; ++j)
					s[++cnt] = x + 6 * odd_digit[j];
			}
			return s;
		}

		static void Show(int[] s) {
			foreach (int x in s) Console.Write(x + " ");
		}
	}
}