#!/usr/bin/env bash
find ./include ./single_include -type f \( -iname \*.cpp -o -iname \*.h \) | xargs clang-format -style="{ColumnLimit : 100}" -i
