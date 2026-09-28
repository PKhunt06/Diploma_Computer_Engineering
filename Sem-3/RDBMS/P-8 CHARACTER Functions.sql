-- P-8 Implement SQL queries using CHARACTER functions.

SELECT name
FROM client
WHERE SUBSTR(name, 2, 1) = 'a';

SELECT name
FROM CLIENT
WHERE SUBSTR(city, 1, 1) = 'M';

SELECT name
FROM CLIENT_MASTER
WHERE city IN ('Bangalore','Mangalore');

SELECT name, city, state
FROM client
WHERE state <> 'Maharashtra';

SELECT CONCAT(CONCAT(TO_CHAR(QtyOrdered), ' '), TO_CHAR(QtyDisp)) AS concatenated_result
FROM SALES_ORDER_DETAILS1;


SELECT SUBSTR(ename, 1, 3) AS first_three_letters
FROM emp;

SELECT name, LENGTH(name) AS name_length
FROM client;

SELECT name, INSTR(name, 'a') AS position_of_a
FROM client;

SELECT ename, LPAD(TO_CHAR(sal), 3, '0') AS padded_sal
FROM emp;

SELECT ename, RPAD(TO_CHAR(sal), 3, '0') AS padded_salary
FROM emp;

SELECT ename, REPLACE(ename, 'a', 'e') AS modified_name
FROM emp;

SELECT description, TRIM(LEADING 'D' FROM description) AS trimmed_description
FROM Product_Master;
