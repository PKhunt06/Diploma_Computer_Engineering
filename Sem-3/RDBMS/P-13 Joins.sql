-- P-13 Retrieve data spread across the various tables or same table using various joins.

1. SELECT E.EMPNO,E.ENAME,E.JOB,E.DEPTNO,D.LOC
FROM EMP E
INNER JOIN DEPT D ON E.DEPTNO = D.DEPTNO
WHERE E.DEPTNO = 20;

2.  SELECT CLIENTNO, ORDERDATE, NAME FROM CLIENT_MASTER NATURAL JOIN SALES_ORDER WHERE CLIENTNO IN ('C00001', 'C00003');

3. SELECT EMPNO, ENAME, JOB, DEPTNO, LOC FROM EMP JOIN DEPT USING (DEPTNO) WHERE DEPTNO = '10';

4. SELECT e1.empno, e1.ename, e1.job, e1.deptno, d.loc
FROM EMP e1
JOIN EMP e2
ON e1.deptno = e2.deptno
JOIN DEPT d
ON e1.deptno = d.deptno
WHERE e2.mgr = 7698;

5. SELECT e.empno, e.ename, e.job, e.deptno, d.dname, d.loc
FROM EMP e
LEFT OUTER JOIN DEPT d
ON e.deptno = d.deptno;

6. SELECT e.empno, e.ename, e.job, e.deptno, d.dname, d.loc
FROM EMP e
RIGHT OUTER JOIN DEPT d
ON e.deptno = d.deptno;

7. SELECT sales_order1.clientno, orderdate, name
FROM client_master
LEFT OUTER JOIN sales_order1
ON client_master.clientno = sales_order1.clientno;

8. SELECT client_master.clientno, sales_order1.orderdate, client_master.name
FROM client_master
RIGHT OUTER JOIN sales_order1
ON client_master.clientno = sales_order1.clientno;
