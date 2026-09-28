-- Print 1 to 10 numbers in ascending order

Set serveroutput on  -  For Displaying Output

BEGIN
    FOR i IN 1..10 LOOP
        DBMS_OUTPUT.PUT_LINE(i);
    END LOOP;
END;
/
