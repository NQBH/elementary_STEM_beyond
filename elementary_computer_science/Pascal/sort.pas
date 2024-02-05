program sort;
const MAX = 1000;
var a: array[1..MAX] of longint;
	n, k: longint;

procedure bubble_sort;
var i, j: integer;
	tmp: longint;
begin
	for i := 1 to n - 1 do
		for j := n downto i + 1 do
			if a[j-1] > a[j] then
			begin
				tmp := a[j];
				a[j] := a[j-1];
				a[j-1] := tmp;
			end;
end;

procedure bubble_sort1;
var i, j: integer;
	tmp: longint;
begin
	for i := 1 to n - 1 do
		for j := i + 1 to n do
			if a[i] > a[j] then
			begin
				tmp := a[i];
				a[i] := a[j];
				a[j] := tmp;
			end;
end;

procedure find_kth_min_bubble_sort;
var i, j: integer;
	tmp: longint;
begin
	for i := 1 to k do
		for j := n downto i + 1 do
			if a[j-1] > a[j] then
			begin
				tmp := a[j];
				a[j] := a[j-1];
				a[j-1] := tmp;
			end;
end;

procedure quick_sort(l, r: longint);
var i, j: longint;
	x, tmp: longint;
begin
	i := l;
	j := r;
	x := a[(l + r) div 2]; // x := a[random(r - l + 1) + l];
	repeat
		while a[i] < x do inc(i);
		while a[j] > x do dec(j);
		if i <= j then
		begin
			tmp := a[i];
			a[i] := a[j];
			a[j] := tmp;
			inc(i);
			dec(j);
		end;
	until i > j;
	if l < j then quick_sort(l, j);
	if i < r then quick_sort(i, r);
end;

procedure find_kth_min_quick_sort(l, r: longint);
var i, j: longint;
	x, tmp: longint;
begin
	if (l <= k) and (r >= k) then
	begin
		i := l;
		j := r;
		x := a[(l + r) div 2]; // x := a[random(r - l + 1) + l];
		repeat
			while a[i] < x do inc(i);
			while a[j] > x do dec(j);
			if i <= j then
			begin
				tmp := a[i];
				a[i] := a[j];
				a[j] := tmp;
				inc(i);
				dec(j);
			end;
		until i > j;
		if l < j then quick_sort(l, j);
		if i < r then quick_sort(i, r);
	end;
end;

begin
	read(k, n);
end.