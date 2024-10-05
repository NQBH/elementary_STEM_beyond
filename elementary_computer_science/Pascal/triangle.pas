program triangle;
uses crt, math;
var a, b, c, xa, xb, xc, ya, yb, yc: real;
begin
	// Use 1 of 2 methods: input directly a, b, c or input coordinates of vertices
	// readln(a, b, c);
	readln(xa, ya, xb, yb, xc, yc);
	a := sqrt((xb - xc)*(xb - xc) + (yb - yc)*(yb - yc));
	b := sqrt((xc - xa)*(xc - xa) + (yc - ya)*(yc - ya));
	c := sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));
	if (a + b > c) and (b + c > a) and (c + a > b) and (a > 0) and (b > 0) and (c > 0) then
		begin
			writeln(a, b, c, ' are 3 sides of a triangle');
			if (a*a + b*b = c*c) or (b*b + c*c = a*a) or (c*c + a*a = b*b) then
				writeln(a, b, c, ' are 3 sides of a right triangle')
			else if (a*a + b*b < c*c) or (b*b + c*c < a*a) or (c*c + a*a < b*b) then
				writeln(a, b, c, ' are 3 sides of an obtuse triangle')
			else
				writeln(a, b, c, ' are 3 sides of an acute triangle');
			if (a = b) and (b = c) then
				writeln(a, b, c, ' are 3 sides of an equilateral triangle')
			else if (a = b) or (b = c) or (c = a) then
				writeln(a, b, c, ' are 3 sides of an isosceles triangle');
		end
	else
		writeln(#7, a, b, c, ' are not 3 sides of a triangle'); // #7: ring bell of ASCII
end.