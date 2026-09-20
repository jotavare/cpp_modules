<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_cpp.png">
</p>

<p align="center">
	<a href='https://www.linkedin.com/in/jotavare' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-0A66C2?style=flat-square&logo=data:image/svg%2bxml;base64,PHN2ZyByb2xlPSJpbWciIHZpZXdCb3g9IjAgMCAyNCAyNCIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48dGl0bGU+TGlua2VkSW48L3RpdGxlPjxwYXRoIGZpbGw9IndoaXRlIiBkPSJNMjAuNDQ3IDIwLjQ1MmgtMy41NTR2LTUuNTY5YzAtMS4zMjgtLjAyNy0zLjAzNy0xLjg1Mi0zLjAzNy0xLjg1MyAwLTIuMTM2IDEuNDQ1LTIuMTM2IDIuOTM5djUuNjY3SDkuMzUxVjloMy40MTR2MS41NjFoLjA0NmMuNDc3LS45IDEuNjM3LTEuODUgMy4zNy0xLjg1IDMuNjAxIDAgNC4yNjcgMi4zNyA0LjI2NyA1LjQ1NXY2LjI4NnpNNS4zMzcgNy40MzNjLTEuMTQ0IDAtMi4wNjMtLjkyNi0yLjA2My0yLjA2NSAwLTEuMTM4LjkyLTIuMDYzIDIuMDYzLTIuMDYzIDEuMTQgMCAyLjA2NC45MjUgMi4wNjQgMi4wNjMgMCAxLjEzOS0uOTI1IDIuMDY1LTIuMDY0IDIuMDY1em0xLjc4MiAxMy4wMTlIMy41NTVWOWgzLjU2NHYxMS40NTJ6TTIyLjIyNSAwSDEuNzcxQy43OTIgMCAwIC43NzQgMCAxLjcyOXYyMC41NDJDMCAyMy4yMjcuNzkyIDI0IDEuNzcxIDI0aDIwLjQ1MUMyMy4yIDI0IDI0IDIzLjIyNyAyNCAyMi4yNzFWMS43MjlDMjQgLjc3NCAyMy4yIDAgMjIuMjIyIDBoLjAwM3oiLz48L3N2Zz4K&logoColor=white'/></a>
	<a href='https://profile.intra.42.fr/users/jotavare' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

## ABOUT
| Modules | Description | Status |
| :-- | :-- | :-- |
| **[CPP 00](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules/cpp_00)** | Understand the specificities of the language when compared to C. | Done |
| **[CPP 01](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules/cpp_01)** | Memory allocation, reference, pointers to members and the usage of the switch. | Done |
| **[CPP 02](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules/cpp_02)** | Ad-hoc polymorphism, overloads and orthodox canonical classes. | Done |
| **[CPP 03](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules/cpp_03)** | Inheritance. | Done |
| **[CPP 04](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules/cpp_04)** | Subtype polymorphism, abstract classes and interfaces. | Done |
| **CPP 05** | Try/Catch and Exceptions. | Pending |
| **CPP 06** | Different casts. | Pending |
| **CPP 07** | Templates. | Pending |
| **CPP 08** | Templated containers, iterators and algorithms. | Pending |
| **CPP 09** | Containers. | Pending |

> [!NOTE]
> For the rest of the projects and exams in the cursus, <a href="https://github.com/jotavare/42-common-core">click here</a>.

## USAGE

Each exercise is self-contained and builds on its own.

```bash
cd cpp_modules/cpp_02/exercices/ex00
make
./canonical
```

## RULES
```
- Compile with `c++` + `-Wall -Wextra -Werror` + `-std=c++98`;
- Exercise directories will be named: `ex00`, `ex01`, ... , `exn`;
- Class names in UpperCamelCase format;
- Files containing class code will always be named according to the class name;
- Output messages must be ended by a `\n` character (except when explicitly stated otherwise);
- No coding style is enforced in the C++ modules;
- You are allowed to use almost everything from the standard library;
```

## FORBIDDEN
```
- Can’t use any other external library;
- C++11 (and derived forms) and Boost libraries are forbidden;
- The following functions are forbidden too: `*printf()`, `*alloc()` and `free()`;
- Using namespace `<ns_name>` and friend keywords are forbidden;
- You are allowed to use the STL in the Modules 08 and 09 only. That means:
  - No Containers (vector/list/map/and so forth);
  - No Algorithms (anything that requires to include the `<algorithm>` header);
- When you allocate memory (by using the `new` keyword), you must avoid memory leaks;
- From Module 02 to Module 09, your classes must be designed in the Orthodox Canonical Form (except when explicitly stated otherwise);
- Any function implementation put in a header file (except for function templates) means 0 to the exercise;
- You should be able to use each of your headers independently from others. They must include all the dependencies they need;
- You must avoid the problem of double inclusion by adding include guards;
```
