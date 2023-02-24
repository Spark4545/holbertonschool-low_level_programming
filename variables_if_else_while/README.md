# <p align="center">**C - Hello, World**</p>

<img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/212/cisfun.jpg" width="100%">

## <p align="center">**Description**</p>

### **Betty**
<p>
Betty is a linter tool for shell scripts that is written in C programming language. It was created by Holberton School as part of their curriculum. Betty helps to detect coding style issues, syntax errors, and potential bugs in shell scripts. It enforces a set of coding standards that make the code more readable and easier to maintain. Betty is easy to install and use and can be integrated with popular text editors like Visual Studio Code and Atom.
</p>

## **Resources**
* [Everything you need to know to start with C.pdf](https://intranet.hbtn.io/rltoken/ZPQW6TjCWFeX9Y5pN33NVA)
* [Keywords and identifiers](https://intranet.hbtn.io/rltoken/CJPUuNKHthtvZgImtEVvXA)
* [integers](https://intranet.hbtn.io/rltoken/L62RbK4buoJpukZpGiYo4w)
* [Arithmetic Operators in C](https://intranet.hbtn.io/rltoken/WYLsq9-VLs8EkYxZepIdcg)
* [if…else statement](https://intranet.hbtn.io/rltoken/yuTsh0MB6AzC2L43xX9mJQ)
* [Relational operators](https://intranet.hbtn.io/rltoken/MVF9PuY_IAVw5fh79b6lww)
* [Logical operators](https://intranet.hbtn.io/rltoken/Uz1byju6ep3Ur0URB1Pt0A)
* [while loop in C](https://intranet.hbtn.io/rltoken/FxPxfoKS2AVjvrSGQQKY0g)
* [While loop](https://intranet.hbtn.io/rltoken/zqJKmSFQD8nlNSDnGcU7AQ)

## **Requirements**
<p>
- Allowed editors: vi, vim, emacs <br>
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 <br>
- All your files should end with a new line<br>
- A README.md file, at the root of the folder of this project, containing a description of the project<br>
- There should be no errors and no warnings during compilation<br>
- You are not allowed to use system<br>
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
</p>

-----------------------

## **Tasks**
- **Task 0: _Positive anything is better than negative nothing_**<br>
    [0-positive_or_negative.c](https://github.com/Spark4545/holbertonschool-shell/blob/master/io_redirection_and_filters/0-positive_or_negative.c) - asked for a script that __, here ``.

- **Task 1: _The last digit_**<br>
    [1-last_digit.c](https://github.com/Spark4545/holbertonschool-shell/blob/master/io_redirection_and_filters/1-last_digit.c) - asked for a script that __, here ``.

- **Task 2: _ I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game_**<br>
    [2-print_alphabet.c](https://github.com/Spark4545/holbertonschool-shell/blob/master/io_redirection_and_filters/2-print_alphabet.c) - asked for a script that __, here ``.

- **Task 3: _Name_**<br>
    [3-name](https://github.com/Spark4545/holbertonschool-shell/blob/master/io_redirection_and_filters/3-name) - asked for a script that _prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line_, here `gcc $CFILE -o cisfun`.

- **Task 4: _Hello, puts_**<br>
    [4-puts.c](https://github.com/Spark4545/holbertonschool-shell/blob/master/io_redirection_and_filters/4-puts.c) - asked for a script that _prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line_.
    ```c
    int main(void)
    {
        puts("\"Programming is like building a multilingual puzzle");
        return (0);
    }
    ```

- **Task 5: _Hello, printf_**<br>
    [5-printf.c](https://github.com/Spark4545/holbertonschool-shell/blob/master/io_redirection_and_filters/5-printf.c) - asked for a script that _prints exactly `with proper grammar, but the outcome is a piece of art,` , followed by a new line_.

    ```c
    int main(void)
    {
	    printf("with proper grammar, but the outcome is a piece of art,\n");
	    return (0);
    }
    ```

- **Task 6: _Size is not grandeur, and territory does not make a nation_**<br>
    [6-size.c](https://github.com/Spark4545/holbertonschool-shell/blob/master/io_redirection_and_filters/6-size.c) - asked for a script that _prints the size of various types on the computer it is compiled and run on_.

    ```c
    int main(void)
    {
	    printf("Size of a char: %zu byte(s)\n", sizeof(char));
	    printf("Size of an int: %zu byte(s)\n", sizeof(int));
	    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	    printf("Size of a float: %zu byte(s)\n", sizeof(float));

	    return (0);
    }
    ```

- **Advanced Task 7: _Intel_**<br>
    [100-intel](https://github.com/Spark4545/holbertonschool-shell/blob/master/io_redirection_and_filters/100-intel) - asked for a script that _generates the assembly code (Intel syntax) of a C code and save it in an output file_, here `gcc -S -masm=intel $CFILE`.

- **Advanced Task 8: _UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity_**<br>
    [101-quote.c](https://github.com/Spark4545/holbertonschool-shell/blob/master/io_redirection_and_filters/101-quote.c) - asked for a script that _prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error_.
    ```c  
    int main(void)
    {
	    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	    return (1);
    } 
    ```
