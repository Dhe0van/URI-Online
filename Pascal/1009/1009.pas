var
	salary, sale_total, total : double;
	name : string;
begin
	readln(name);
	readln(salary);
	readln(sale_total);

	total := (0.15 * sale_total) + salary;

	writeln('TOTAL = R$ ', total:2:2);
end.
