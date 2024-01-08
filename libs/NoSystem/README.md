# no_system

A iOS/iPadOS/WASM drop-in system() replacement for built-in use-cases

## What does it do?

no_system provides a way to execute other utilities that have been modified to use no_system.
It's similar in principle to ios_system by Nicolas Holzschuch, though avoids a few pitfalls:

- Going through dyld doesn't drag the Objective-C runtime as a dependency into the library chain
- Written in pure C++
- Easily portable to other environments with similar drawbacks with regards to spawning processes

The result: statically linked "programs" can be executed as if they were called through system().

## License

no_system is licensed under the BSD 3-clause license.
