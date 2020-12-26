uses math;
var
	a, b, c : double;
	pi : double;
	triangulo, circulo, trapezio, quadrado, retangulo : double;
begin
	pi := 3.14159;

	readln(a, b, c);

	triangulo := (a * c) / 2;
	circulo := pi * Power(c, 2);
	trapezio := ((a + b) * c) / 2;
	quadrado := b * b;
	retangulo := a * b;

	writeln('TRIANGULO: ', triangulo:3:3);
	writeln('CIRCULO: ', circulo:3:3);
	writeln('TRAPEZIO: ', trapezio:3:3);
	writeln('QUADRADO: ', quadrado:3:3);
	writeln('RETANGULO: ', retangulo:3:3);
end.

