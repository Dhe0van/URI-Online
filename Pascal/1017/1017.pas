var
	car_spd : integer;
	spent_time, avg_spd : integer;
	fuel_spent : double;
begin
	readln(spent_time);
	readln(avg_spd);
	
	car_spd := 12;
	fuel_spent := (spent_time * avg_spd) / car_spd;

	writeln(fuel_spent:3:3);
end.
