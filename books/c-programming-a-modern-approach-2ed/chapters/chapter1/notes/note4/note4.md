Like any other programming language, C has strengths and weaknesses. Both stem from the language's original use
(writing operating system and other systems' software) and it's underlying philosophy:

* **C is a low-level language**. To serve as a suitable language for systems programming. C provides access to
  machine-level concepts (bytes and addresses, for example) that other programming languages try to hide. C also
  provides operations that correspond closely to a computer's built-in instructions, so that program can be fast.
  Since application programs rely on it for input/output, storage management, and numerous other services, an
  operating system can't afford to be slow.
* **C is a small language**. C provides a more limited set of features than many languages. (The reference manual
  in the second edition of K&R covers the entire language in 49 pages.) To keep the number of features small, C
  relies heavily on "library" of standard functions. (A "function" is similar to what other programming languages
  might call a "procedure", "subroutine", or "method")
* **C is a permissive language**. C assumes that you know what you're doing, so it allows you a wider degree of
  latitude than many languages. Moreover, C doesn't mandate the detailed error-checking found in other languages.

### Strengths

C's strengths help explain why the language has become so popular.

* **Efficiency**. Efficiency has been one of C's advantages from the beginning. Because C was intended for
  applications where assembly language had traditionally been used, it was crucial that C programs could run
  quickly and in limited amounts of memory.
* **Portability**. Although program portability wasn't a primary goal of C, it has turned out to be one of the
  language's strengths. When a program must run on computers ranging from PCs to supercomputers, it is often
  written in C. One reason for the portability of C programs is that, thanks to C's early associations with UNIX
  and the later ANSI/ISO standards, the language hasn't splintered into incompatible dialects. Another is that C
  compilers are small and easily written, which has helped make them widely available. Finally,  C itself has
  featured that support portability (although there's nothing to prevent programmers from writing non-portable
  programs)
* **Power**. C's large collection of data types and operators help make it a powerful language. In C, it's often
  possible to accomplish quite a bit with just a few lines of code.
* **Flexibility**. Although C was originally designed for systems programming, it has not inherent restrictions
  that limit it to this arena. C is now used for applications of all kinds, from embedded systems to commercial
  data processing. Moreover, C imposes very few restrictions on the use of its features; operations that would be
  illegal in other languages are often permitted in C. For example, C allows a character to be added to an integer
  value (or, for that matter, a floating-point number). This flexibility can make programming easier, although
  it may allow some bugs to slip through.
* **Standard library**. One of C's great strengths is its standard library, which contains hundreds of functions
  for input/output, string handling, storage allocation, and other useful operations.
* **Integration with UNIX**. C is particularly powerful in combination with UNIX (including variant known as linux).
  In fact, some UNIX tools assume that the user knows C.

### Weaknesses

C's weaknesses arise from the same source as many of its strengths: C's closeness to the machine. Here are a few
of C's the most notorious problems:

* **C programs can be error-prone**. C's flexibility makes it an error-prone language. Programming mistakes that 
  would be caught in many other languages can't be detected by a C compiler. In this respect, C is a lot like assembly
  language, where most errors aren't detected until the program is run. To make matters worse, C contains a number of 
  pitfalls for the unwary. In later chapters, we'll see how an extra semicolon can create an infinite loop or a missing 
  `&` symbol can cause a program crash. 
* **C programs can be difficult to understand**. Although C is a small language by most measures, it has a number of
  features that aren't found in all programming languages (and that consequently are often misunderstood). These
  features can be combined in a great variety of ways, many of which, although obvious to the original author of a 
  program, can be hard for others to understand. Another problem is the terse nature of C programs. C was designed at a 
  time when interactive communication with computers was tedious at best. As a result, C was purposefully kept terse 
  to minimize the time required to enter and edit programs. C's flexibility can be also be a negative for programmers
  who are too clever for their own good can make programs almost impossible to understand. 
* **C programs can be difficult to modify**. Large programs written in C can be hard to change if they haven't been 
  designed with maintenance in mind. Modern programming languages usually provide features such as classes nd packages 
  that support the division of a large program into more manageable pieces. C, unfortunately, lacks such features. 

### Effective Use of C

Using C effectively requires taking advantage of C's strength while avoiding its weaknesses. Here are a few suggestions:

* **Learn how to avoid C pitfalls**. Hints for avoiding pitfalls are scattered throughout _C Programming: A Modern
  Approach, 2nd Edition_ (book from which these notes are derived). Modern compilers will detect common pitfalls and
  issue warnings, but no compiler spots them all. 
* **Use software tools to make programs more reliable**. C programmers are prolific tool builders (and users). One of 
  the most famous C tools is `lint`. `lint`, which is traditionally provided with UNIX, can subject a program to a more
  extensive error analysis than most C compilers. If `lint` (or a similar program) is available, it's a good idea to use
  it. Another useful tool is a debugger. Because of the nature of C, many bugs can't be detected by a C compiler; these 
  show up instead in the form of run-time errors or incorrect input. Consequently, using a good debugger is practically 
  mandatory for C programmers. 
* **Take advantage of existing code libraries**. One of the benefits of using C is that so many others' people also use 
  it; it's a good bet that they've written code you can employ in your own programs. C code is often bundled into
  libraries (collection of functions); obtaining a suitable library is a good way to reduce errors, and save 
  considerable programming effort. Libraries for commons takes, including user-interface development, graphics, 
  communications, database management, and networking, are readily available. Some libraries are in the public domain, 
  some are open source, and some are sold commercially. 
* **Adopt a sensible set of coding conventions**. A coding convention is a style rule that a programmer has decided to
  adopt even thought it's not enforced by the language. Well-chosen conventions help make programs more uniform, easier
  to read, and easier to modify. Conventions are important, when using any programming language, but especially so with
  C. As noted above, C's highly flexible nature makes it possible for programmers to write code that is all but 
  unreadable. The programming examples in this book follow one set of conventions, but there are other, equally valid, 
  conventions in use. (We'll discuss some alternatives from time to time.) Which set you use is less significant 
  than adopting _some_ conventions and sticking to them.
* **Avoid "tricks" and overly complex code**. C encourages programming tricks. There are usually several ways to
  accomplish a given task in C; programmers are often tempted to choose the method that's most concise. Don't get
  carried away; the shortest solution is often the hardest to comprehend. In this book, I'll illustrate a style that's
  reasonably concise but still understandable. 
* **Stick to the standard**. Most C compilers provide language features and library functions that aren't part of C89 or
  C99 standards. For portability, it's best to avoid using nonstandard features and libraries unless they're absolutely 
  necessary. 