uses crt;
var A: array[1..500] of byte;
    i, t: integer;
    n: byte;
begin
    readln(t);
    for i := 1 to t do
    begin
        readln(n);
        A[i] := 7 - n;
        writeln(A[i]);
    end;
end.