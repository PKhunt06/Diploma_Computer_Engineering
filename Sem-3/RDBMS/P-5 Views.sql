-- P-5 Perform queries to Create, alter and update views.

create view "SALES1_VIEW" as select orderno,orderdate,orderstatus from SALES1_ORDER; 

create or replace view SALES1_VIEW as select orderno,clientno,orderstatus from SALES1_ORDER; 

update SALES1_VIEW set orderstatus='Fulfilled' where orderstatus='In Process';

create or replace view SALES1_VIEW as select orderno,clientno,orderstatus from SALES1_ORDER;

create view "SALES_DETAILS" as select productno,productrate,qtyordered from SALES1_ORDER_DETAILS;

*************************************************************************************************************

 select MOD(10,2) from dual;

select TRUNC(10.846252,3) from dual;

select FLOOR(34.7) from dual;

select CEIL(79.4) from dual;

select COS(45) from dual;

select COSH(45) from dual;

