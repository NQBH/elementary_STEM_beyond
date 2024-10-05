program write_digit;
var n: integer;
begin
	// 1st solution: direct
	readln(n);
	writeln(n);
	// 2nd solution
	if n < 0 then write('-');
	n := abs(n);
	write(n div 10000);
	n := n mod 10000;
	write(n div 1000);
	n := n mod 1000;
	write(n div 100);
	n := n mod 100;
	write(n div 10);
	n := n mod 10;
	write(n);
	writeln;
end.