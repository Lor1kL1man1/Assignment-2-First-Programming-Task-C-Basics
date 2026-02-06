#!/bin/bash

# Compile
g++ -std=c++17 main.cpp -o main
if [ $? -ne 0 ]; then
  echo "❌ Compilation failed"
  exit 1
fi

# Test 1: Check if program runs
echo -e "John Doe\n20\nComputer Engineering" | ./main > output.txt

grep -q "John Doe" output.txt || exit 1
grep -q "20" output.txt || exit 1
grep -q "Computer Engineering" output.txt || exit 1

echo "✅ All tests passed"
exit 0
