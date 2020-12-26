var
    code1, number1, code2, number2 : integer;
    price1, price2, total : double;
begin
    readln(code1, number1, price1);
    readln(code2, number2, price2);
    total := (number1*price1) + (number2*price2);
    writeln('VALOR A PAGAR: R$ ', total:2:2);
end.