#include <io.h> // To use _setmode() function
#include <fcntl.h> // To use _setmode() function
#include <stdio.h>
#include <wchar.h> // To use Unicode 16-bit character
int main() {
	char ascii_str[] = "This is a lazy fox.";
	wchar_t unicode_str = "Chương trình máy tính";
	int oldMode;
	// Mode to output Unicode, _O_WTEXT_, or _O_U16TEXT
	oldMode = _setmode(_fileno(stdout), _O_WTEXT);
	wprintf(L"Unicode Mode: 2-bye characters:\n");
	wprintf(L"	- Thử in Tiếng Việt.\n");
	wprintf(L"	- %s.\n\n", unicode_str);
	_setmode(_fileno(stdout), oldMode); // Back to ASCII: _O_TEXT
	printf("ASCII Mode: 1-byte characters:\n");
	printf("	- In Tieng Viet khong dau.\n");
	printf("	- %s.\n\n", ascii_str);
	return 1;
}
/* ERROR:
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc str.c -o str
str.c:1:10: fatal error: io.h: No such file or directory
    1 | #include <io.h> // To use _setmode() function
      |          ^~~~~~
compilation terminated. */