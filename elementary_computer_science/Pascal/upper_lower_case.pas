program uprcase;
var ch: char;
begin
	readln(ch);
	// Uppercase
		// 1st solution
	writeln(upcase(ch));
		// 2nd solution
	if (ch >= 'a') and (ch <= 'z') then ch := chr(ord(ch) - 32);
	writeln(ch);
	// Lowercase
	if (ch >= 'A') and (ch <= 'Z') then ch := chr(ord(ch) + 32);
	writeln(ch);
end.