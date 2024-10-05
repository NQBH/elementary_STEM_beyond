program dec_to_bin;
var m, n, i: integer;
	digit: byte; // Value 0 & 1 only
begin
	readln(n);
	m := 16384; // 16384 = 2^14
	write(0);
	for i := 1 to 15 do
		begin
			digit := n div m;
			write(digit);
			// Group into 4 digits
			if (i + 1) mod 4 = 0 then write(' ');
			n := n - m*digit;
			m := m div 2; // m := m shr 1
		end;
	writeln;
end.