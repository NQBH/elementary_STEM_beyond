type big_num = string;

function cmp(a, b: big_num): integer;
begin
	while length(a) < length(b) do a := '0' + a;
	while length(b) < length(a) do b := '0' + b;
	if a = b then exit(0);
	if a > b then exit(1);
	exit(-1);
end;

function add(a, b: big_num): big_num;
var sum, carry, i, x, y: integer;
	c: big_num;
begin
	carry := 0;
	c := '';
	while length(a) < length(b) do a := '0' + a;
	while length(b) < length(a) do b := '0' + b;
	for i := length(a) downto 1 do
	begin
		x := ord(a[i]) - ord('0'); {ord('0') = 48}
		y := ord(b[i]) - ord('0');
		sum := x + y + carry;
		carry := sum div 10;
		c := chr(sum mod 10 + 48) + c;
	end;
	if carry > 0 then c := '1' + c;
	add := c;
end;

function sub(a, b: big_num): big_num;
var c: big_num;
	s, borrow, i: integer;
begin
	borrow := 0;
	c := '';
	while length(a) < length(b) do a := '0' + a;
	while length(b) < length(a) do b := '0' + b;
	for i := length(a) downto 1 do
	begin
		s := ord(a[i]) - ord(b[i]) - borrow;
		if s < 0 then
		begin
			s := s + 10;
			borrow := 1;
		end
		else borrow := 0;
		c := chr(s + 48) + c;
	end;
	while (length(c) > 1) and (c[1] = '0') do delete(c, 1, 1);
	sub := c;
end;

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

function multiply2(a, b: big_num): big_num;
var sum, tmp: big_num;
	m, i, j: integer;
begin
	m := -1;
	sum := '';
	for i := length(a) downto 1 do
	begin
		m := m + 1;
		tmp := multiply1(b, ord(a[i]) - 48); // or: tmp := ''; for j := 1 to ord(a[i]) - 48 do tmp := add(tmp, b);
		for j := 1 to m do tmp := tmp + '0';
		sum := add(tmp, sum);
	end;
	multiply2 := sum;
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

function bigMod1(a: big_num; b: longint): longint;
var i, hold: longint;
begin
	hold := 0;
	for i := 1 to length(a) do
		hold := (ord(a[i]) - 48 + hold * 10) mod b;
	bigMod1 := hold;
end;

function bigDiv2(a, b: big_num): big_num;
var c, hold: big_num;
	kb: array[0..10] of big_num;
	i, k: longint;
begin
	kb[0] := '0';
	for i := 1 to 10 do
		kb[i] := add(kb[i-1], b);
	hold := '';
	c := '';
	for i := 1 to length(a) do
	begin
		hold := hold + a[i];
		k := 1;
		while cmp(hold, kb[k]) <> -1 do inc(k);
		c := c + chr(k - 1 + 48);
		hold := sub(hold, kb[k-1]);
	end;
	while (length(c) > 1) and (c[1] = '0') do delete(c, 1, 1);
	bigDiv2 := c;
end;

function bigMod2(a, b: big_num): big_num;
var hold: big_num;
	kb: array[0..10] of big_num;
	i, k: longint;
begin
	kb[0] := '0';
	for i := 1 to 10 do
		kb[i] := add(kb[i-1], b);
	hold := '';
	for i := 1 to length(a) do
	begin
		hold := hold + a[i];
		k := 1;
		while cmp(hold, kb[k]) <> -1 do inc(k);
		hold := sub(hold, kb[k-1]);
	end;
	bigMod2 := hold;
end;

begin

end.