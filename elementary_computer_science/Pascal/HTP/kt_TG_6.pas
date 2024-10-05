uses crt;
var A:array[1..100] of byte;
    i,t,n:integer;
function kt_tam_giac(x:integer):byte;
begin
        x:=(x*8)+1;
        if sqr(trunc(sqrt(x)))<>x then kt_tam_giac:=0
        else kt_tam_giac:= x mod 2;
end;
begin
        clrscr;
        readln(t);
        for i:=1 to t do
        begin
                readln(n);
                A[i]:=kt_tam_giac(n);
        end;
        for i:=1 to t do writeln(A[i]);
        readln;
end.