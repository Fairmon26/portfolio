-- Keep a log of any SQL queries you execute as you solve the mystery.
select description
from crime_scene_reports
where year = 2021 and month = 7 and day = 28 and street = "Humphrey Street"

select transcript
from interviews
where year = 2021 and month 27 and day 28 and transcript like "%bakery%"

select name
from people
join bakery_security_logs on bakery_security_logs.license_plate = people.license_plate
where year = 2021 and month = 7 and day 28 and hour = 10 and minute >= 15 and minute <= 25
and activity = "exit"

--suspects: Vanessa, Bruce, Barry, Luca, Sofia, Iman, Diana, Kelsey

select name
from people
join bank_accounts on bank_accounts.person_id = people.id
join atm_transactions on atm_transactions.account_number = bank_accounts.account_number
where year = 2021 and month 7 and day = 28 and atm_location = "Leggett Street" and
transaction_type = "withdraw"

select name
from people
join passengers on passengers.passort_number = people.passport_number
where passengers.flight_id = (select id from flights where year = 2021 and month = 7 and day = 29 and origin_airport_id = (select id from airports where city = "Fiftyville")
order by hour,minute
limit 1)

--suspects: Doris, Sofia, Bruce, Edward, Kelsey, Taylor, Kenny, Luca
--common suspects: Bruce, Luca

select name
from people
join phone_calls on phone_calls.caller = people.phone_number
where year = 2021 and month = 7 and day = 28 and duration < 60



select city from airports
where id = (select destination_airport_id from flights where year = 2021 and month = 7 and day = 29 and origin_airport_id = (select
id from airports where city = "Fiftyville")
order by hour,minute
limit 1)