#include <iostream>
using namespace std;

int main() {
	int t, T, Q, L;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> T >> Q >> L;
		int td1 = T, td2 = Q, tm = L;
		int scr_td1 = 0, scr_td2 = 0;		  
			while (tm > 1)						  									  
				if (td1 % tm == 0)				  
				{								  
					td1 -= 1;					  
					scr_td1 += 1;				  
				}								  
				else if (td2 % tm == 0)			  
				{								  
					td2 -= 1;					  
					scr_td2 += 1;				  
				}								  
				else 							  
					tm -= 1;					  			
			cout << scr_td1 << ' ' << scr_td2 << '\n'; 
	}
	return 0;
}
