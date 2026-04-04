DROP TABLE IF EXISTS Doctors;
DROP TABLE IF EXISTS Appointments;
DROP TABLE IF EXISTS Patients;
CREATE TABLE Patients (PatientID INTEGER PRIMARY KEY, Name TEXT);
CREATE TABLE  Appointments (
    ApptID INTEGER PRIMARY KEY,
    PatientID INTEGER,
    ApptDate DATE
);
INSERT INTO Patients (Name)
VALUES ('Steven'),
    ('Billy'),
    ('Sarah'),
    ('John');
INSERT INTO Appointments (PatientID, ApptDate)
VALUES (1, '2026-04-01'),
    (3, '2026-03-15');
SELECT p.Name
FROM Patients p
    LEFT JOIN Appointments a ON p.PatientID = a.PatientID
WHERE a.ApptID IS NULL;
SELECT p.Name,
    COUNT(a.ApptID) AS TotalAppointments
FROM Patients p
    LEFT JOIN Appointments a ON p.PatientID = a.PatientID
GROUP BY p.Name;
CREATE TABLE Doctors (
    DocID INTEGER PRIMARY KEY,
    Name TEXT
);
INSERT INTO Doctors (Name)
VALUES ('Cindy'),
    ('Leo'),
    ('Charlene'),
    ('Tiffany');
ALTER TABLE Appointments ADD COLUMN DocID INTEGER;
UPDATE Appointments SET DocID = 1 WHERE ApptID = 1;
UPDATE Appointments SET DocID = 2 WHERE ApptID = 2;
SELECT d.name AS "Doctor With No Appts"
FROM Doctors d
    LEFT JOIN Appointment a on d.DocID = a.DocID
WHERE a.ApptID IS NULL;
