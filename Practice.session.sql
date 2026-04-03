CREATE TABLE Patient(
    PatientID INTEGER PRIMARY KEY,
    Name TEXT
);
CREATE TABLE Appointment(
    ApptID INTEGER PRIMARY KEY,
    PatientID INTEGER,
    ApptDate DATE,
    FOREIGN KEY (PatientID) REFERENCES patients(PatientID)
);
INSERT INTO Patients (Name)
VALUES ('Steven'),
    ('Billy'),
    ('Sarah'),
    ('John');
INSERT INTO Appointments (PatientID, ApptDate)
VALUES (1, '2026-04-01'),
    (3, '2026-03-15');