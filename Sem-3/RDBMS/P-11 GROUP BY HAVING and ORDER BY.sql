-- P-11 Implement SQL queries using GROUP BY, HAVING AND ORDER BY clause.

1. SELECT Productno, SUM(QTYORDERED) AS total_qty_sold
FROM SALES_ORDER_DETAILS1
GROUP BY Productno
HAVING SUM(QTYORDERED) > 6;

2. select sum(qtydisp) from SALES_ORDER_DETAILS1 group by productno;

3. select AVG(qtydisp) from SALES_ORDER_DETAILS1 group by orderno having MAX(productrate)=12000;

4. ALTER TABLE SALES_ORDER1
ADD order_value NUMBER;

UPDATE SALES_ORDER1
SET order_value = 100
WHERE Orderno = 'O19001';

UPDATE SALES_ORDER1
SET order_value = 150
WHERE Orderno = 'O19002';

(MAIN)SELECT SUM(order_value) AS total_billed
FROM SALES_ORDER1
WHERE TO_CHAR(Orderdate, 'MM') = '06';

5. select COUNT(ename) from EMP group by deptno having deptno=20;

6. select COUNT(empno) from EMP group by deptno;

7. select ename from EMP where sal IN (select MAX(sal)from EMP group by deptno having deptno=10);

8. SELECT * FROM Pro_Master1
ORDER BY Sellprice DESC;

9. select orderno from SALES_ORDER1 order by delydate;

10. SELECT EName
FROM Emp
ORDER BY Hiredate;

