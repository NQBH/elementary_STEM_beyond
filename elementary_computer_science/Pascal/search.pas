program search;
const MAX = 1000;
var a: array[1..MAX] of longint;
	n: longint;

function binary_search(x: longint): longint;
var l, r, mid: longint;
begin
	l := 1;
	r := n;
	while l <= r do
	begin
		mid := (l + r) div 2;
		if a[mid] = x then exit(mid);
		if a[mid] < x then l := mid + 1
		else r := mid - 1;
	end;
	exit(0);
end;

begin
	read(n);
end.