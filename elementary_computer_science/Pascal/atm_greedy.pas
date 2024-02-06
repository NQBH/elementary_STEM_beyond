program atm;
const MAX = 100;
	fi = 'atm.inp';
	fo = 'atm.out';
type vector = array[1..MAX] of longint;
var t, x: vector;
	c, n, s: longint;

procedure input;
var f: text;
	i: longint;
begin
	assign(f, fi);
	reset(f);
	readln(f, n, s);
	for i := 1 to n do read(f, t[i]);
	close(f);
end;

procedure greedy;
var i, j, tmp: longint;
begin
	fillchar(x, sizeof(x), 0);
	// sort in descending value of money
	for i := 1 to n - 1 do
		for j := i + 1 to n do
			if t[i] < t[j] then
			begin
				tmp := t[i];
				t[i] := t[j];
				t[j] := tmp;
			end;
	c := 0;
	for i := 1 to n do
		if s >= t[i] then
		begin
			inc(c); // number of taken money
			x[i] := 1; // took ith money
			s := s - t[i];
		end;
end;

procedure display;
var i: longint;
	f: text;
begin
	assign(f, fo);
	rewrite(f);
	if s = 0 then
	begin
		writeln(f, c);
		for i := 1 to n do
			if x[i] = 1 then write(f, t[i], ' ');
	end
	else write(f, '-1'); // not took enough, s > 0
	close(f);
end;

begin
	input;
	greedy;
	display;
end.