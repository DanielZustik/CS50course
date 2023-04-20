CREATE TABLE students (
    id INTEGER,
    student_name TEXT,
    house_id INTEGER,
    PRIMARY KEY(id)
    FOREIGN KEY(house_id) REFERENCES houses(id)
);
CREATE TABLE houses (
    id INTEGER,
    house_name TEXT,
    PRIMARY KEY(id),
);
CREATE TABLE heads (
    id INTEGER,
    head_name TEXT,
    house_id INTEGER,
    PRIMARY KEY(id),
    FOREIGN KEY(house_id) REFERENCES houses(id)
);
INSERT INTO students (student_name) VALUES ('Adelaide Murto'), ('Adrian Pucey'), ('Anthony Goldstein'), ('Blaise Zabini');
INSERT INTO houses (house_name) VALUES ('Slytherin'), ('Ravenclaw'), ('Hufflepuff'), ('Gryffindor');
INSERT INTO heads (head_name) VALUES ('Severus Snape'), ('Filius Flitwick'), ('Pomona Sprout'), ('Minerva McGonagall');