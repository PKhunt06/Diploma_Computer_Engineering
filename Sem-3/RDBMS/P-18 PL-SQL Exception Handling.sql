-- P-18 Implement PL/SQL programs using Exception handling.

P-18-A.sql
  

DECLARE
    v_empno EMP.empno%TYPE;
    v_ename EMP.ename%TYPE;
    v_salary EMP.sal%TYPE;

    v_dividend NUMBER := 10;
    v_divisor NUMBER := 0;

BEGIN
    BEGIN
        SELECT ename INTO v_ename FROM EMP WHERE empno = '7369';
        DBMS_OUTPUT.PUT_LINE('Employee Name: ' || v_ename);
    EXCEPTION
        WHEN NO_DATA_FOUND THEN
            DBMS_OUTPUT.PUT_LINE('No employee found with the given empno.');
    END;

    BEGIN
        SELECT ename INTO v_ename FROM EMP WHERE ROWNUM = 1;
        DBMS_OUTPUT.PUT_LINE('First Employee Name: ' || v_ename);
    EXCEPTION
        WHEN TOO_MANY_ROWS THEN
            DBMS_OUTPUT.PUT_LINE('Query returned more than one row.');
    END;

    BEGIN
        IF v_divisor <> 0 THEN
            v_salary := v_dividend / v_divisor;
            DBMS_OUTPUT.PUT_LINE('Salary: ' || v_salary);
        ELSE
            DBMS_OUTPUT.PUT_LINE('Attempted to divide by zero.');
        END IF;
    END;

END;
/



P-18-B.sql
  

DECLARE
    my_exception EXCEPTION;
    v_salary EMP.sal%TYPE := -5000;

BEGIN
    IF v_salary < 0 THEN
        RAISE my_exception;
    END IF;

EXCEPTION
    WHEN my_exception THEN
        DBMS_OUTPUT.PUT_LINE('Error: Salary cannot be negative.');
END;
/

