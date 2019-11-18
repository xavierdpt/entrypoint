1 Introduction

1.1 Getting started

The basic idea of this project is to associate executable content to what is written in the book.

This section illustrate the basic structure that the executable content will conform to.

The folder `1.1.getting_started` contains two files `program.c` and `run.bsh`.

`program.c` is the source code for the executable content.

`run.bsh` is a script which compiles and run the program.

The executable content associated to this section is a simple "hello world" program.

To run it, follow these steps:
```
cd 1.1.getting_started
./run.bsh
```

For some sections, it does not make sense to create executable content.

For other sections, it make sense to create several diffent programs. When this happens, additional subfolders are created for each subprogram.

Top sections usually do not have any associated exectutable content.

1.2 Standards and Portability

1.2.1 ISO C

The executable content for this section illustrates how to use the `--ansi`.

The effects of the `--ansi` option are quite large. The `compare.bsh` script preprocesses `program.c` with and without the `--ansi` option, then launches `vim` in diff mode to compare the results.

You can use the following keys to exit `vim`: `:qa`.

1.2.2 POSIX (The Portable Operating System Interface)

1.2.2.1 POSIX Safety Concepts

This section is documentation about the documentation.

There is some potential to illustrate the various unsafe functions with executable content, but this is quite hard to achieve.

MT-Safe: Thread-Safe functions
AS-Safe: Async-Signal-Safe functions
AC-Safe: Async-Cancel-Safe functions
MT-Unsafe, AC-Unsafe, AC-Unsafe
Preliminary

1.2.2.2 Unsafe Features

lock
corrupt
heap
dlopen
plugin
i18n
timer

1.2.2.3 Conditionally Safe Features

init
race
const
sig
term

1.2.2.4 Other Safety Remarks

locale
env
hostid
sigintr
fd
mem
cwd
!posix
:identifier
/condition

1.2.3 Berkeley Unix

No executable content is available for this section.

1.2.4 SVID (The System V Interface Description)

No executable content is available for this section.

1.2.5 XPG (The X/Open Portability Guide)

No executable content is available for this section.

1.3 Using the Library

1.3.1 Header Files

Basically, this says you need to use #include to include header files and that you may include them in any order and multiple times with no adversary side effects.

`1.1.getting_started` shows how to include `stdio.h` to have access to get the ability to use the `printf` function.

1.3.2 Macro Definitions of Functions

Some functions are also defined as macros.

No executable content is available for this section.

1.3.3 Reserved Names

The library reserves a lot of name patterns and there is no way to automatically detect whether one of the reserved name is defined by a program.

E.g. `something_t` in a custom program would be a reserved name for types, but such a program would compile fine with no warning.

See example in `1.3.3.reserved_names` to verify that no warnings are generated.

1.3.4 Feature Test Macros

Default is similar to defining _DEFAULT_SOURCE.

The `-ansi` compiler option is the most restrictive.

Additional capabilities can be enabled with feature test macros.

The example in `1.3.4.feature_test_macros` preprocesses hello world with various feature test macros and outputs them in `*.E` files.

You may use `diff` to compare each of these files.

1.4 Roadmap to the Manual

No executable content is available for this section.
