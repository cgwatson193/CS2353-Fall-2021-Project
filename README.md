# CS2353 FALL 2021 PROJECT

This program is a basic integrity check function, which demonstrates the use of logic in a checksum.

USAGE INSTRUCTIONS:
After compiling and running, the program will prompt you to enter in a string.
After entering the string, you will see the result of a basic integrity check function.

ABOUT:
This integrity check function checks the underlying string and outputs whether
or not the string has an odd numberof 1 bits (True) or even number of 1 bits (False).
The reason this is useful is for checksums when downloading files off the internet.
A website could tell you that the file they put on their site has an odd number of 1 bits.
Then, once you download the file, you would run the file (in this case, a string) through
the program and if you get a different result for odd/even 1 bits, then you know your file
has been corrupted in transmission and therefore, you should not use the application. Of course,
there are much more sophistaced checksums out there, but this is a basic one to show the use of logic
in a real-world scenario. Most websites use the SHA256 or MD5 algorithms for checksums.



