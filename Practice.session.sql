DROP TABLE IF EXISTS Doctors;
DROP TABLE IF EXISTS Appointments;
DROP TABLE IF EXISTS Patients;
CREATE TABLE Patients (PatientID INTEGER PRIMARY KEY, Name TEXT);
CREATE TABLE Doctors (
    DocID INTEGER PRIMARY KEY,
    Name TEXT
);
CREATE TABLE Appointments (
    ApptID INTEGER PRIMARY KEY,
    PatientID INTEGER,
    DocID INTEGER,
    ApptDate DATE,
    FOREIGN KEY (PatientID) REFERENCES Patients(PatientID),
    FOREIGN KEY (DocID) REFERENCES Doctors(DocID)
);
INSERT INTO Patients (Name)
VALUES ('Steven'),
    ('Billy'),
    ('Sarah'),
    ('John');
INSERT INTO Doctors (Name)
VALUES ('Cindy'),
    ('Leo'),
    ('Charlene'),
    ('Tiffany');
INSERT INTO Appointments (PatientID, DocID, ApptDate)
VALUES (1, 1, '2026-04-10');
INSERT INTO Appointments (PatientID, DocID, ApptDate)
VALUES (3, 2, '2026-04-12');
SELECT p.Name
FROM Patients p
    LEFT JOIN Appointments a ON p.PatientID = a.PatientID
WHERE a.ApptID IS NULL;
/* Checks to see who has no appt*/
SELECT p.Name,
    COUNT(a.ApptID) AS TotalAppointments
FROM Patients p
    LEFT JOIN Appointments a ON p.PatientID = a.PatientID
GROUP BY p.Name;
SELECT d.name AS "Doctor With No Appts"
FROM Doctors d
    LEFT JOIN Appointments a on d.DocID = a.DocID
WHERE a.ApptID IS NULL;

/*Simplifying all top*/
SELECT 
    p.Name AS "Patient Name", 
    d.Name AS "Doctor Name", 
    a.ApptDate AS "Appointment Date"
FROM Appointments a
JOIN Patients p ON a.PatientID = p.PatientID
JOIN Doctors d ON a.DocID = d.DocID;