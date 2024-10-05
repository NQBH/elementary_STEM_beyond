uses crt;
var A:array[1..100] of integer;
    i,t,n:integer;
begin
        clrscr;
        readln(t);
        for i:=1 to t do
        begin
                readln(n);
                A[i]:=n*(n-1);
        end;
        for i:=1 to t do writeln(A[i]);
        readln;
end.