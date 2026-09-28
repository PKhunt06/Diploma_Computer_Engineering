-- Extra-P-1 Write a PL/SQL block to print Factorial of given number.

DECLARE
    num NUMBER := 5; -- Change this value for different input
    factorial NUMBER := 1;
BEGIN
    FOR i IN 1..num LOOP
        factorial := factorial * i;
    END LOOP;
    DBMS_OUTPUT.PUT_LINE('Factorial of ' || num || ' is ' || factorial);
END;
/



OUTPUT 

  
SQL> edit 1.sql

SQL> @1.sql
Factorial of 5 is 120

PL/SQL procedure successfully completed.

