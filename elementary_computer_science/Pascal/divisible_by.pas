program divisible_by;
var a, b : integer;
begin
	write('Enter a = ');
	readln(a);
	write('Enter b = ');
	readln(b);
	if a mod b = 0 then writeln(a,' is divisible by ', b, '.') else writeln(a,' is not divisible by ', b, '.');
end.