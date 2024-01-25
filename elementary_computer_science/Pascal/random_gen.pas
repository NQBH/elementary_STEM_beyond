program randomGen;
{$B-}
uses crt;
const MN = 500;
var a: array [1..MN] of integer;
	n: integer;

procedure gen(m: integer);
var i: integer;
begin
	randomize;
	n := m;
	for i := 1 to n do a[i] := random(m);
end;

procedure display(n: integer);
var i: integer;
begin
	for i := 1 to n do write(a[i]:4);
end;

begin
	read(n);
	gen(n);
	display(n);
	writeln;
end.