var
	n : integer;
	decomposed, modulus : integer;
begin
	readln(n);

	writeln(n);

	decomposed := n div 100;
	modulus := n mod 100;
	writeln(decomposed, ' nota(s) de R$ 100,00');

	decomposed := modulus div 50;
	modulus := modulus mod 50;
	writeln(decomposed, ' nota(s) de R$ 50,00');

	decomposed := modulus div 20;
	modulus := modulus mod 20;
	writeln(decomposed, ' nota(s) de R$ 20,00');

	decomposed := modulus div 10;
	modulus := modulus mod 10;
	writeln(decomposed, ' nota(s) de R$ 10,00');

	decomposed := modulus div 5;
	modulus := modulus mod 5;
	writeln(decomposed, ' nota(s) de R$ 5,00');

	decomposed := modulus div 2;
	modulus := modulus mod 2;
	writeln(decomposed, ' nota(s) de R$ 2,00');

	decomposed := modulus div 1;
	modulus := modulus mod 1;
	writeln(decomposed, ' nota(s) de R$ 1,00');
end.
