program geometric_digit_number;
uses crt;
const MN = 30;
	sup: array [1..9] of integer = (3, 2, 1, 1, 1, 1, 1, 1, 1);
var s: array [1..MN] of integer;
	n: integer;

function find: integer;
var a, q, n: integer;
begin
	n := 0;
	for a := 1 to 9 do
		for q := 1 to sup[a] do
		begin
			inc(n);
			s[n] := a * (100 + 10 * q + q * q);
		end;
	find := n;
end;

procedure display(n: integer);
var i: integer;
begin
	for i := 1 to n do write(s[i]:4);
end;

begin
	n := find;
	display(n);
	writeln;
	writeln('Total ', n, ' numbers.');
end.