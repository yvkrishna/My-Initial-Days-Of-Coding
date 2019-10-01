# https://www.hackerrank.com/challenges/weather-observation-station-9/problem

select Distinct city
from station
where city not REGEXP '^a|^e|^i|^o|^u' ;
