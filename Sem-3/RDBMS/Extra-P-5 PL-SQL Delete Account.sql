-- Extra-P-5 Write a PL/SQL block to read an account number and delete account having that account no.

DECLARE
ano  account.account_id % type;

begin
ano := & account_id;

delete from account where ano=account_id;

dbms_output.put_line('account deleted.........');

end;
/



OUTPUT


SQL> @Extra-5.sql
Enter value for account_id: 1
old   5: ano := & account_id;
new   5: ano := 1;
account deleted.........

PL/SQL procedure successfully completed.

