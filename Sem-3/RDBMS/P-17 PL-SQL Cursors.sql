-- P-17 Implement PL/SQL programs using Cursors.

P-17-A.sql

  
DECLARE
    v_deptno EMP.deptno%TYPE;
    CURSOR emp_cursor IS
        SELECT empno, ename, job, hiredate, sal, comm
        FROM EMP
        WHERE deptno = v_deptno;

BEGIN
    DBMS_OUTPUT.PUT_LINE('Enter department number:');
    v_deptno := &deptno;

    OPEN emp_cursor;

    LOOP
        DECLARE
            v_empno EMP.empno%TYPE;
            v_ename EMP.ename%TYPE;
            v_job EMP.job%TYPE;
            v_hiredate EMP.hiredate%TYPE;
            v_sal EMP.sal%TYPE;
            v_comm EMP.comm%TYPE;
        BEGIN
            FETCH emp_cursor INTO v_empno, v_ename, v_job, v_hiredate, v_sal, v_comm;
            EXIT WHEN emp_cursor%NOTFOUND;
            DBMS_OUTPUT.PUT_LINE('Emp No: ' || v_empno || ', Name: ' || v_ename || 
                                 ', Job: ' || v_job || ', Hire Date: ' || v_hiredate || 
                                 ', Salary: ' || v_sal || ', Comm: ' || v_comm);
        END;
    END LOOP;

    CLOSE emp_cursor;

EXCEPTION
    WHEN OTHERS THEN
        IF emp_cursor%ISOPEN THEN
            CLOSE emp_cursor;
        END IF;
        RAISE;
END;
/

  
P-17-B.sql
  

DECLARE
    CURSOR emp_cursor IS
        SELECT empno, ename, job
        FROM EMP; 

    v_empno EMP.empno%TYPE;
    v_ename EMP.ename%TYPE;
    v_job EMP.job%TYPE;
    v_rowcount INTEGER;
BEGIN
    OPEN emp_cursor;

    LOOP
        FETCH emp_cursor INTO v_empno, v_ename, v_job;
        
        v_rowcount := emp_cursor%ROWCOUNT;

        IF emp_cursor%FOUND THEN
            DBMS_OUTPUT.PUT_LINE('Fetched Row ' || v_rowcount || ': Emp No: ' || v_empno || 
                                 ', Name: ' || v_ename || ', Job: ' || v_job);
        END IF;

        EXIT WHEN emp_cursor%NOTFOUND;
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('Total Rows Fetched: ' || v_rowcount);
    
    IF emp_cursor%ISOPEN THEN
        CLOSE emp_cursor;
    END IF;

EXCEPTION
    WHEN OTHERS THEN
        IF emp_cursor%ISOPEN THEN
            CLOSE emp_cursor;
        END IF;
        RAISE;
END;
/

