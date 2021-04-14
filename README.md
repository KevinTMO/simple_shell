# **Simple Shell**

### Introduction

This is an introduction project given by [Holberton School](https://www.holbertonschool.com) for us to understand how a shell works. In this project we are creating a simple shell using a limited amount of functions. Among the concepts that we should learn and understand about this project are:

           - Environment Variables
           - System calls functions (fork, exec, exit, wait, ...)
           - Creating PID for commands

### Usage of this program:

First, you need to clone this repo to your local repo like this:

` git clone https://github.com/KevinTMO/simple_shell.git `

After getting the repo (you will get the copy with all the files from this repo), you need to compile all using this:

` gcc -Wall -Werror -Wextra -pedantic *.c -o hsh `

**Note**: You can play with the output and use any kind of output name for your file, this was just the way for Holberton.

### Starting the shell

Ok, so we got everything done to start using our shell. You just need to execute the shell by writing this:

` /home/username:~ ./hsh `

This will start the shell program running. And now we can test many things. The first thing that you should see is something like this:

` /home/vagrant/cmd_testing$  `

This is telling you to start writing your commands! So, write something. Like, now. Please... so I did it first to show you how:

```
  /home/vagrant/cmd_testing$ echo hello world
  hello world
  /home/vagrant/cmd_testing$
```

Everything looking fine, for now. Hope nothing get into a hell of a Null or something worse but yeah, you can start playing with out simple shell program and see how many bu... **_cough_** - - things it got.

### Commands and examples

So, our shell can run almost everything. Not, EVERTHING, but kind of. This is because we made a way to access some build-ins commands from the terminal (the real one with steroids) and use them in our shell. Still, we worked on some of ours and this is the list of them:

- cd - this command will change from on directories to another like this:

```
/home/vagrant/cmd_testing$ cd moretesting
/home/vagrant/cmd_testing/moretesting$
```
**Note**: since we are using built-ins too, we can use cd without any problem but yeah, still we got it.

- echo - this will print words to stdout (basically will print words to your terminal). We already used this before like this:

```
  /home/vagrant/cmd_testing$ echo hello world
  hello world
  /home/vagrant/cmd_testing$
```
**Note**: this can use global variables like $PATH, $HOME, $SHELL so use them and play with them. If it can't find it, is because we didn't add it. Sorry. We tried at least. <3
- dir - 
- environ - this is a lovely command that will showyou the global variables that we got stored in the terminal. Use it so you can get to know each other, they are yours after all. Oh, I almost forgot. This is how you use it:

```
  /home/vagrant/cmd_testing$ environ
   Environment Variables:
   HOME=/home/vagrant/cmd_testing
   PWD=/home/vagrant/cmd_testing
   SHELL=/home/vagrant/cmd_testing
  /home/vagrant/cmd_testing$
```

This is the last variable (it didn't want to show up without messing things). Markdowns kind of problems. Anyway, this is how it looks:

` PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games
`

### Using built-ins commands

So, like we said, we got a code running to use external commands like **ls** and arguments like **-l**. You can even use **rm** if you want. To use them is straight forward so I will just use one like **ls** with and argument... let's say, Hmm, **-la?** Yeah, let's GO!

**Note**: If you don't know about **rm** I will just say you can remove things with that. Get more info [here](https://www.computerhope.com/unix/urm.htm).

```
 /home/vagrant/cmd_testing$ ls -la
total 72
drwxrwxr-x  3 vagrant vagrant  4096 Apr 14 17:35 .
drwxr-xr-x 20 vagrant vagrant  4096 Apr 14 16:56 ..
-rw-rw-r--  1 vagrant vagrant  1864 Apr 14 02:59 auxfunc.c
-rw-rw-r--  1 vagrant vagrant  1268 Apr 14 15:29 moreauxfun.c
drwxrwxr-x  2 vagrant vagrant  4096 Apr 13 20:02 Original
-rw-rw-r--  1 vagrant vagrant  2033 Apr 14 03:05 _printf.c
-rw-rw-r--  1 vagrant vagrant    31 Apr 14 16:56 README.md
-rwxrwxr-x  1 vagrant vagrant 18159 Apr 14 17:35 shell
-rw-rw-r--  1 vagrant vagrant  3784 Apr 14 03:10 shellFun.c
-rw-rw-r--  1 vagrant vagrant  1083 Apr 14 06:17 shell.h
-rw-rw-r--  1 vagrant vagrant  1856 Apr 14 15:33 shellSource.c
-rw-rw-r--  1 vagrant vagrant   300 Apr 14 02:25 varGlobals.h
-rw-rw-r--  1 vagrant vagrant  3301 Apr 14 02:33 working_shellFun.c
-rw-rw-r--  1 vagrant vagrant  1345 Apr 14 02:33 working_shellSource.c
 /home/vagrant/cmd_testing$
```

### Exiting the shell

So now that we are tired of playing with the terminal (that was pretty fast) then, how do we exit? So basically we got two ways of doing it if you don't just click on that "x" in the corner of your terminal bar program. This two ways are:

- exit
- ctrl+D

To use exit to, well, exit we need to just type "exit" and that's it:

```
  /home/username$ exit
  /home/regular-terminal$ 
```
**Note**: Just for fun we added a string like "shutting down..." after you exit.

Now to use ctrl+D is kind of complicated. Yeah, you need to use two fingers to type ctrl and D-key at the same time. Kind of hard but you will get used to it. It will be like this:

```
  /home/username$ --invisible ctrl+D input thing... just assume it exist.--
  /home/regular-terminal$ 
```

So this is it. It has been an amazing adventure and we got good memories together but this is my GOODBYE. Thanks for using our shell. And finding those little things running around. Until the next time, BYE!

![alt-text](https://media.giphy.com/media/LmNwrBhejkK9EFP504/giphy.gif)