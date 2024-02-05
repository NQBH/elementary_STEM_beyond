program Fibonacci;
var n: longint;

function Fibonacci(n: longint): longint;
var fi1, fi2, fi, i: longint;
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

begin
	read(n);
	writeln(Fibonacci(n));
end.