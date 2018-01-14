[![Build Status](https://travis-ci.org/experimental-software/csort.svg?branch=master)](https://travis-ci.org/experimental-software/csort)

# csort
`csort` is a Unix command-line tool for sorting integer numbers. It is written in the C programming language for academic purposes.

## Usage
```
$ csort 7 3 6 4 1
1 3 4 6 7
$ csort -r 7 3 6 4 1
7 6 4 3 1
```

## Getting started
### (1) Install dependencies
#### Ubuntu
```
sudo apt-get install git
sudo apt-get install g++
sudo apt-get install build-essential
sudo apt-get install eclipse eclipse-cdt # optional
sudo apt-get install ruby

gem install --user-install ceedling
```

### (2) Download the project
```
git clone https://github.com/experimental-software/csort.git
cd csort
```

### (3) Build the project
```
ceedling clobber test:all release
./build/release/csort --help
```

### (4) Run the tests
#### Run an individual test
```
ceedling clobber test:test_BubbleSort
```
#### Run all tests
```
ceedling clobber test:all
```

## References
- [Test-Driven Development for Embedded C -- James W. Grenning](https://pragprog.com/book/jgade/test-driven-development-for-embedded-c)
- [C von A bis Z -- Jürgen Wolf](http://openbook.rheinwerk-verlag.de/c_von_a_bis_z)
- [Step-by-Step into Argp -- Ben Asselstine](https://download-mirror.savannah.gnu.org/releases/argpbook/step-by-step-into-argp.pdf)
- Testing tools: [Unity](http://www.throwtheswitch.org/unity), [Ceedling](http://www.throwtheswitch.org/ceedling)
- [[Video] How to start using Travis CI with your GitHub hosted code in 5 minutes -- Onwwward](https://www.youtube.com/watch?v=FEXY1ZP-sBs)
- [[Video] Hello World C Project Eclipse](https://www.youtube.com/watch?v=ny1RbJNgxhc)
