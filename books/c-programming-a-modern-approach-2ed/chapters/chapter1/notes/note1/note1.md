### What is C

C is a widely used programming language developed in the early 1970s at Bell
Laboratories.

### Origins

C is a by-product of the UNIX operating system, which was developed at Bel Laboratories
by _Ken Thumpson_, _Dennis Ritchie_, and others. Thompson single-handledly wrote the original
version of UNIX, which ran on the DEC PDP-7 computer, and early minicomputer with only 8K words
of main memory. Like other operating systems at the time, UNIX was written in assembly language.
Programs written in assembly language are usually painful to debug and hard to enhnace; UNIX was
no exception. Thompson decided that a higher-level language was needed for the futher development
of UNIX, so he designed a small language named **B**. Thompson based B on BCPL, a systems
programming language developed in the mid-1960s. BCPL, in turn, traces it's ancestry to Algol 60,
one of the earliest (and most influential) programming languages.

Ritchie soon joined the UNIX project and began programming in B. In 1970, Bell labs  acquired a
PDP-11 for the UNIX project. Once B was up and running on the PDP-11, Thompson rewrote a portion
of UNIX in B. By 1971, it became apparent that B was not well-suited tot he PDP-11, so Ritchie
began to develope an extended version of B. He called his language NB ("New B") at first, and then,
as it began to diverge more from B, he changed the name to C. The language was stable enough by
1973 that UNIX could be rewritten in C. The switch to C provided an important benefit: **portability**.
By writing C compilers after other computers at Bell Labs, the team could get UNIX running on those
machines as well.