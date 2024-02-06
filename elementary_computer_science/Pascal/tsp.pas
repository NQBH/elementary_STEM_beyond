program tsp; // Traveling Salesman Problem
const MAX = 20;
	oo = 1000000;
	fi = 'tsp.inp';
	fo = 'tsp.out';
var c: array[1..MAX, 1..MAX] of longint;
	d, x, best_sol: array[1..MAX] of longint;
	n, sum, best: longint;

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

procedure update;
begin
	if sum + C[x[n], x[1]] < best then
	begin
		best := sum + C[x[n], x[1]];
		best_sol := x;
	end;
end;

procedure branch_bound(i: longint);
var j: longint;
begin
	if sum >= best then exit;
	for j := 1 to n do
		if d[j] = 0 then
		begin
			x[i] := j;
			d[j] := 1;
			sum := sum + C[x[i-1], j];
			if i = n then update
			else branch_bound(i + 1);
			sum := sum - C[x[i-1], j];
			d[j] := 0;
		end;
end;

procedure init;
begin
	fillchar(d, sizeof(d), 0);
	d[1] := 1;
	x[1] := 1;
	best := oo;
end;

procedure output;
var f: text;
	i: longint;
begin
	assign(f, fo);
	rewrite(f);
	writeln(f, best);
	for i := 1 to n do write(f, best_sol[i], '->');
	write(f, best_sol[1]);
	close(f);
end;

begin
	input;
	init;
	branch_bound(2);
	output;
end.