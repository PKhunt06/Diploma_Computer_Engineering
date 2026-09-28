-- P-9 Implement SQL queries using CONVERSION functions and MISCELLANEOUS function.


1. SELECT TO_CHAR(SYSDATE, 'DD/MM') AS formatted_date FROM dual;

2. SELECT TO_CHAR(hiredate, 'DD Month YYYY') AS formatted_hiredate
FROM EMP;

3. SELECT TO_CHAR(delydate, 'DD  " of "  Month') 
FROM SALES_ORDER1;


4. SELECT TO_CHAR(delydate, 'DDTH  " of "  Month') 
FROM SALES_ORDER1;

5. SELECT TO_CHAR(Hiredate, 'DDSPTH  Month yyyy  hh:mi:ss  "A.M."') 
FROM EMP;

6. SELECT TO_CHAR(Sal, '$999,999') AS formatted_salary
FROM EMP;


7. SELECT TO_CHAR(Sal, '$999,999') AS formatted_salary
FROM EMP;


8. SELECT TO_CHAR(Sal, '$999,999,999.99') AS formatted_salary
FROM EMP;

9. SELECT TO_CHAR(Sal, '$999,999') AS formatted_salary
FROM EMP;

10. SELECT * ssFROM EMP
WHERE Hiredate = TO_DATE('May 01, 1981', 'Month DD, YYYY');


11. SELECT USER AS current_userid
FROM dual;

12. SELECT USER AS current_username
FROM dual;

13. select NVL(comm,'9')
from EMP;
