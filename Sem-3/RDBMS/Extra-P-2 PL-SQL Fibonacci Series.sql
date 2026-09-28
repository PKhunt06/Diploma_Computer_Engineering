-- Extra-P-2 Write a PL/SQL block to print Fibonacci series.

DECLARE
    n NUMBER := 10; -- Number of terms to display
    a NUMBER := 0;
    b NUMBER := 1;
    next NUMBER;
BEGIN
    DBMS_OUTPUT.PUT_LINE('Fibonacci Series:');
    FOR i IN 1..n LOOP
        DBMS_OUTPUT.PUT(a || ' ');
        next := a + b;
        a := b;
        b := next;
    END LOOP;
    DBMS_OUTPUT.NEW_LINE;
END;
/

  

OUTPUT
  

SQL> @2.sql
Fibonacci Series:
0 1 1 2 3 5 8 13 21 34

PL/SQL procedure successfully completed.
