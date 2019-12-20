SELECT SUM(c.population)
FROM city c
JOIN country co 
WHERE c.countrycode=co.code AND (co.continent="ASIA");
