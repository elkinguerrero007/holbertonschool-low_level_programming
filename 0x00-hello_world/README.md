# **holbertonschool-low_level_programming._**

[gif](https://allhacked.com/up/2019/03/hello-world.gif)


## **_Resources._**  👌

### **_Read or watch:_*  👈

>> * [Everything you need to know to start with C.pdf](https://intranet.hbtn.io/rltoken/d6TBbj0HA4EvnmpqvEz68Q)
>> * [Dennis Ritchie](https://intranet.hbtn.io/rltoken/vY9KI1Ai38BUuydEfadtaA)
>> * [“C” Programming Language: Brian Kernighan](https://intranet.hbtn.io/rltoken/f5nVwIVoNRrnddbX-5h5rw)
>> * [Why C Programming Is Awesome](https://intranet.hbtn.io/rltoken/J7yAaPGVuPoJI4iP1DuIPw)
>> * [Learning to program in C part 1](https://intranet.hbtn.io/rltoken/AicyjqLinWdA9qxKsXBKjg)
>> * [Learning to program in C part 2](https://intranet.hbtn.io/rltoken/1qtDStnOrOjrVseFa3jngA)
>> * [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/qM-SOqtf8ZnGxVtVWchAfg)
>> * [Betty Coding Style](https://intranet.hbtn.io/rltoken/8c-wkUvvmuA_d5s4ktmnEw)
>> * [Hash-bang under the hood](https://intranet.hbtn.io/rltoken/7oODGrfLgAJJzoCbfBap3Q)
>> * [Linus Torvalds on C vs. C++](https://intranet.hbtn.io/rltoken/8rYFkn82I0QlSygvC0u2Jw)

## **_man or help:_**   📑

>> * gcc
>> * printf (3)
>> * puts
>> * putchar

### **_Betty linter:_**  👈


>> * [Clone Betty repository](https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ)
>>    
>> * into Betty:
>> * Install the linter with sudo ./install.sh
>> * emacs or vi a new file called betty, and copy the script below:
>> 
~~~~

#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

~~~~

>> * Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
>> * Move the betty file into /bin/ directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

## **_Built with:_**  🛠️

>> * Ubuntu 20.04 LTS
>> 
>> * Emacs editor
>> * betty-style
>> * `gcc`, using the options `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`
