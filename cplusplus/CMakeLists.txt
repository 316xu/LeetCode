cmake_minimum_required(VERSION 3.7)
project(cplusplus)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp ReserveInteger.h PalindromeNumber.h LongestCommonPrefix.h ValidParentheses.h MergeTwoSortedLists.h RemoveDuplicates.h RemoveElement.h ImplementStrStr.h)
add_executable(cplusplus ${SOURCE_FILES})