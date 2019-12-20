SELECT Distinct co.continent,floor(avg(c.population))
FROM city c
JOIN country co
WHERE c.countrycode=co.code 
group by co.continent;
