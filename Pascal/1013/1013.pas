var
	a, b, c, maior: integer;
begin
	readln(a, b, c);

	if a + b < c then
		maior := c
	else if a + c < b then
		maior := b
	else
		maior := a;

	writeln(maior, ' eh o maior');
end.

