-- P-15 Practice on Normalization – using any database perform various normal forms.


1nf atomic value in every column

| Employee No | Employee Name | Branch | Department | Item Number | Item Description | Sale Price (Rs.) |
|-------------|---------------|--------|------------|-------------|------------------|------------------|
| 101         | Mr. Ankit Shah| Surat  | Production | P01         | Paper            | 10.00            |
| 101         | Mr. Ankit Shah| Surat  | Production | P02         | Pen              | 50.00            |
| 101         | Mr. Ankit Shah| Surat  | Production | P03         | Pencil           | 05.00            |
| 101         | Mr. Ankit Shah| Surat  | Production | P04         | Scale            | 20.00            |
| 102         | Mr. Mohan Patel| Baroda | Account    | A01         | File             | 15.00            |
| 102         | Mr. Mohan Patel| Baroda | Account    | A02         | Challan Book     | 75.00            |
| 103         | Mr. John Desouza| Mumbai| Marketing  | M01         | Dictionary       | 500.00           |
| 103         | Mr. John Desouza| Mumbai| Marketing  | M02         | Encyclopedia     | 1000.00          

  
2nf no partial dependencies (non-key attribute must depend on whole primary keys).
  
1. **Employee Table**

| Employee No | Employee Name | Branch | Department |
|-------------|---------------|--------|------------|
| 101         | Mr. Ankit Shah| Surat  | Production |
| 102         | Mr. Mohan Patel| Baroda | Account    |
| 103         | Mr. John Desouza| Mumbai| Marketing  |

2. **Sales Table**

| Employee No | Item Number | Item Description | Sale Price (Rs.) |
|-------------|-------------|------------------|------------------|
| 101         | P01         | Paper            | 10.00            |
| 101         | P02         | Pen              | 50.00            |
| 101         | P03         | Pencil           | 05.00            |
| 101         | P04         | Scale            | 20.00            |
| 102         | A01         | File             | 15.00            |
| 102         | A02         | Challan Book     | 75.00            |
| 103         | M01         | Dictionary       | 500.00           |
| 103         | M02         | Encyclopedia     | 1000.00          |

3nf No Transitive dependencies(non-key attribute should not depend on other non-key attributes).

1 nf - Remove repeating group of making each item its own row.
2 nf - Eliminate partial dependencies by creating separate table for employees & sales
3 nf - Ensures that there were no transitive dependencies. Each non-key attribute depends only on the primary key.
