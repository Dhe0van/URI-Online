uses math;
{Uses math unit so that, we can use modulus operator on double or floating data type}
var
	n : double;
	seconds, minutes, hours : double;
	hours_in_seconds, minutes_in_seconds : double;
begin
	readln(n);

	hours_in_seconds := 3600;
	minutes_in_seconds := 60;

	hours := n / hours_in_seconds;
	minutes := n mod hours_in_seconds / minutes_in_seconds;
	seconds := n mod hours_in_seconds mod minutes_in_seconds;

	writeln(trunc(hours), ':', trunc(minutes), ':', trunc(seconds));
end.
