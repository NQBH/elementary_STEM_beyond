program ex2;
var a, b, c: real;
begin
	write('a = ');
	readln(a);
	write('b = ');
	readln(b);
	write('c = ');
	readln(c);
	if a > b then
		if a > c then
			writeln('max(a,b,c) = a = ', a:8:5)
		else
			writeln('max(a,b,c) = c = ', c:8:5)
	else
		if b > c then
			writeln('max(a,b,c) = b = ', b:8:5)
		else
			writeln('max(a,b,c) = c = ', c:8:5)
end.