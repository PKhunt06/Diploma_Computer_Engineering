-- P-4 Perform queries to Create synonyms, sequence and index.

create INDEX idxprod on PRO_MASTER1(costprice);
create INDEX idxprode on PRO_MASTER1(costprice, sellprice);
create INDEX idxprodr on PRODUCT_NAME(costprice) REVERSE;*****
create UNIQUE INDEX idxprodd on CLIENT_MASTER(clientno);

____________________________________________________________________________

CREATE SEQUENCE inv_seq INCREMENT BY 1 START WITH 1 MAXVALUE 9 MINVALUE 1 NOCYCLE CACHE 4 NOORDER;
CREATE SEQUENCE inv_seq INCREMENT BY -1 START WITH 1 MAXVALUE 9 MINVALUE 1 NOCYCLE CACHE 4 NOORDER;

create table STUD(sno number(10),sname varchar(30));

insert into STUD values(inv_seq.nextval,yaksh);

insert into STUD1 values(inv_seq1.nextval,'yaksh');

create synonym CLNT for CLNT_NAME;

