-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * from <tables> -- to see which column tables consists of... or which information they are holding. findind conecting columns betwen tables too
SELECT * from crime_scene_report; -- seeing more info into case, conections
.schema interviews -- to see have can i trace those intervies
SELECT name FROM interviews WHERE name LIKE "%CS50%"; -- hopefully finding cs50 interview
SELECT name, transcript FROM interviews WHERE year = 2021 AND month = 7 AND day = 28;
SELECT id, name, transcript FROM interviews WHERE year = 2021 AND month = 7 AND day = 28;
SELECT * FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10; -- trying recognizing plate
SELECT * FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10 AND minute >= 15 AND minute <= 25;
SELECT * FROM bakery_security_logs WHERE license_plate = "322W7JE"; -- seeign if car roolled in same dame little sooner than theft happend
SELECT * FROM bakery_security_logs WHERE license_plate = "0NTHK55"
SELECT * FROM people WHERE license_plate = "0NTHK55"; -- Kelsey
SELECT * FROM people WHERE license_plate = "322W7JE"; -- Diana
SELECT * FROM atm_transactions WHERE atm_location = "Leggett Street";
SELECT * FROM atm_transactions WHERE atm_location = "Leggett Street" AND transaction_type = "withdraw" AND day = 28 AND month = 7;
SELECT * FROM atm_transactions
JOIN bank_accounts ON bank_accounts.account_number = atm_transactions.account_number
JOIN people ON bank_accounts.person_id = people.id
WHERE atm_transactions.atm_location = "Leggett Street" AND transaction_type = "withdraw" AND day = 28 AND month = 7;-- diana
SELECT * FROM phone_calls WHERE caller LIKE "(770) 555-1861" AND month = 7 AND day = 28;
SELECT * FROM people WHERE phone_number LIKE "(725) 555-3243";-- philip a
SELECT * from passengers
JOIN flights ON passengers.flight_id = flights.id
JOIN airports ON airports.id = flights.origin_airport_id
WHERE flights.year = 2021 AND flights.day = 29 AND flights.month = 7
AND passengers.passport_number = (SELECT passport_number FROM people WHERE name = "Diana");
SELECT * from passengers
JOIN flights ON passengers.flight_id = flights.id
JOIN airports ON airports.id = flights.origin_airport_id
WHERE flights.year = 2021 AND flights.day = 29 AND flights.month = 7
AND passengers.passport_number = (SELECT passport_number FROM people WHERE name = "Philip");
SELECT * FROM airports WHERE id = 6;

SELECT name, phone_number, passport_number FROM people
JOIN bank_accounts ON bank_accounts.person_id = people.id
JOIN atm_transactions ON atm_transactions.account_number = bank_accounts.account_number
WHERE atm_transactions.year = 2021 AND atm_transactions.month = 7 AND atm_transactions.day = 28
AND atm_transactions.atm_location = "Leggett Street" and atm_transactions.transaction_type = "withdraw"
AND people.license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10 AND minute >= 15 AND minute <= 25)
AND people.passport_number IN (SELECT passport_number FROM passengers JOIN flights ON flights.id = passengers.flight_id
WHERE flights.year = 2021 AND flights.month = 7 AND flights.day = 29)
AND people.phone_number IN (SELECT )
# 4 suspects: Diana, Iman, Luca, Bruce
# 3 also flying next day Bruce, Diana a Luca