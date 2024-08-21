![images (1)](https://github.com/Morg92b/holbertonschool-simple_shell/blob/morgan/shell%20project%20.jpg)

# Simple Shell

## Introduction 
As part of our studies at Holberton School, my partner and I embarked on an exciting and challenging project: creating a simple shell from scratch. Working as a team, we explored core concepts of operating systems, process management, and command execution. This project involved writing C code, utilizing system calls. Through collaboration, we not only improved our technical skills but also learned valuable lessons in teamwork, debugging, and tackling complex problems together.

## List of allowed functions and system calls

* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

## Project requirements

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Your shell should not have any memory leaks
* No more than 5 functions per file
* All your header files should be include guarded
* Use system calls only when you need to

## What have we done exactly

* Write a README
* Write a man for your shell.
* You should have an AUTHORS file at the root of your repository   listing all individuals having contributed content to the repository.
* Write a beautiful code that passes the Betty checks
* Write a UNIX command line interpreter.
* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* The prompt is displayed again each time a command has been executed.
* The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
* The command lines are made only of one word. No arguments will be passed to programs.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors.
* You have to handle the “end of file” condition (Ctrl+D)
* Handle command lines with arguments
* Handle the PATH
* fork must not be called if the command doesn’t exist
* Implement the exit built-in, that exits the shell Usage: exit
* You don’t have to handle any argument to the built-in exit
* Implement the env built-in, that prints the current environment

## Flowchart
![images (2)](https://github.com/Morg92b/holbertonschool-simple_shell/blob/morgan/flowchart_simple_shell.png)
## Usage
#### To use this program,

#### Step 1: Clone the repo
```javascript
git clone https://github.com/Morg92b/holbertonschool-simple_shell.git
```
#### Step 2: Compile it with
```javascript
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
#### Step 3: Let's go run with
```javascript
./hsh
```
## How to use it
#### In order to use this shell, in a terminal, first run the program: ./hsh

#### It's will show you: (:D) 

#### Exemple 1:
```javascript
morgan@MO:~/holbertonschool-simple_shell$ ./hsh
(:D) pwd
/home/morgan/holbertonschool-simple_shell
```
#### Exemple 2:
```javascript
(:D) ls -a
.   .git     README.md      exec.c   func2.c  hsh     man_1_simple_shell  path.c    prompt_user.c
..  AUTHORS  env_environ.c  func1.c  func3.c  main.c  parse.c             prompt.c  shell.h
```
#### Exemple 3:
```javascript
(:D) /bin/ls
AUTHORS    env_environ.c  func1.c  func3.c  main.c              parse.c  prompt.c       shell.h
README.md  exec.c         func2.c  hsh      man_1_simple_shell  path.c   prompt_user.c
```
#### Exemple 4:
```javascript
(:D) echo AUTHORS
AUTHORS
```

#### Don't forget if u want exit u can :

```javascript
(:D) exit
```
```javascript
CTRL+C
```
```javascript
CTRL+D
```
## Files

| File name | Description |
| :---------------: |:---------------:|
| [main.c](https://github.com/Morg92b/holbertonschool-simple_shell/blob/main/main.c) | Main File, loop of the prompt |
| [env_environ.c](https://github.com/Morg92b/holbertonschool-simple_shell/blob/main/env_environ.c) | The function prints the environment variables  |
| [path.c](https://github.com/Morg92b/holbertonschool-simple_shell/blob/main/path.c) | Retrieve and check the PATH and command exist |
| [exec.c](https://github.com/Morg92b/holbertonschool-simple_shell/blob/main/exec.c) | Execute the command |
| [parse.c](https://github.com/Morg92b/holbertonschool-simple_shell/blob/main/parse.c) | The function splits a command line into tokens |
| [prompt.c](https://github.com/Morg92b/holbertonschool-simple_shell/blob/main/prompt.c) | The function displays a prompt and reads the user's input |
| [prompt_user.c](https://github.com/Morg92b/holbertonschool-simple_shell/blob/main/prompt_user.c) | The function reads input from stdin and returns it |
## Man page

You can check the [Man page](https://github.com/Morg92b/holbertonschool-simple_shell/blob/morgan/man_1_simple_shell) of the function here.
## Authors

- [Morgan Bouaziz](https://github.com/Morg92b)
- [Guillaume Forget](https://github.com/ForgetG)
