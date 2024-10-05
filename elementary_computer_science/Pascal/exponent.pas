program exponent;
var a, x, y, z, t: real;
begin
	readln(x, y);
	if x >= 0 then
		begin
			z := exp(y*ln(x));
			writeln(z);
		end
	else
		writeln(#7, 'Cannot compute since x is negative!');
	readln(a);
	writeln(exp(a + sin(2*x) - x));
	t := sin(x);
	writeln(exp(a + t*t - x));
end.