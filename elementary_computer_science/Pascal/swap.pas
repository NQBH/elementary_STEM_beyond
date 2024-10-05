program swap;
var a, b, c: real;
begin
	readln(a, b);
	// 1st solution
	c := a;
	a := b;
	b := c;
	writeln(a, b);
	// 2nd solution
	a := a + b;
	b := a - b;
	a := a - b;
	writeln(a, b);
end.