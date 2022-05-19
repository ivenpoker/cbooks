C continued to evolve during the 1970s, especially between 1977 and 1979. It was during this period that the
first book on C appeared. **The C Programming Language**, written by _Bryan Kernighan_ and _Dennis Ritchie_ and
published in 1978, quickly became the bible for C programmers. In the absence of an official standard for C, this
book known as K&R or the "White Book" to aficionados served as a de facto standard.

During the 1970s, there was relatively few C programmers, and most of them were UNIX users. By the 1980s, however,
C had expanded beyond the narrow confines of the UNIX world. C compilers became available on a variety of machines
running under different operating systems. In particular, C began to establish itself as the fast-growing IBM PC 
platform. 

With C's increasing popularity came problems. Programmers who wrote new C compilers relied on K&R as a reference. 
Unfortunately, K&R was fuzzy about some lanugage features, so compilers often treated these features differently. 
Also K&R failed to make a clear distinction between which features belonged to C and which were part of UNIX. To
make matters worse, C continued to change after K&R was published, with new features being added and a few older
features removed. The need for a thorough, precise, and up-to-date description of the language soon became apparent.
Without such a standard, numerous dialects would have arisen, threatening the portability of C programs, one of the 
language's major strengths.

The development of a U.S standard for C began in 1983 under the auspices of the American National Standards Institute
(ANSI). After many revisions, the standard was completed in 1988 and formally approved in December 1989 as ANSI standard
X3.159-1989. In 1990, it was approved by the International Organization for Standardization (ISO) as international 
standard ISO/IEC 9899:1990. This version of the language is usually referred to as C89 or C90, to distinguish it from
the original version of C, often called K&R C. 

The language underwent a few changes in 1995 (described in a document known as Amendment 1). More significant changes
occurred with the publication of a new standard, ISO/IEC 9899:1999, in 1999. The language described in this standard
is commonly known as C99. The terms "ANSI C", "ANSI/ISO C", and "ISO C", once used to describe C89, are now ambigous,
thanks to the existence of two standards. A compiler that doesn't recognize these features isn't "C99-compliant".