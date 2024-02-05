program prime;
var n: longint;

function is_prime(n: longint): boolean;
var k: longint;
begin
	if n = 1 then exit(false);
	for k := 2 to trunc(sqrt(n)) do
		if (n mod k = 0) then exit(false);
	exit(true);
end;

function is_prime2(n: longint): boolean;
var k, sqrt_n: longint;
begin
	if (n = 2) or (n = 3) then exit(true);
	if (n = 1) or (n mod 2 = 0) or (n mod 3 = 0) then exit(false);
	sqrt_n := trunc(sqrt(n));
	k := -1;
	repeat
		inc(k, 6);
		if (n mod k = 0) or (n mod (k + 2) = 0) then break;
	until k > sqrt_n;
	exit(k > sqrt_n);
end;

procedure generate(n: longint);
var m: longint;
begin
	for m := 2 to n do
		if is_prime(m) then writeln(m);
end;

{$M 1100000}
procedure Eratosthene(n: longint);
const MAX = 1000000;
var i, j: longint;
	prime: array[1..MAX] of byte;
begin
	fillchar(prime, sizeof(prime), 0);
	for i := 2 to trunc(sqrt(n)) do
		if prime[i] = 0 then
		begin
			j := i*i;
			while j <= N do
			begin
				prime[j] := 1;
				j := j + i;
			end;
		end;
	for i := 2 to n do
		if prime[i] = 0 then writeln(i);
end;

begin
	read(n);
	writeln(is_prime(n), ' ', is_prime2(n));
end.