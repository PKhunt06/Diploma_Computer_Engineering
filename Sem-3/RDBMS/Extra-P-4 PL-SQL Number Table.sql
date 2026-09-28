-- Extra-P-4 Write a PL/SQL block to print table of number.

DECLARE
    num NUMBER := 7; -- Change this value for different input
BEGIN
    DBMS_OUTPUT.PUT_LINE('Multiplication Table of ' || num || ':');
    FOR i IN 1..10 LOOP
        DBMS_OUTPUT.PUT_LINE(num || ' * ' || i || ' = ' || (num * i));
    END LOOP;
END;
/

  

OUTPUT
  

SQL> @4.sql
Multiplication Table of 7:
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70

PL/SQL procedure successfully completed.
