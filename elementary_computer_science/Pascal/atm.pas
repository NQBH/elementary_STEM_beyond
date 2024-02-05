program atm;
const MAX = 20;
	fi = 'atm.inp';
	fo = 'atm.out';
type vector = array[1..MAX] of longint;
var t, x, xs: vector;
	n, s, sum: longint;
	ok: boolean;

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

procedure check(x: vector);
begin
	if sum = s then
	begin
		xs := x;
		ok := true;
	end;
end;

procedure display;
var i: longint;
	f: text;
begin
	assign(f, fo);
	rewrite(f);
	if ok then
	begin
		for i := 1 to n do
			if xs[i] = 1 then write(f, t[i], ' ');
	end
	else write(f, '-1');
	close(f);
end;

procedure backtrack(i: longint);
var j: longint;
begin
	for j := 0 to 1 do
	begin
		x[i] := j;
		sum := sum + x[i] * t[i];
		if (i = n) then check(x)
		else if sum <= s then backtrack(i + 1);
		if ok then exit;
		sum := sum - x[i] * t[i];
	end;
end;

begin
	input;
	ok := false;
	sum := 0;
	backtrack(1);
	display;
end.