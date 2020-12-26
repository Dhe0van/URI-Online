var
	num, hours : integer;
	amount, salary : double;
begin
	readln(num);
	readln(hours);
	readln(amount);

	salary := hours * amount;

	writeln('NUMBER = ', num);
	writeln('SALARY = U$ ', salary:2:2);
end.
