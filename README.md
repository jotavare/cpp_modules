> [!NOTE]  
> Under construction...

### CPP 00
- [(Life) Advice From The Creator of C++ ](https://www.youtube.com/watch?v=-QxI-RP6-HM) `Youtube`
- [31 nooby C++ habits you need to ditch](https://www.youtube.com/watch?v=i_wDa2AS_8w) `Youtube`
- [TLDR - CPP00 [42] (BR)](https://www.youtube.com/watch?v=TnrQMtxPeEg) `Youtube`
- [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md) `GitHub` `isocpp`
- [Beginning C++ Programming - From Beginner to Beyond](https://www.udemy.com/course/beginning-c-plus-plus-programming/) `Udemy` `Paid`
- [cppinsights](https://www.cppinsights.io/) - Check compiler changes. `Website`
- [godbolt](https://www.godbolt.org/) - Compiler comparisons, assembly inspection, ... `Website`
- [learncpp](https://www.learncpp.com/) - Covers everything from the absolute basics to advanced topics. It follows modern and best practice guidelines.
- [cppreference](www.cppreference.com/) - Best language reference out there.
- [The C++ Conference](https://www.youtube.com/user/CppCon/) `Youtube` `CppCon`
- [Welcome to C++ (101 videos)](https://www.youtube.com/watch?v=18c3MTX0PK0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb) `Youtube` `The Cherno`
- [C++ Weekly With Jason Turner](https://youtube.com/c/lefticus1/) - Weekly videos from Jason Turner. From basics to all the way to cursed code. `Youtube` `lefticus1`

### Flags
- Preprocessor file flag `-E`
- Assembly file flag `-S`

### Linux
- `export PROMPT_DIRTRIM=2`

### Software
- MinGW
- WSL
- Visual Studio
- LLVM, Clang Format, C++

### Rules
- Compile with `c++` + `-Wall -Wextra -Werror` + `-std=c++98`;
- Exercise directories will be named: `ex00`, `ex01`, ... , `exn`;
- Class names in UpperCamelCase format;
- Files containing class code will always be named according to the class name;
- Output messages must be ended by a `\n` character (except when explicitely stated otherwise);
- No coding style is enforced in the C++ modules;
- You are allowed to use almost everything from the standard library;

### Forbidden
- Can’t use any other external library;
- C++11 (and derived forms) and Boost libraries are forbidden;
- The following functions are forbidden too: `*printf()`, `*alloc()` and `free()`;
- Using namespace `<ns_name>` and friend keywords are forbidden;
- You are allowed to use the STL in the Module 08 and 09 only. That means:
  - No Containers (vector/list/map/and so forth);
  - No Algorithms (anything that requires to include the `<algorithm>` header);
- When you allocate memory (by using the `new` keyword), you must avoid memory leaks;
- From Module 02 to Module 09, your classes must be designed in the Orthodox Canonical Form (except when explicitely stated otherwise);
- Any function implementation put in a header file (except for function templates) means 0 to the exercise;
- You should be able to use each of your headers independently from others. They must include all the dependencies they need;
- You must avoid the problem of double inclusion by adding include guards;