var
	n : integer;
	days, months, years : integer;
begin
	readln(n);

	years := n div 365;
	months := n mod 365 div 30;
	days := n mod 365 mod 30;

	writeln(years, ' ano(s)'#10, months, ' mes(es)'#10, days, ' dia(s)');
	{#10 or #13#10 is the same as \n in other language}
end.
