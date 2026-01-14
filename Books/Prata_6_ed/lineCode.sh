#!/bin/bash

total_lines=0
declare -A file_lines  # Ассоциативный массив для хранения файлов и количества строк

# Сбор информации о файлах
while IFS= read -r -d '' file; do
    lines=$(wc -l < "$file")
    total_lines=$((total_lines + lines))
    file_lines["$file"]=$lines
done < <(find . -type f \( -name "*.cpp" -o -name "*.hpp" \) -print0)

# Сортировка и вывод файлов
{
    for file in "${!file_lines[@]}"; do
        printf "%d %s\n" "${file_lines[$file]}" "$file"
    done
} | sort -rn | while read lines file; do
    echo "$lines строк в $file"
done

echo "-----------------------------------"
echo "Всего строк кода: $total_lines"

