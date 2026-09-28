-- Extra-P-3 Write a PL/SQL block to print Palindrome.

DECLARE
    str VARCHAR2(100) := 'RADAR'; -- Change this value for different input
    reversed_str VARCHAR2(100) := '';
BEGIN
    FOR i IN REVERSE 1..LENGTH(str) LOOP
        reversed_str := reversed_str || SUBSTR(str, i, 1);
    END LOOP;

    IF str = reversed_str THEN
        DBMS_OUTPUT.PUT_LINE(str || ' is a Palindrome.');
    ELSE
        DBMS_OUTPUT.PUT_LINE(str || ' is not a Palindrome.');
    END IF;
END;
/


OUTPUT
  

SQL> edit 3.sql

SQL> @3.sql
RADAR is a Palindrome.

PL/SQL procedure successfully completed.

