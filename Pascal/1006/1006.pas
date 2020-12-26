var
	A, B, C, MEDIA : double;
begin
	readln(A);
	readln(B);
	readln(C);

	MEDIA := ((A*2) + (B*3) + (C*5)) / (2 + 3 + 5);

	writeln('MEDIA = ', MEDIA:1:1);
end.
