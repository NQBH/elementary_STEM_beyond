const MAX = 1000000;
	fi = 'equal_char.inp';
	fo = 'equal_char.out';
var s: ansistring;
	c: array[-MAX..MAX] of longint;
	f: text;
	i, sum: longint;
	cnt: int64;
begin
	assign(f, fi);
	reset(f);
	read(f, s);
	close(f);
	fillchar(c, sizeof(c), 0);
	c[0] := 1;
	sum := 0;
	cnt := 0;
	for i := 1 to length(s) do
	begin
		if s[i] = 'A' then sum := sum - 1
		else sum := sum + 1;
		cnt := cnt + c[sum];
		inc(c[sum]);
	end;
	assign(f, fo);
	rewrite(f);
	write(f, cnt);
	close(f);
end.