# Write your MySQL query statement below
-- SELECT player_id, event_date as first_login
-- FROM Activity
-- WHERE player_id IN (
--     SELECT MIN(event_date) FROM Activity GROUP BY event_date
-- )

SELECT player_id, MIN(event_date) as first_login  FROM Activity GROUP BY player_id