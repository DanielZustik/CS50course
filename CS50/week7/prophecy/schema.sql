CREATE TABLE houses (
    id INTEGER,
    house_name TEXT,
    PRIMARY KEY(id)
);
CREATE TABLE students (
    id INTEGER,
    student_name TEXT,
    house_id INTEGER,
    PRIMARY KEY(id),
    FOREIGN KEY(house_id) REFERENCES houses(id)
);
CREATE TABLE heads (
    id INTEGER,
    head_name TEXT,
    house_id INTEGER,
    PRIMARY KEY(id),
    FOREIGN KEY(house_id) REFERENCES houses(id)
);
INSERT INTO houses (house_name) VALUES ('Slytherin'), ('Ravenclaw'), ('Hufflepuff'), ('Gryffindor');
INSERT INTO heads (head_name, house_id) VALUES ('Severus Snape', 1), ('Filius Flitwick', 2), ('Pomona Sprout', 3), ('Minerva McGonagall', 4);