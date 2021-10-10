# Определение минимальной версии утилиты CMake
cmake_minimum_required(VERSION 3.1)
# названия проекта (необязательно, но желательно)
project(Sum)
# Команда на сборку из файла src/Sum.c SHARED-библиотеки
add_library(Sum SHARED src/Sum.c)
# Команда на сборку из файла tests/Sum.Tests.cpp приложения
add_executable(Sum.Tests tests/Sum.Tests.cpp)
# Указание зависимостей для приложения с тестами
target_link_libraries(Sum.Tests Sum gtest gtest_main pthread)