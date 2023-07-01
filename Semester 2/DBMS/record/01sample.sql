/*
CREATE TABLE student1 (
    roll_number INT PRIMARY KEY,
    name TEXT,
    batch TEXT CHECK (batch IN ('commerce', 'science', 'humanities')),
    total_mark INT
);
*/

/*INSERT OR IGNORE INTO student (roll_number, name, batch, total_mark) VALUES (1, 'John Doe', 'commerce', 450);
INSERT OR IGNORE INTO student (roll_number, name, batch, total_mark) VALUES (2, 'Jane Smith', 'science', 550);
INSERT OR IGNORE INTO student (roll_number, name, batch, total_mark) VALUES (3, 'Michael Johnson', 'humanities', 300);
INSERT OR IGNORE INTO student (roll_number, name, batch, total_mark) VALUES (4, 'Emily Brown', 'commerce', 400);
INSERT OR IGNORE INTO student (roll_number, name, batch, total_mark) VALUES (5, 'David Wilson', 'science', 650);
INSERT OR IGNORE INTO student (roll_number, name, batch, total_mark) VALUES (6, 'Sarah Davis', 'commerce', 350);
*/

PRAGMA table_info(student);




