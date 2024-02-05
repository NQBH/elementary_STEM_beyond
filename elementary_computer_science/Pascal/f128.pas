const max_value = 128 - 1;
var fi, fi1, fi2: longint;
	i, v, n, k, cv, p: longint;
	c: array[0..max_value] of longint;
begin
	read(n, k);
	fi1 := 1;
	fi2 := 1;
	fillchar(c, sizeof(c), 0);
	c[fi1] := c[fi1] + 1;
	c[fi2] := c[fi2] + 1;
	for i := 3 to n do
	begin
		fi := (fi1 + fi2) and max_value;
		{write(fi:4);}
		c[fi] := c[fi] + 1;
		fi2 := fi1;
		fi1 := fi;
	end;
	cv := 0;
	for v := 0 to max_value do
	begin
		cv := cv + c[v];
		if cv >= k then
		begin
			p := v;
			break;
		end;
	end;
	writeln(p);
end.