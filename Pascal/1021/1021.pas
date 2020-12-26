uses math;
var
	n : double;
	modulus, decomposed : double;
begin
	readln(n);

	writeln('NOTAS:');
	decomposed := n / 100.00;
	modulus := n mod 100.00;
	writeln(trunc(decomposed), ' nota(s) de R$ 100.00');

	decomposed := modulus / 50.00;
	modulus := modulus mod 50.00;
	writeln(trunc(decomposed), ' nota(s) de R$ 50.00');

	decomposed := modulus / 20.00;
	modulus := modulus mod 20.00;
	writeln(trunc(decomposed), ' nota(s) de R$ 20.00');

	decomposed := modulus / 10.00;
	modulus := modulus mod 10.00;
	writeln(trunc(decomposed), ' nota(s) de R$ 10.00');

	decomposed := modulus / 5.00;
	modulus := modulus mod 5.00;
	writeln(trunc(decomposed), ' nota(s) de R$ 5.00');

	decomposed := modulus / 2.00;
	modulus := modulus mod 2.00;
	writeln(trunc(decomposed), ' nota(s) de R$ 2.00');


	writeln('MOEDAS:');
	decomposed := modulus / 1.00;
	modulus := modulus mod 1.00;
	writeln(trunc(decomposed), ' nota(s) de R$ 1.00');

	decomposed := modulus / 0.50;
	modulus := modulus mod 0.50;
	writeln(trunc(decomposed), ' nota(s) de R$ 0.50');

	decomposed := modulus / 0.25;
	modulus := modulus mod 0.25;
	writeln(trunc(decomposed), ' nota(s) de R$ 0.25');

	decomposed := modulus / 0.10;
	modulus := modulus mod 0.10;
	writeln(trunc(decomposed), ' nota(s) de R$ 0.10');

	decomposed := modulus / 0.05;
	modulus := modulus mod 0.05;
	writeln(trunc(decomposed), ' nota(s) de R$ 0.05');

	decomposed := modulus / 0.01;
	modulus := modulus mod 0.01;
	writeln(trunc(decomposed), ' nota(s) de R$ 0.01');
end.
