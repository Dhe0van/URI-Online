var
	A, B, MEDIA : double;
begin
	readln(A);
	readln(B);

	MEDIA := ((A*3.5) + (B*7.5)) / (3.5 + 7.5);

	writeln('MEDIA = ', MEDIA:5:5);
end.
