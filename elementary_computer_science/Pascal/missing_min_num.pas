const lim = 30000;
	fi = 'missing_min_num.inp';
	fo = 'missing_min_num.out';
var c: array[0..lim] of longint;
	i, n, x: longint;
	f: text;
begin
	fillchar(c, sizeof(c), 0);
	assign(f, fi);
	reset(f);
	read(f, n);
	for i := 1 to n do
	begin
		read(f, x);
		if x <= n then inc(c[x]);
	end;
	close(f);
	for i := 0 to n do
		if c[i] = 0 then
		begin
			x := i;
			break;
		end;
	assign(f, fo);
	rewrite(f);
	write(f, x);
	close(f);
end.