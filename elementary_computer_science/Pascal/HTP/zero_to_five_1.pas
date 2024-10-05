uses crt;
var A:array[1..100000]of string;
    i,t:integer;
    s:string[13];
function zero_to_five(st:string):string;
var i:byte;
begin
        for i:=1 to length(st) do
            if st[i]='0' then st[i]:='5';
        zero_to_five:=st;
end;
begin
        clrscr;
        readln(t);
        for i:=1 to t do
        begin
            readln(s);
            A[i]:=zero_to_five(s);
        end;
        for i:=1 to t do writeln(A[i]);
        readln;
end.