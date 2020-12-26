var
	n : double;
begin
	readln(n);

	if (n >= 0) and (n <= 25) then
		begin
			writeln('Intervalo [0,25]');
		end
	else if (n > 25) and (n <= 50) then
		begin
			writeln('Intervalo (25,50]');
		end
	else if (n > 50) and (n <= 75) then
		begin
			writeln('Intervalo (50,75]');
		end
	else if (n > 75) and (n <= 100) then
		begin
			writeln('Intervalo (75,100]');
		end
	else
		begin
			writeln('Fora de intervalo');
		end;
end.
