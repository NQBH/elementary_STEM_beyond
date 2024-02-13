program Ha_Noi_tower;
var n: longint;

procedure move(n: longint; src, dst, tmp: longint); // source, destination
begin
	if n = 1 then writeln('move ', src, ' ', dst)
	else
	begin
		move(n - 1, src, tmp, dst);
		move(1, src, dst, tmp);
		move(n - 1, tmp, dst, src);
	end;
end;

begin
	readln(n);
	move(n, 1, 2, 3);
end.