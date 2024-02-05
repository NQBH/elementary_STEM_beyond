program combinatoric;
const MAX = 20;
type vector = array[0..MAX] of longint;
var x: vector;
	d: array[1..MAX] of longint; // to force xi != xj for all i != j
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

procedure repeat_arrangement(i: longint);
var j: longint;
begin
	for j := 1 to n do
	begin
		x[i] := j;
		if i = k then display(x)
		else repeat_arrangement(i + 1);
	end;
end;

procedure arrangement(i: longint);
var j: longint;
begin
	for j := 1 to n do
		if d[j] = 0 then
		begin
			x[i] := j;
			d[j] := 1;
			if i = k then display(x)
			else arrangement(i + 1);
			d[j] := 0;
		end;
end;

begin
	read(n, k);
	x[0] := 0;
	combination(1);
	writeln;
	repeat_arrangement(1);
	writeln;
	fillchar(d, sizeof(d), 0);
	arrangement(1);
end.