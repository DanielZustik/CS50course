-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * from <tables> -- to see which column tables consists of... or which information they are holding. findind conecting columns betwen tables too
SELECT * from crime_scene_report; -- seeing more info into case, conections
.schema interviews -- to see have can i trace those intervies
SELECT name FROM interviews WHERE name LIKE "%CS50%"; -- hopefully finding cs50 interview
SELECT name, transcript FROM interviews WHERE year = 2021 AND month = 7 AND day = 28;
SELECT id, name, transcript FROM interviews WHERE year = 2021 AND month = 7 AND day = 28;
SELECT * FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10; -- trying recognizing plate
