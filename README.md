### Lab 3 - List ADT implemented with static array

You are given an implementation of the integer list ADT using static array and a client. It is all in the `listAll.cpp` source code file.  You may download this repository using 

```
git clone https://github.com/ran-research-lab/ccom3034-b81-listWArray
```

Your task is to complete the implementation of the following member functions:

1. **void elimOdds()**: removes the odd integers from the list. For example if L contains  `(5, 23, 10, 17, 8)`, after calling <code>L.elimOdds()</code> the content of L will be `(10, 8)`. Your algorithm should be worst case *O(n)* where *n* is the length of the list. Honor points if you can design an *in-place* algorithm.

2. **void reverse()**: reverses the list in place For example if `L` contains  `(1, 2, 3, 4)`,  calling `L.reverse()` will change the list to `(4, 3, 2, 1)`. Your algorithm should be **in-place**. It should be *O(n)* in the worst case. 

3. **int mode() const** that returns the *mode* of the list, i.e. the most repeated element. You may assume that the list contains only positive numbers so if there is no mode, the member function will return -1. Your algorithm should be *O(n)* in the worst case. 

    Examples:

    1. If the list `L` contains `(1, 2, 1, 1)`, `L.mode()` will return `1`.
    1. If the list `L` contains `(1, 2, 2, 1)`, `L.mode()` will return `-1` because the list has no mode, i.e. there are two or more numbers that repeat the same number of times.
    1. If the list `L` contains `(33,22,44)`, `L.mode()` will return `-1` because the list has no mode, i.e. there are two or more numbers that repeat the same number of times.  



The provided client takes care of asking the user for a command and then invoking the corresponding function. The client understands the following commands:

* `i {value} {position}`: insert a *value* at a *position*. For example, if `L` contains `(4,8,1)`, after the command `i 10 2` it will contain `(4,8,10,1)`.  
* `e {position}`: erase the element at *position*. For example, if `L` contains `(4,8,1)`, after the command `e 0` it will contain `(8,1)`
* `d`: display the contents of the list.
* `eo`: eliminate the odds (by calling the `elimOdds` function). 
* `r`: reverse the list.
* `m`: print the mode of the list.
* `q`: quit the client program.

A `Makefile` is provided so that you may compile the program by simply typing `make` in the linux command line.

Please include the name of the programmers at the beginning of the file. Also provide comments before each of the functions. Submit your program through vpl.ccom.uprrp.edu using the instructions that Dr. Arce will provide on September 24, 2018.
