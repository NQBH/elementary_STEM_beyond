program area;
var r, a, b, area_circle, area_square, area_rectangle: real;
begin
	// Area of circle
	write('Radius R = ');
	readln(R);
	// pi := 4*arctan(1)
	area_circle := pi*r*r;
	writeln('Area of circle = ', area_circle);
	// Area of square
	write('Side a = ');
	readln(a);
	area_square := a*a;
	writeln('Area of square = ', area_square);
	// Area of rectangle
	write('Side a = ');
	readln(a);
	write('Side b = ');
	readln(b);
	area_rectangle := a*b;
	writeln('Area of rectangle = ', area_rectangle);
end.