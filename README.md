# COMPILER-DESIGN-BASICSS

"COMPANY" : CODTECH IT SOLUTIONS

"NAME" : ATHARVA AGRAWAL

"INTERN ID" : CT04DG1361

"DOMAIN" : C PROGRAMMING

"DURATION" : 4 WEEKS

"MENTOR" : NEELA SANTOSH

##This project is about making a lexical analyser using C. The idea is that it reads some code and then tells what parts are keywords, operators and identifiers. This is like the first step of a compiler and comes under compiler design basics. CodTech asked for this task as part of internship so I made this program using file reading and some string checks. So I made a file called code.txt where I wrote some sample C code like a function or loop. The program opens that file and reads it character by character. If it sees letters, it stores them in a string. Then when it sees something else like space or symbol, it checks if the word was a keyword (like int, if, return, etc) or just an identifier like variable name. I just used a small list of 10 keywords for now because I didn’t want to make it long.For operators I made a string with common symbols like +, -, *, =, <, > etc. If the current character matches one of them, it prints that as an operator. I didn’t include multi-char operators like == or != because that would be a bit harder and I just wanted to make it work first.

#OUTPUT

<img width="439" height="427" alt="Image" src="https://github.com/user-attachments/assets/c513ca2d-993b-450d-a069-72d53e70071b" />

