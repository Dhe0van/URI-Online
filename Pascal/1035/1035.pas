var
	a, b, c, d : integer;
begin
	readln(a, b, c, d);

	if (b > c) and (d > a) and ((c+d) > (a+b)) and (c > 0) and (d > 0) and (a mod 2 = 0) then
		begin
			writeln('Valores aceitos');
		end
	else
		begin
			writeln('Valores nao aceitos');
		end;
end.
