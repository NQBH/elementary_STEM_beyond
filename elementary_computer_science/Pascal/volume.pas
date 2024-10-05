program volume;
var a, b, c, volume_cube, volume_rectangular_parallelepiped: real;
begin
	// Volume of cube
	write('Side a = ');
	readln(a);
	volume_cube := a*a*a;
	writeln('Volume of cube = ', volume_cube);
	// Volume of rectangular parallelepiped
	write('Side a = ');
	readln(a);
	write('Side b = ');
	readln(b);
	write('Side c = ');
	readln(c);
	volume_rectangular_parallelepiped := a*b*c;
	writeln('Volume of  = rectangular parallelepiped', volume_rectangular_parallelepiped);
end.