program quadratic_eqn;
var a, b, c, delta: real;
begin
	write('a = ');
	readln(a);
	write('b = ');
	readln(b);
	write('c = ');
	readln(c);
	delta := b * b - 4 * a * c;
	if delta = 0 then
		writeln('1 real root: x = ', -b / (2 * a):10:10)
	else
		if delta > 0 then
			writeln('2 real roots: x1 = ', (-b - sqrt(delta)) / (2 * a):10:10, ', x2 = ', (-b + sqrt(delta)) / (2 * a):10:10)
		else
			writeln('2 complex roots: x1 = ', -b / (2 * a):10:10, ' - ', abs(sqrt(-delta)) / (2 * a):10:10,'i, ', 'x2 = ', -b / (2 * a):10:10, ' + ', abs(sqrt(-delta)) / (2 * a):10:10, 'i.');
end.