program diff;
const MAX = 100000;
	fi = 'diff.inp';
	fo = 'diff.out';
var a: array[1..MAX] of longint;
	n, max_diff, tmp1, tmp2: longint;

procedure find(var max_diff: longint);
var i, j: longint;
begin
	max_diff := 0;
	for i := 1 to n do
		for j := i to n do
			if a[j] - a[i] > max_diff then max_diff := a[j] - a[i];
end;

procedure find1(l, r: longint; var max_diff, max_value, min_value: longint);
var mid, maxD1, maxD2, maxV1, maxV2, minV1, minV2: longint;
begin
	if l = r then
	begin
		max_diff := 0;
		max_value := a[r];
		min_value := a[r];
	end
	else
	begin
		mid := (l + r) div 2;
		find1(l, mid, maxD1, maxV1, minV1);
		find1(mid + 1, r, maxD2, maxV2, minV2);
		max_diff := maxV2 - minV1;
		if max_diff < maxD1 then max_diff := maxD1;
		if max_diff < maxD2 then max_diff := maxD2;
		if maxV1 > maxV2 then max_value := maxV1 else max_value := maxV2;
		if minV1 < minV2 then min_value := maxV1 else min_value := minV2;
	end;
end;

procedure input;
var f: text;
	i: longint;
begin
	assign(f, fi);
	reset(f);
	readln(f, n);
	for i := 1 to n do read(f, a[i]);
	close(f);
end;

begin
	input;
	find1(1, n, max_diff, tmp1, tmp2);
	writeln(max_diff);
end.