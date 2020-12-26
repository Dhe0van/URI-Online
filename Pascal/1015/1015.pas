var
	x1, y1 : double;
	x2, y2 : double;
	distance : double;
begin
	readln(x1, y1);
	readln(x2, y2);

	distance := Sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));

	writeln(distance:4:4);
end.
