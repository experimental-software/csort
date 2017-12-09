# csort
`csort` is a Unix command-line tool for sorting numbers. It is written in the C programming language for acadamic purposes.

## Usage
```
$ csort 7 3 6 4 1
1 3 4 6 7
$ csort -r 7 3 6 4 1
7 6 4 3 1
$ csort -a bubble_sort 7 3 6 4 1
1 3 4 6 7
```

## Development
- [What IDEs are available for Ubuntu?](https://askubuntu.com/questions/48299/what-ides-are-available-for-ubuntu)
- [Ceedling in Eclipse](http://www.throwtheswitch.org/eclipse/)
### Ubuntu
```
sudo apt-get install g++
sudo apt-get install build-essential
sudo apt-get install eclipse eclipse-cdt g++

gem install ceedling
```

## Build the project
```
ceedling clobber test:all release
./build/release/csort
```

## Run the tests
### Run an individual test
```
ceedling clobber test:test_BubbleSort
```
### Run all tests
```
ceedling clobber test:all
```

## References
- [Hello World C Project Eclipse](https://www.youtube.com/watch?v=ny1RbJNgxhc)
- [Step-by-Step into Argp](https://download-mirror.savannah.gnu.org/releases/argpbook/step-by-step-into-argp.pdf)
- [Test-driven development (TDD) in C using Eclipse and CUT (C Unit Testing) -- Prof. Riccardo Poli](https://www.youtube.com/watch?v=y-tBjj9OmdI)
- [Cover image for Test Driven Development for Embedded C
Test Driven Development for Embedded C](https://www.safaribooksonline.com/library/view/test-driven-development/9781941222997/)
- Sorting alogithms
  - C von A bis Z -- Jürgen Wolf, p. 766 ff.
- Writing unit tests for C code with the Unity test framework
  - http://www.throwtheswitch.org/unity
  - [Test Driven Development for Embedded C](https://media.pragprog.com/titles/jgade/toc.pdf), [chapter 2.2](https://www.safaribooksonline.com/library/view/test-driven-development/9781941222997/f_0024.html), [chapter A2](https://www.safaribooksonline.com/library/view/test-driven-development/9781941222997/f_0154.html).
- Build tool: http://www.throwtheswitch.org/ceedling
- [Tasking cycle -- Fred George](https://twitter.com/Janux_DE/status/888837134811103232)
  