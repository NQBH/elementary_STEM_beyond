program Catalan;
type big_num = string;
var n, k: longint;
	s: big_num;

function multiply1(a: big_num; b: longint): big_num;
var i: integer;
	carry, s: longint;
	c, tmp: big_num;
begin
	c := '';
	carry := 0;
	for i := length(a) downto 1 do
	begin
		s := (ord(a[i]) - 48) * b + carry;
		carry := s div 10;
		c := chr(s mod 10 + 48) + c;
	end;
	if carry > 0 then str(carry, tmp) else tmp := '';
	multiply1 := tmp + c;
end;

function bigDiv1(a: big_num; b: longint): big_num;
var s, i, hold: longint;
	c: big_num;
begin
	hold := 0;
	s := 0;
	c := '';
	for i := 1 to length(a) do
	begin
		hold := hold * 10 + ord(a[i]) - 48;
		s := hold div b;
		hold := hold mod b;
		c := c + chr(s + 48);
	end;
	while (length(c) > 1) and (c[1] = '0') do delete(c, 1, 1);
	bigDiv1 := c;
end;

begin
	read(n);
	s := '1';
	for k := n + 2 to 2*n do s := multiply1(s, k); // compute numerator
	for k := 1 to n do s := bigDiv1(s, k); // divby denominator
	writeln(s);
end.