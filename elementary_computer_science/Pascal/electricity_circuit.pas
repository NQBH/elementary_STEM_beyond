program electricity_circuit;
var K1, K2, bulb: boolean;
	ch: char;
begin
	writeln('Trang thai 2 cong tac:');
	writeln;
	write('Cong tac 1: Dong/Ngat (D/N) ');
	readln(ch);
	if upcase(ch) = 'D' then
		K1 := true
	else
		K1 := false;
	writeln;
	write('Cong tac 2: Dong/Ngat (D/N) ');
	readln(ch);
	if upcase(ch) = 'D' then
		K2 := true
	else
		K2 := false;

	writeln('2 cong tac mac noi tiep se cho: ');
	bulb := K1 and K2;
	if bulb then
		writeln('Den sang.')
	else
		writeln('Den khong sang.');
	writeln;

	writeln('2 cong tac mac song song se cho: ');
	bulb := K1 or K2;
	if bulb then
		writeln('Den sang.')
	else
		writeln('Den khong sang.');
end.