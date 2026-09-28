-- P-21 Implement various triggers.

FIRST ADD THIS
CREATE TABLE Account (
    account_id NUMBER PRIMARY KEY,
    balance NUMBER NOT NULL
);

INSERT INTO Account (account_id, balance) VALUES (1, 100);
INSERT INTO Account (account_id, balance) VALUES (2, -50);
INSERT INTO Account (account_id, balance) VALUES (3, 250);
INSERT INTO Account (account_id, balance) VALUES (4, 500);
INSERT INTO Account (account_id, balance) VALUES (5, 75);



P-21-A.sql

  
CREATE OR REPLACE TRIGGER check_balance
BEFORE INSERT ON Account
FOR EACH ROW
BEGIN
-- Check if the balance is negative
IF :NEW.balance < 0 THEN
RAISE_APPLICATION_ERROR(-20001, 'Error: Balance cannot be negative.');
END IF;
END;
/

THEN (WHEN TRIGGER CREATED PUT THIS) :- INSERT INTO Account (account_id, balance) VALUES (2, -50);



P-21-B.sql

  
CREATE OR REPLACE TRIGGER check_balance
BEFORE INSERT ON Account
FOR EACH ROW
BEGIN 
    IF :NEW.balance < 0 THEN
        RAISE_APPLICATION_ERROR(-20001, 'Error: Balance cannot be negative.');
    END IF;
END;
/

THEN (WHEN TRIGGER CREATED PUT THIS) :- INSERT INTO Account (account_id, balance) VALUES (2, -50);
