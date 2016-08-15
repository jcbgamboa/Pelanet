# Pelanet

# What?

Pelanet is an implementation of Neural Networks algorithms in C++
using some of the Boost libraries.

[is <- is going to be]


# Why?

The goal is to have an easy to understand implementation of the most
common Neural Networks algorithms. The idea is to use these
implementation to explain some topics on Neural Networks to people who
want to learn about them.

## "Easy to understand" in C++?

Another of the goals is to, while implementing stuff, get acquainted
to some of the Boost libraries.

[come on... C++ is not that bad =) ]

# How?

## Building...

[Say it needs boost -- say where it is expected to be.]

[Say one will need to build Boost.Test as a dynamic library. Don't
forget the `BOOST_TEST_DYN_LINK` flag (is this needed?) -- I failed to
build Boost.Test in Windows... probably won't use it]

Probably, to install boost (compiled stuff are needed for testing),
the best to do is:
[was the only way it seemed to have worked for me]

./bootstrap.sh
./b2 --with-test install


## Running...



