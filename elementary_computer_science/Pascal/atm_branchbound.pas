program atm;
const MAX = 20;
	fi = 'atm.inp';
	fo = 'atm.out';
type vector = array[1..MAX] of longint;
var t, tmax, x, xbest: vector;
	c, cbest, n, s, sum: longint;

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

procedure init;
var i: longint;
begin
	tmax[n] := t[n];
	for i := n - 1 downto 1 do
	begin
		tmax[i] := tmax[i + 1];
		if tmax[i] < t[i] then tmax[i] := t[i];
	end;
	sum := 0;
	c := 0;
	cbest := n + 1;
end;

procedure update;
begin
	if (sum = s) and (c < cbest) then
	begin
		xbest := x;
		cbest := c;
	end;
end;

procedure display;
var i: longint;
	f: text;
begin
	assign(f, fo);
	rewrite(f);
	if cbest < n + 1 then
	begin
		writeln(f, cbest);
		for i := 1 to n do
			if xbest[i] = 1 then write(f, t[i], ' ');
	end
	else write(f, '-1');
	close(f);
end;

procedure branch_bound(i: longint);
var j: longint;
begin
	if c + (s - sum) / tmax[i] >= cbest then exit;
	for j := 0 to 1 do
	begin
		x[i] := j;
		sum := sum + x[i] * t[i];
		c := c + j;
		if i = n then update
		else if sum <= s then branch_bound(i + 1);
		sum := sum - x[i] * t[i];
		c := c - j;
	end;
end;

begin
	input;
	init;
	branch_bound(1);
	display;
end.

{
Runtime error 208 at $00000000004014A9
  $00000000004014A9
  $000000000040155C
  $000000000040155C
  $000000000040155C
  $000000000040155C
  $000000000040155C
  $000000000040155C
  $000000000040155C
  $000000000040155C
  $000000000040155C
}