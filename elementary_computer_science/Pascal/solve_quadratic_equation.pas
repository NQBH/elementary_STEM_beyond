program solve_quadratic_equation;
uses crt;
var  a, b, c, D: real;
	x1, x2: real;
begin
	clrscr;
	write('a, b, c: ');
	readln(a,b,c);
	D := b*b - 4*a*c;
	x1 := (-b - sqrt(D))/(2*a);
	x2 := -b/a - x1;
	write('x1 = ', x1:6:2, ' x2 = ',x2:6:2);
	readln
end.