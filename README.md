<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_cpp.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/languages/top/jotavare/cpp_modules?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/github/last-commit/jotavare/cpp_modules?color=%2312bab9&style=flat-square" />
	<a href='https://www.linkedin.com/in/joaoptoliveira' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
	<a href='https://profile.intra.42.fr/users/jotavare' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#rules">Rules</a> •
	<a href="forbidden">Forbidden</a> •
	<a href="#contributing">Contributing</a> •
	<a href="#license">License</a>
</p>

## ABOUT
| Resources | Description |
| :-- | :-- |
| **[References](https://github.com/jotavare/42-resources/tree/main?tab=readme-ov-file#cpp-modules-00-09)** | All the references i used to study C++. |

| Modules | Description |
| :-- | :-- |
| **[CPP 00](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules)** | Understand the specificities of the language when compared to C. |
| **[CPP 01](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules)** | Memory allocation, reference, pointers to members and the usage of the switch. |
| **[CPP 02](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules)** | Ad-hoc polymorphism, overloads and orthodox canonical classes. |
| **[CPP 03](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules)** | Inheritance. |
| **[CPP 04](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules)** | Subtype polymorphism, abstract classes and interfaces. |
| **[CPP 05](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules)** | Try/Catch and Exceptions. |
| **[CPP 06](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules)** | Different casts. |
| **[CPP 07](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules)** | Templates. |
| **[CPP 08](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules)** | Templated containers, iterators and algorithms. |
| **[CPP 09](https://github.com/jotavare/cpp_modules/tree/main/cpp_modules)** | Containers. |

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

## CONTRIBUTING

If you find any issues or have suggestions for improvements, feel free to fork the repository and open an issue or submit a pull request.

## LICENSE

This project is available under the MIT License. For further details, please refer to the [LICENSE](https://github.com/jotavare/cpp_modules/blob/master/LICENSE) file.
