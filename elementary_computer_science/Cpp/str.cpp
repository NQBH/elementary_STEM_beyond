#include <io.h> // To use _setmode() function
#include <fcntl.h> // To use _setmode() function
#include <iostream>
using namespace std;
int main() {
	string ascii_str = "This is a lazy fox.";
	wstring unicode_str = L"Chương trình máy tính";
	// Mode to output Unicode, _O_WTEXT_, or _O_U16TEXT
	int oldMode = _setmode(_fileno(stdout), _O_WTEXT);
	wcout << L"Unicode Mode: 2-byte characters:\n";
	wcout << L"	- Thử in Tiếng Việt.\n";
	wcout << L"	- " << unicode_str.c_str() << ".\n\n";
	_setmode(_fileno(stdout), oldMode); // Back to ASCII: _O_TEXT
	cout << "ASCII Mode: 1-byte characters:\n";
	cout << "	- In Tieng Viet khong dau.\n";
	cout << "	- " <<ascii_str.c_str() << ".\n\n";
	return 1;
}
/* ERROR
nqbh@nqbh-msi:~/hobby/elementary_computer_science/Cpp$ g++ -O2 -Wall str.cpp -o str
str.cpp:1:10: fatal error: io.h: No such file or directory
    1 | #include <io.h> // To use _setmode() function
      |          ^~~~~~
compilation terminated. */