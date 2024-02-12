program power;
var a, n, p: longint;

procedure power(a, n: longint; var p: longint); // O(n)
var i: longint;
begin
	p := 1;
	for i := 1 to n do p := p * a;
end;

procedure power1(a, n: longint; var p: longint); // O(log n)
var tmp: longint;
begin
	if n = 1 then p := a
	else
	begin
		power1(a, n div 2, tmp);
		if n mod 2 = 1 then p := tmp * tmp * a
		else p := tmp * tmp;
	end;
end;

function power(a, n: longint): longint; // O(log n)
var tmp: longint;
begin
	if n = 1 then exit(a)
	else
	begin
		tmp := power(a, n div 2);
		if n mod 2 = 1 then exit(tmp * tmp * a)
		else exit(tmp * tmp);
	end;
end;

begin
	readln(a, n);
	power(a, n, p);
	writeln(p);
	power1(a, n, p);
	writeln(p);
	writeln(power(a, n));
end.