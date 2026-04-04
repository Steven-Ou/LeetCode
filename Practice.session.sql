CREATE TABLE IF NOT EXISTS Patients (PatientID INTEGER PRIMARY KEY, Name TEXT);
CREATE TABLE IF NOT EXISTS Appointments (
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
CREATE TABLE IF NOT EXISTS Doctors (
    DocID INTEGER PRIMARY KEY,
    Name TEXT,
    ApptID INTEGER PRIMARY KEY,
    PatientID INTEGER,
    ApptDate DATE
)
INSERT INTO Doctors (Name)
VALUES ('Cindy'),
    ('Leo'),
    ('Charlene'),
    ('Tiffany');

