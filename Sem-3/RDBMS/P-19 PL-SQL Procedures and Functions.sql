-- P-19 Implement user defined procedures and functions using PL/SQL blocks.


CREATE OR REPLACE FUNCTION calculate_factorial(n IN NUMBER) RETURN NUMBER IS
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
END;
/

CREATE OR REPLACE PROCEDURE display_factorial(num IN NUMBER) IS
    fact NUMBER;
BEGIN
    fact := calculate_factorial(num);
    DBMS_OUTPUT.PUT_LINE('The factorial of ' || num || ' is ' || fact);
END;
/

DECLARE
    number_input NUMBER;
BEGIN
    number_input := &input_number;
    display_factorial(number_input);
END;
/

