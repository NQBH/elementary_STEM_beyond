program gcd_lcm;
var a, b: longint;

function gcd(a, b: longint): longint;
var tmp: longint;
begin
	while b > 0 do
	begin
		a := a mod b;
		tmp := a;
		a := b;
		b := tmp;
	end;
	exit(a);
end;

function lcm(a, b: longint): longint;
var tmp: longint;
begin
	exit(trunc(a * b / gcd(a, b)));
end;

begin
	read(a, b);
	writeln(gcd(a, b), ' ', lcm(a, b));
end.