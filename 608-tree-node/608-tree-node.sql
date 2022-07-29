# Write your MySQL query statement below
# Couldn't solve it on my own. Learnt CASE function and uses
SELECT id,

    CASE 
        WHEN p_id IS NULL THEN 'Root'
        WHEN id IN (SELECT p_id FROM Tree)THEN 'Inner'
        ELSE 'Leaf'
        END AS type
 FROM Tree