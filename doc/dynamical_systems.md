# Dynamical Systems and Autonomous Vehicles

In this document, I will record some important methods, external resources and my own interpretations
of any theoretical models useful for inference concerning motion of vehicles, measurement of such motion, 
and autonomous systems governing such motion.

# Notes and ToDo

This section contains all kinds of unstructured notes, links to reference material etc.

## General

As an initial guess, I will need to cover at least the following: 

* Dynamical systems in general
* (Hidden) Markov models and other approaches to modelling the state 
* Kalman filters and their extensions / modification
* Particle filters

As of now, I have no coherent picture of which theoretical frameworks to consider when researching the motion 
of vehicles. In this document, I hope to gradually arrive at some kind of an understanding of these concepts. 

## State-Space Models

FIXME: why is this the appropriate context for the discussion?

### Brockwell and Davis

FIXME: this is from Brockwell & Davis, need to cross-check other sources

"A time series that can be represented in linear state-space form." That is,
the series `{Y_t, t = 1, 2, 3, ...}` satisfies the form `Y_t = G_t * X_t + W_t`
where `X_(t+1) = F_t * X_t + V_t`.


So what does this mean?

* At any given moment, we will observe the corresponding `Y_t`. The state `X_t` is (or at least can be)
  unobservable directly.
* The next item `X_t` in the state sequence is obtained from the previous one by multiplication
  by a known matrix, plus a noise vector
* Subsequently, the observation `Y_t` is the result of applying a linear transformation to `X_t` and
  adding a noise vector.
* We will be interested in the state `X_t`. 

### The MIT lecture notes

[These lecture notes](https://ocw.mit.edu/courses/aeronautics-and-astronautics/16-30-feedback-control-systems-fall-2010/lecture-notes/MIT16_30F10_lec05.pdf) 
seem potentially useful.

### Grimmett and Stirzaker

This book does not talk about dynamical systems as such, but it does develop some theory relating to Markov Chains. 
Could be useful stuff to read as well.

### The Wikipedia article

https://en.wikipedia.org/wiki/Kalman_filter

Seems to contain pretty good stuff and also discusses the conceptual relationship between dynamical systems, 
Markov Chains and Kalman filtering. Furthermore, recursive Bayesian estimation is considered.

The article contains a couple of pretty nice examples, see "Example application" and "Example application, technical" 
for details.

### The Coursera Robotics Course

The Coursera course [Robotics: Estimation and Learning](https://www.coursera.org/learn/robotics-learning/) seems 
to contain pretty good material on the topic. 
