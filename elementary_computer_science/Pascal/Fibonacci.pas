program Fibonacci;
const MAX = 50;
var i, k, n: longint;
	F, S: array[0..MAX] of int64;

function Fibonacci(n: longint): extended;
var i: longint;
	fi1, fi2, fi: extended;
begin
	if n <= 1 then exit(n);
	fi2 := 0;
	fi1 := 1;
	for i := 2 to n do
	begin
		fi := fi1 + fi2;
		fi2 := fi1;
		fi1 := fi;
	end;
	exit(fi);
end;

type big_num = string;

function add(a, b: big_num): big_num;
var sum, carry, i: integer;
	c: big_num;
begin
	carry := 0;
	c := '';
	while length(a) < length(b) do a := '0' + a;
	while length(b) < length(a) do b := '0' + b;
	for i := length(a) downto 1 do
	begin
		sum := ord(a[i]) - 48 + ord(b[i]) - 48 + carry;
		carry := sum div 10;
		c := chr(sum mod 10 + 48) + c;
	end;
	if carry > 0 then c := '1' + c;
	add := c;
end;

function Fibonacci1(n: longint): big_num;
var i: longint;
	fi1, fi2, fi: big_num;
begin
	if n <= 1 then exit(char(n + 48));
	fi2 := '0';
	fi1 := '1';
	for i := 2 to n do
	begin
		fi := add(fi1, fi2);
		fi2 := fi1;
		fi1 := fi;
	end;
	exit(fi);
end;

function Fibonacci2(n: longint): int64; // divide & conquer
begin
	if n <= 1 then Fibonacci2 := n
	else Fibonacci2 := Fibonacci2(n - 1) + Fibonacci2(n - 2);
end;

function Fibonacci3(n: longint): int64; // dynamic programming
begin
	if S[n] = -1 then
	begin
		if n <= 1 then S[n] := n
		else S[n] := Fibonacci3(n - 1) + Fibonacci3(n - 2);
	end;
	Fibonacci3 := S[n];
end;

begin
	readln(n);
	writeln(Fibonacci(n));
	writeln(Fibonacci1(n));
	writeln(Fibonacci2(n));
	for k := 0 to MAX do S[k] := -1;
	writeln(Fibonacci3(n));
	// dynamic programming
	F[0] := 0;
	F[1] := 1;
	for i := 2 to n do F[i] := F[i-1] + F[i-2];
	writeln(F[n]);
end.