SELECT name FROM people
JOIN stars on stars.person_id = people.id
JOIN movies ON stars.movie_id = movies.id
WHERE stars.person_id = (SELECT id FROM people WHERE name = "Kevin Bacon");