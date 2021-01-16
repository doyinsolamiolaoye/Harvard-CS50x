# Lab 1 - Population Growth

## Implementation Details:
Complete the implementation of `population.c`, such that it calculates the number of years required for the population to grow from the start size to the end size.

* Your program should first prompt the user for a starting population size.
    * If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
* Your program should then prompt the user for an ending population size.
    * If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
* Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
* Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal `Years: n`, where n is the number of years.

* [Python Solution](https://github.com/doyinsolamiolaoye/Harvard-CS50x/blob/main/week1/Lab%201-%20Population%20Growth/population_growth.py)
* [C Solution](https://github.com/doyinsolamiolaoye/Harvard-CS50x/blob/main/week1/Lab%201-%20Population%20Growth/population_growth.c)
