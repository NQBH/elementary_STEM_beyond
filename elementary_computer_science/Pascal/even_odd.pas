program even_odd;
var n : integer;
begin
	write('n = ');
	readln(n);
	if n mod 2 = 0 then writeln(n,' is even.') else writeln(n, ' is odd.');
end.