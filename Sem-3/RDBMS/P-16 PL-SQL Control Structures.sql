-- P-16 Implement PL/SQL programs using control structures.

P-16-A.sql


DECLARE
    CURSOR emp_cursor IS SELECT empno, sal, comm FROM EMP;
    v_empno EMP.empno%TYPE;
    v_sal EMP.sal%TYPE;
    v_comm EMP.comm%TYPE;
    v_new_sal EMP.sal%TYPE;
BEGIN
    FOR emp_record IN emp_cursor LOOP
        v_empno := emp_record.empno;
        v_sal := emp_record.sal;
        v_comm := NVL(emp_record.comm, 0);

        IF (v_sal + v_comm) < 5000 THEN
            v_new_sal := v_sal * 1.10;
        ELSIF (v_sal + v_comm) >= 5000 AND (v_sal + v_comm) <= 7000 THEN
            v_new_sal := v_sal + 500;
        ELSIF (v_sal + v_comm) > 7000 THEN
            v_new_sal := v_sal * 1.12;
        ELSE
            v_new_sal := v_sal;
        END IF;

        UPDATE EMP SET sal = v_new_sal WHERE empno = v_empno;
        DBMS_OUTPUT.PUT_LINE('Employee No: ' || v_empno || ' - New Salary: ' || v_new_sal);
    END LOOP;

    COMMIT;
EXCEPTION
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('An error occurred: ' || SQLERRM);
        ROLLBACK;
END;
/


  
P-16-B.sql
  

DECLARE
    total_sum NUMBER := 0;
    i NUMBER;
    number_list CONSTANT SYS.ODCINumberList := SYS.ODCINumberList(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
BEGIN
    FOR i IN 1..10 LOOP
        total_sum := total_sum + number_list(i);
    END LOOP;
    DBMS_OUTPUT.PUT_LINE('Sum using FOR loop: ' || total_sum);

    total_sum := 0;

    i := 1;
    WHILE i <= 10 LOOP
        total_sum := total_sum + number_list(i);
        i := i + 1;
    END LOOP;
    DBMS_OUTPUT.PUT_LINE('Sum using WHILE loop: ' || total_sum);

    total_sum := 0;

    i := 1;
    LOOP
        total_sum := total_sum + number_list(i);
        i := i + 1;
        EXIT WHEN i > 10;
    END LOOP;
    DBMS_OUTPUT.PUT_LINE('Sum using simple LOOP: ' || total_sum);
END;
/


  
P-16-C.sql
  

DECLARE
    sub1 NUMBER;
    sub2 NUMBER;
    sub3 NUMBER;
    average NUMBER;
    grade CHAR(1);
BEGIN
    sub1 := TO_NUMBER('&sub1');
    sub2 := TO_NUMBER('&sub2');
    sub3 := TO_NUMBER('&sub3');

    average := (sub1 + sub2 + sub3) / 3;

    grade := CASE
        WHEN average >= 90 THEN 'A'
        WHEN average >= 80 THEN 'B'
        WHEN average >= 70 THEN 'C'
        WHEN average >= 60 THEN 'D'
        WHEN average < 50 THEN 'F'
        ELSE 'F'
    END;

    DBMS_OUTPUT.PUT_LINE('Average Score: ' || average || ' - Grade: ' || grade);
EXCEPTION
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('An error occurred: ' || SQLERRM);
END;
/
