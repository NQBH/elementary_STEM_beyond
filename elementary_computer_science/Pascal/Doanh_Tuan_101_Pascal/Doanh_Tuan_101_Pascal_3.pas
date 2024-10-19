program ex3;
label 100;
var x, y, f: real;
begin
	write('x = ');
	readln(x);
	write('y = ');
	readln(y);
	if (x - y) < 0 then
	begin
		if y >= 0 then
			f := x * x + y * y
		else
			Goto 100;
	end
	else
		if (x - y) <= 10 then
			f := x * x * x + y * y * y
		else
			100: f := (x - y) * (x - y);
	writeln('f = ', f:10:10);
end.