-- P-3 Perform queries for DCL and TCL Commands.

Create user user2 identified by p12;

grant object priveleges on object name to user2;

grant select,insert on SALES1_ORDER to user2;

grant select,insert on SALES1_ORDER_DETAILS to user2;

grant select,update,delete,insert on CLIENT_MASTER to user2;

grant select,insert on EMP to user2;

revoke object priveleges on object name from user2;

revoke all on SALES1_ORDER from user2;

revoke all on SALES1_ORDER_DETAILS from user2;

revoke all on EMP from user2;

revoke all on CLIENT_MASTER from user2;

alter user user2 identified by p12;

drop user user2;
