program queen;
const n = 8;
type vector = array[1..8] of longint;
var x, col: vector;
	main_diag: array[1 - n..n - 1] of longint;
	sub_diag: array[1 + 1..n + n] of longint;

procedure display(x: vector);
var i: longint;
begin
	for i := 1 to 8 do write(x[i], ' ');
	writeln;
end;

procedure queen(k: longint);
var Sk: vector;
	xk, i, nSk: longint;
	ok: boolean;
begin
	nSk := 0; // cardinal of set Sk
	for xk := 1 to 8 do
	begin
		ok := true;
		for i := 1 to k - 1 do
			if not((xk <> x[i]) and (k - xk <> i - x[i]) and (k + xk <> i + x[i])) then
			begin
				ok := false;
				break;
			end;
		if ok then
		begin
			inc(nSk);
			Sk[nSk] := xk;
		end;
	end;
	for i := 1 to nSk do
	begin
		x[k] := Sk[i];
		if k = 8 then display(x)
		else queen(k + 1);
		x[k] := 0;
	end;
end;

procedure queen1(k: longint);
var i: longint;
begin
	for i := 1 to n do
		if (col[i] = 0) and (main_diag[k - i] = 0) and (sub_diag[k + i] = 0) then
		begin
			x[k] := i;
			col[i] := 1;
			main_diag[k - i] := i;
			sub_diag[k + i] := 1;
			if k = n then display(x)
			else queen1(k + 1);
			col[i] := 0;
			main_diag[k - i] := 0;
			sub_diag[k + i] := 0;
		end;
end;

begin
	queen(1);
	writeln;
	fillchar(col, sizeof(col), 0);
	fillchar(main_diag, sizeof(main_diag), 0);
	fillchar(sub_diag, sizeof(sub_diag), 0);
	queen1(1);
end.