using System;
namespace Creative1 {
	class friendly_number {
		static int mn = 90;
		static int [] s = new int[mn];
		static void Main(string[] args)
		{
			Run();
			Console.ReadLine();
		}

		static void Run() {
			int n = Find();
			for (int i = 0; i < n; ++i)
				Console.Write(s[i] + " ");
				Console.WriteLine("\n Total: " + n + " numbers");
		}

		static int Find() {
			int cnt = 0;
			for (int x = 10; x < 100; ++x)
				if (gcd(x, inverse_number(x)) == 1) s[++cnt] = x;
			return cnt;
		}

		static int Find2() {
			int a, b, cnt = 0;
			s[++cnt] = 10;
			for (a = 1; a <= 9; ++a)
				for (b = 1; b < a; ++b)
					if (gcd(10 * a + b, 10 * b + a) == 1) {
						s[++cnt] = 10 * a + b;
						s[++cnt] = 10 * b + a;
					}
			return cnt;
		}

		static int gcd(int a, int b) {
			int r;
			while (b != 0) {
				r = a % b;
				a = b;
				b = r;
			}
			return a;
		}

		static int inverse_number(int x) {
			int y = 0;
			do {
				y = y * 10 + (x % 10);
				x = 10;
			} while (x != 0);
			return y;
		}
	} // friendly number
} // Creative1