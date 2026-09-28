-- Print 10 to 1 numbers in descending order.

Set serveroutput on  -  For Displaying Output

BEGIN
    FOR i IN REVERSE 1..10 LOOP
        DBMS_OUTPUT.PUT_LINE(i);
    END LOOP;
END;
/
