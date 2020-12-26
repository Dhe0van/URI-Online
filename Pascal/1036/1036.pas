var
	a, b, c : double;
	sqrt_root : double;
	r1, r2 : double;
begin
	readln(a, b, c);
	
	sqrt_root := (sqr(b) - (4*a*c));

	if (a = 0) or (sqrt_root < 0) then
		begin
			writeln('Impossivel calcular');
		end
	else
		begin
			r1 := ((-b + Sqrt(sqrt_root)) / (2*a));
			r2 := ((-b - Sqrt(sqrt_root)) / (2*a));
			
			writeln('R1 = ', r1:5:5);
			writeln('R2 = ', r2:5:5);
		end;
end.
