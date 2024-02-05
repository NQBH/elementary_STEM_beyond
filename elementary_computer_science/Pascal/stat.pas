program stat;
const MAX = 1000;
var a: array[1..MAX] of longint;
	n: longint;

function count_value(n: longint): longint; // compute number of different values in a sorted array
var i, cnt: longint;
begin
	cnt := 1;
	for i := 2 to n do
		if a[i-1] <> a[i] then inc(cnt);
	count_value := cnt;
end;

function highest_frequency(n: longint): longint; // compute highest frequency in a sorted array
var i, cnt, ans: longint;
begin
	ans := 1;
	cnt := 1;
	for i := 2 to n do
	begin
		if a[i] <> a[i-1] then cnt := 1
		else inc(cnt);
		if cnt > ans then ans := cnt;
	end;
	highest_frequency := ans;
end;

begin
	read(n);
	writeln(count_value(n));
	writeln(highest_frequency(n));
end.