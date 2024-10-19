program ex1;
var x, y, a, b, c: real;
begin
	write('x = ');
	readln(x);
	write('y = ');
	readln(y);
	A := x * x + y * y;
	B := x + y + A;
	C := x * y - A - B * B;
	writeln('A =', A:8:3);
	writeln('B =', B:8:3);
	writeln('C =', C:8:3);
end.