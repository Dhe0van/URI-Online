var
	pi, sphere : double;
	r : integer;
begin
	readln(r);
	pi := 3.14159;
	
	sphere := (4/3) * pi * (r*r*r);
	writeln('VOLUME = ', sphere:3:3);
end.
