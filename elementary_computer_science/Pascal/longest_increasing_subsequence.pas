program longest_increasing_subsequences;
const MAX = 1000;
var a, L, T: array[0..MAX + 1] of longint;
	n: longint;

procedure input;
var i: longint;
begin
	readln(n);
	for i := 1 to n do read(a[i]);
end;

procedure optimize;
var i, j, jmax: longint;
begin
	a[0] := -32768;
	a[n + 1] := 32767;
	L[n + 1] := 1;
	for i := n downto 0 do
	begin
		jmax := n + 1;
		for j := i + 1 to n + 1 do
			if (a[j] > a[i]) and (L[j] > L[jmax]) then jmax := j;
		L[i] := L[jmax] + 1;
		T[i] := jmax;
	end;
	writeln('Length of longest increasing subsequence: ', L[0] - 2);
	i := T[0]; // trace sol
	while i <> n + 1 do
	begin
		writeln('a[', i, '] = ', a[i]);
		i := T[i];
	end;
end;

begin
	input;
	optimize;
end.