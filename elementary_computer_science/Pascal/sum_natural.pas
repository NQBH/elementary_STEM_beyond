program sum_natural;
var i, n, count: integer;
	num, sum: real;
begin
	readln(n);
	sum := 0;
	count := 0;
	for i := 1 to n do
		begin
			readln(num);
			if (num > 10) and (num < 20) then
				begin
					sum := sum + num;
					count := count + 1;
				end;
		end;
	writeln('Number of number > 10 & < 20 = ', count);
	writeln('Sum of number > 10 & < 20 = ', sum);
end.