select avg(rating)
from ratings join ratings on movies.id = ratings.movies_id
where year = 2012