## Task
Create a function that takes a string, capitalizes the first character of each word and returns the rest in lowercase.  
A word is a section of string delimited by spaces/tabs or the start/end of the string. If a word has a single letter, it must be capitalized.
A letter is a character in the set [a-zA-Z]

## Thoughts
For the first time I decided to model a small test for my function and realized that I will never again write tests in C.  
See testing in the main function. 

## Usage
```
gcc -o cap capitalize.c -Wall -Wextra -Werror -g3 -fsanitize=address
./cap
```


<img width="666" alt="Screen Shot 2023-03-29 at 2 50 18 PM" src="https://user-images.githubusercontent.com/84927906/228638691-a01d1622-45a4-4b54-8743-aabe783d12de.png">
