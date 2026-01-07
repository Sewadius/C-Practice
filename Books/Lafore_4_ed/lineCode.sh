#!/bin/bash

total_lines=0

while IFS= read -r -d '' file; do
    lines=$(wc -l < "$file")
    total_lines=$((total_lines + lines))
    echo "$lines строк в $file"
done < <(find . -type f \( -name "*.cpp" -o -name "*.hpp" \) -print0)

echo "-----------------------------------"
echo "Всего строк кода: $total_lines"

