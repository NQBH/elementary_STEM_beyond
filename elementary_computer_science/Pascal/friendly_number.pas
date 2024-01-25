program friendly_number;
{$B-}
uses crt;
const MN = 90;
var n: integer;
	s: array[1..MN] of integer;

function gcd(a, b: integer): integer;
var r: integer;
begin
	while b > 0 do
		begin
			r := a mod b;
			a := b;
			b := r;
		end;
	gcd := a;
end;

function inverse_number(x: integer): integer;
var y: integer;
begin
	y := 0;
	repeat
		y := 10*y + (x mod 10);
		x := x div 10;
	until (x = 0);
	inverse_number := y;
end;

function find: integer;
var x, cnt: integer;
begin
	cnt := 0;
	for x := 10 to 99 do
		if gcd(x, inverse_number(x)) = 1 then
		begin
			cnt := cnt + 1;
			s[cnt] := x;
		end;
	find := cnt;
end;

function find2: integer;
var a, b, cnt: integer;
begin
	cnt := 1;
	s[cnt] := 10;
	for a := 1 to 9 do
		for b := 1 to a - 1 do
			if gcd(a * 10 + b, b * 10 + a) = 1 then
				begin
					cnt := cnt + 1;
					s[cnt] := a * 10 + b;
					cnt := cnt + 1;
					s[cnt] := b * 10 + a;
				end;
	find2 := cnt;
end;

procedure display(n: integer);
var i: integer;
begin
	writeln;
	for i := 1 to n do write(s[i]:4);
	writeln;
end;

begin
	n := find;
	display(n);
	n := find2;
	display(n);
	writeln;
	writeln('Total ', n, ' numbers');
end.