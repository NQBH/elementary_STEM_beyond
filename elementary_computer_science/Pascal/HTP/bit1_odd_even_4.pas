uses crt;
var A:array[1..500] of string[4];
    i,t,n:integer;
function nhi_phan(x:integer):string;
var t,s:string;
begin
        s:='';
        while x<>0 do
        begin
                str(x mod 2,t);
                s:=t+s;
                x:=x div 2;
        end;
        nhi_phan:=s;
end;
function dem_1(s:string):byte;
var i,d:byte;
begin
        d:=0;
        for i:=1 to length(s) do
                if s[i]='1' then d:=d+1;
        dem_1:=d;
end;
begin
        clrscr;
        readln(t);
        for i:=1 to t do
        begin
                readln(n);
                if dem_1(nhi_phan(n)) mod 2=0 then A[i]:='EVEN'
                else A[i]:='ODD';
        end;
        for i:=1 to t do writeln(A[i]);
        readln;
end.