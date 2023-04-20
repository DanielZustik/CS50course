CREATE TABLE students (
    id INTEGER,
    student_name TEXT,
    PRIMARY KEY(id)
);
CREATE TABLE houses (
    id INTEGER,
    house_name TEXT,
    student_id INTEGER,
    PRIMARY KEY(id),
    FOREIGN KEY(student_id) REFERENCES students(id)
);
CREATE TABLE heads (
    id INTEGER,
    head_name TEXT,
    house_id INTEGER,
    PRIMARY KEY(id),
    FOREIGN KEY(house_id) REFERENCES houses(id)
);
INSERT INTO students (student_name) 