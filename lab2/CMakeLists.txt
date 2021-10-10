# Определение минимальной версии утилиты CMake
cmake_minimum_required(VERSION 3.1)
# названия проекта (необязательно, но желательно)
project(Lab2)
# Команда на сборку из файлов SHARED-библиотек
add_library(Log2 SHARED src/Log2.c)
add_library(GCD SHARED src/GCD.c)
# Команда на сборку из файла соответствующего приложения
# Формат такой: <название исполняемого файла> <файл для компиляции>
add_executable(Log2.Tests tests/Log2.Tests.cpp)
add_executable(GCD.Tests tests/GCD.Tests.cpp)
add_executable(main src/main.c)
# Указание зависимостей для приложения
target_link_libraries(Log2.Tests Log2 gtest gtest_main pthread)
target_link_libraries(GCD.Tests GCD gtest gtest_main pthread)
target_link_libraries(main GCD Log2 pthread)