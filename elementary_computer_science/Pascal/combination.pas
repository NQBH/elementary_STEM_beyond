program combination;
const MAX = 20;
type vector = array[0..MAX] of longint;
var x: vector;
	n, k: longint;

procedure display(x: vector);
var i: longint;
begin
	for i := 1 to k do write(x[i], ' ');
	writeln;
end;

procedure combination(i: longint);
var j: longint;
begin
	for j := x[i-1] + 1 to n - k + i do
	begin
		x[i] := j;
		if i = k then display(x)
		else combination(i + 1);
	end;
end;

procedure arrangement(i: longint);
var j: longint;
begin
	for j := 1 to n do
	begin
		x[i] := j;
		if i = k then display(x)
		else arrangement(i + 1);
	end;
end;

begin
	read(n, k);
	x[0] := 0;
	combination(1);
	writeln;
	arrangement(1)
end.