program solve_linear_system;
var a, b, c, d, m, n, Dx, Dy, DD: real;
begin
	readln(a, b, c, d, m, n);
	DD := a*d - b*c;
	Dx := m*d - b*n;
	Dy := a*n - c*m;
	if DD = 0 then
		begin
			if (Dx = 0) and (Dy = 0) then
				writeln(#7, 'Indetermined')
			else
				writeln(#7, 'No solution');
		end
	else
		begin
			writeln('x = ', Dx/DD);
			writeln('y = ', Dy/DD);
		end;
end.