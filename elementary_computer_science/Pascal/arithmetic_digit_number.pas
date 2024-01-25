program arithmetic_digit_number;
uses crt;
const odd_digit: array [1..5] of integer = (1, 3, 5, 7, 9);
var s: array [1..25] of integer;
	n: integer;

function find: integer;
var a, c, cnt, x: integer;
begin
	cnt := 0;
	for a := 1 to 5 do
	begin
		x := 105 * odd_digit[a];
		for c := 1 to 5 do
		begin
			inc(cnt);
			s[cnt] := x + 6 * odd_digit[c];
		end;
	end;
	find := cnt;
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