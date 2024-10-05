program maximum;
var a, b, c, d, max: real;
begin
	readln(a, b, c, d);
	max := a;
	if max < b then max := b;
	if max < c then max := c;
	if max < d then max := d;
	writeln('max(a, b, c, d) = ', max);
end.