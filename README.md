# c_practice_exercises

* **hidenp**  
Function takes two strings and returns 1 if the first string is hidden in the second one, otherwise returns 0 followed by a newline.  
s1 is hidden in s2 if it's possible to find each character from s1 in s2, in the same order as they appear in s1.  
Also, the empty string is hidden in any string.

* **is_anagram**  
Given two strings as parameters, function is able to tell whether or not the first string is an anagram of the second.  

* **is_array_sorted**  
Function checks whether an array is sorted or not.  
Returns true if the integer array is sorted in either ascending or descending order.  

* **my_cat_command**  
Mimicks system's cat command used in the command-line.  
Reads the content of each files which are received as an argument to the software.  
Doesn't handle any options.

* **my_split**  
Function splits a string of characters depending on a separator.
 
* **my_strip**  
Function takes a string, and returns another string which contains exactly one space between words, with no spaces or tabs either at the beginning or the end.

* **rcapitalize**  
Function takes one string and, capitalizes the last character of each word in uppercase and the rest in lowercase.  
A word is a section of string delimited by spaces/tabs or the start/end of the string. If a word has a single letter, it must be capitalized.  
A letter is a character in the set [a-zA-Z]

* **spaceship**  
Function takes in a flight path of a rocket ship as a string of letters and returns the following format:  

>"{x: X, y: Y, direction: 'DIRECTION'}"

  X,Y represent the ending coordinates of the ship and direction represents its final direction.  
  In a ship’s flight path there are only 3 valid options for movement; R for turning right, L for turning left and A for advancing.  
  Orientation is represented as left, right, up or down.

* **string_char_inter**  
Function takes two strings and returns, without doubles, the characters that appear in both strings, in the order they appear in the first
one.

* **string_char_union**  
Function my_union takes two strings and returns, without doubles, the characters that appear in either one of the strings.
