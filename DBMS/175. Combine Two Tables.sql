# Write your MySQL query statement below
Select Person.FirstName, Person.LastName, Address.City, Address.State
From Person left join Address on Person.PersonId = Address.PersonId


/*OR
select FirstName, LastName, City, State
from Person left join Address
on Person.PersonId = Address.PersonId
;*/
