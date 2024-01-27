program prize;
uses crt;
const
	MN = 70; // upper bound of m, n
	nl = #13#10; // enter
	space = #32; // space
type
	m11 = array[0..MN] of longint;
	m12 = array[0..mn] of m11;
var
	a: m12;
	m, n: integer;
	c: m11;
	time: longint absolute $0000:$046c; // determine running time
	t: longint;

function prize(i, j: integer): longint;
begin
	if j = 0 then prize := 0
	else
		if i = 0 then prize := 1
		else
			if i < j then prize := prize(i, i)
			else
				prize := prize(i, j - 1) + prize(i - j, j);
end;

function prize2(m, n: integer): longint;
var i, j: integer;
begin
	a[0, 0] := 1;
	for i := 1 to m do a[i, 0] := 0;
	for j := 1 to n do
		begin
			for i := 0 to j - 1 do a[i, j] := a[i, i];
			for i := j to m do a[i, j] := a[i, j - 1] + a[i - j, j];
		end;
	prize2 := a[m, n];
end;

function prize3(m, n: integer): longint;
var i, j: integer;
begin
	fillchar(c, sizeof(c), 0);
	c[0] := 1;
	for j := 1 to n do
		for i := j to m do c[i] := c[i] + c[i - j];
	prize3 := c[m];
end;

procedure test;
begin
	randomize;
	repeat
		m := random(mn) + 1; // generate randomly number of prizes
		n := random(mn) + 1; // generate randomly number of students
		writeln(m, space, n);
		t := time;
		writeln('1D array: ', prize3(m, n));
		writeln((time - t) / 18.2):0:0, ' secs');
		t := time;
		writeln('2D array: ', prize2(m, n));
		writeln((time - t) / 18.2):0:0, ' secs');
		t := time;
		writeln('Recursion: ', prize(m, n));
		writeln((time - t) / 18.2):0:0, ' secs');
	until readkey = #27; // repeat until pressing ESC
end;

begin
	test;
end.