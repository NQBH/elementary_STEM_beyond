program tsp; // Traveling Salesman Problem
const MAX = 100;
	oo = 1000000;
	fi = 'tsp.inp';
	fo = 'tsp.out';
var c: array[1..MAX, 1..MAX] of longint;
	x, d: array[1..MAX] of longint;
	n, sum: longint;

procedure input;
var f: text;
	i, j: longint;
begin
	assign(f, fi);
	reset(f);
	read(f, n);
	for i := 1 to n do
		for j := 1 to n do read(f, C[i, j]);
	close(f);
end;

procedure output;
var f: text;
	i: longint;
begin
	assign(f, fo);
	rewrite(f);
	writeln(f, sum);
	for i := 1 to n do write(f, x[i], '->');
	write(f, x[1]);
	close(f);
end;

procedure greedy;
var i, j, xi, best: longint;
begin
	x[1] := 1;
	d[1] := 1;
	i := 1;
	while i < n do
	begin
		inc(i);
		// select best candidate
		best := oo;
		for j := 1 to n do
			if (d[j] = 0) and (c[x[i-1], j] < best) then
			begin
				best := c[x[i-1], j];
				xi := j;
			end;
		x[i] := xi; // ith component of sol
		d[xi] := 1;
		sum := sum + c[x[i-1], x[i]];
	end;
	sum := sum + c[x[n], x[1]];
end;

begin
	input;
	greedy;
	output;
end.