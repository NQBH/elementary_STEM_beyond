program queen;
type vector = array[1..8] of longint;
var x: vector;

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

begin
	queen(1);
end.