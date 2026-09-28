-- P-20 Perform various operations on packages.


CREATE OR REPLACE PACKAGE mypackage IS
    FUNCTION calculate_factorial(n IN NUMBER) RETURN NUMBER;
END mypackage;
/

CREATE OR REPLACE PACKAGE BODY mypackage IS
    FUNCTION calculate_factorial(n IN NUMBER) RETURN NUMBER IS
        factorial_value NUMBER := 1;
    BEGIN
        IF n < 0 THEN
            RAISE_APPLICATION_ERROR(-20001, 'Factorial is not defined for negative numbers.');
        ELSIF n = 0 THEN
            RETURN 1;
        ELSE
            FOR i IN 1..n LOOP
                factorial_value := factorial_value * i;
            END LOOP;
        END IF;
        RETURN factorial_value;
    END calculate_factorial;
END mypackage;
/

DECLARE
    number_input NUMBER := 5;
    fact NUMBER;
BEGIN
    fact := mypackage.calculate_factorial(number_input);
    DBMS_OUTPUT.PUT_LINE('The factorial of ' || number_input || ' is ' || fact);
END;
/
