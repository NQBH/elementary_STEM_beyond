program square_root;
var num, sqrt_num: real;

begin
	write('Enter a number num = ');
	readln(num);
	sqrt_num := Sqrt(num);
	writeln('sqrt of ', num,' = ', sqrt_num)
end.