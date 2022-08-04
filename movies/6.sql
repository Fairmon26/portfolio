select avg(rating)
from ratings join ratings on movies.id = ratings.movie_id
where year = 2012