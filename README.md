<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_cpp.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-ongoing-orange" />
	<img src="https://img.shields.io/github/languages/top/jotavare/cpp_modules?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/github/last-commit/jotavare/cpp_modules?color=%2312bab9&style=flat-square" />
	<a href='https://www.linkedin.com/in/joaoptoliveira' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
	<a href='https://profile.intra.42.fr/users/jotavare' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

<p align="center">
	<a href="#cpp-00">CPP 00</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#license">License</a>
</p>

> [!NOTE]  
> Under construction...

## CPP 00
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

## NORMINETTE
At 42 School, it is expected that almost every project is written following the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators and variable-length arrays are allowed;
- Each function must be a maximum of 25 lines, not counting the function's curly brackets;
- Each line must be at most 80 columns wide, with comments included;
- A function can take 4 named parameters maximum;
- No assigns and declarations in the same line (unless static);
- You can't declare more than 5 variables per function;
- ...
```

* [42 Norms](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) - Information about 42 code norms. `PDF`
* [Norminette](https://github.com/42School/norminette) - Tool by 42, to respect the code norm. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`

## LICENSE
<p>
This work is published under the terms of <a href="https://github.com/jotavare/jotavare/blob/main/LICENSE">42 Unlicense</a>.
</p>
