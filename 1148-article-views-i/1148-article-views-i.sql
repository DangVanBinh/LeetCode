# Write your MySQL query statement below
select DISTINCT author_id as id
from Views
where author_id = viewer_id and viewer_id > 0
order by id