program collection;
uses crt;
var a,b,n: integer;
// Func: check prime
function is_prime(n: longint): boolean;
var k: longint;
begin
	if n = 1 then exit(false);
	for k := 2 to trunc(sqrt(n)) do
		if (n mod k = 0) then exit(false);
	exit(true);
end;
// Func: modified check prime
function is_prime_modified(n: longint): boolean;
var k, sqrt_n: longint;
begin
	if (n = 2) or (n = 3) then exit(true);
	if (n = 1) or (n mod 2 = 0) or (n mod 3 = 0) then exit(false);
	sqrt_n := trunc(sqrt(n));
	k := -1;
	repeat
		inc(k, 6);
		if (n mod k = 0) or (n mod (k + 2) = 0) then break
	until k > sqrt_n;
	exit(k > sqrt_n);
end;
// Func: list all primes in an interval
procedure list_prime(n: longint);
var m: longint;
begin
	for m := 2 to n do
		if is_prime(m) then writeln(m);
end;
// Func: list all primes in an interval by Eratosthene's sieve
procedure Eratosthene(n: longint);
const MAX = 1000000;
var i,j: longint;
	prime: array [1..MAX] of byte;
begin
	fillchar(prime, sizeof(prime), 0);
	for i := 2 to trunc(sqrt(n)) do
		if prime[i] = 0 then
		begin
			j := i*i;
			while j <= n do
			begin
				prime[j] := 1;
				j := j + i;
			end;
		end;
	for i := 2 to n do
		if prime[i] = 0 then writeln(i);
end;
// Func: Compute gcd
function gcd(a,b: longint): longint;
var tmp: longint;
begin
	while b > 0 do
	begin
		a := a mod b;
		tmp := a; a := b; b := tmp;
	end;
	exit(a)
end;
// Func: Compute lcm
function lcm(a,b: longint): longint;
begin
	exit(round(a*b/gcd(a,b)))
end;
// Func: Fibonacci sequence
function Fibonacci(n: longint): longint;
var  i,fi,fi1,fi2: longint;
begin
	if n <= 1 then exit(n);
	fi2 := 0; fi1 := 1;
	for i := 2 to n do
	begin
		fi := fi1 + fi2;
		fi2 := fi1;
		fi1 := fi;
	end;
	exit(fi);
end;

begin
	write('Enter the value of integer n = '); readln(n);
	writeln(is_prime(n),' ', is_prime_modified(n));
	list_prime(n);
	writeln;
	Eratosthene(n);
	writeln;
	write('Enter the value of integer a = '); readln(a);
	write('Enter the value of integer b = '); readln(b);
	writeln('gcd(',a,',',b,') = ',gcd(a,b), ', lcm(',a,',',b,') = ', lcm(a,b));
	writeln('F_',n,' = ',Fibonacci(n))
end.