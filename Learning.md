# First steps
The thing with this project is i was very much into Operating Systems back when we had that course in our academics. I wanted to reimplement the entire UNIX Operating System, xv6, but the hardware stuff is too much for me and I realized I like interacting with the kernel APIs.

I wanted to build this shell from ground up by myself but lacked so much context about parsers, grammars etc etc. I'll do it now though. 

# The Core Approach

## What is a shell
The basic definition of shell is that it is a `program` that takes your `commands` and `tells computer what to do` and then `returns a response back to you`.

So in the definition we got the main core functionality of a shell.
1. Take in commands
2. Make Computer Understand those commands.
3. Execute those commands
4. Give back results

## Parsing

Inorder for computer to execute commands, it must know what the commands are and what the arguments are. This is typically done by a parser, by building an AST (Abstract Syntax Tree) and going through that tree to execute the commands.

Essentially there are two types of parsers, 
1. `Top-Down Parser`
2. `Bottom-Up Parser`

Which one will we use? Top-Down. 
Why? because shell commands have relatively simple grammar and bottom up parsers are used when the grammar structure is deeply nested and complex.


