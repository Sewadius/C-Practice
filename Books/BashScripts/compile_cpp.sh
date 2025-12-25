#!/bin/bash

# Проверяем, передан ли аргумент (каталог)
if [ $# -eq 0 ]; then
    echo "Использование: $0 <каталог>"
    exit 1
fi

# Сохраняем переданный каталог в переменную
TARGET_DIR="$1"

# Проверяем, существует ли каталог и является ли он каталогом
if [ ! -d "$TARGET_DIR" ]; then
    echo "Ошибка: каталог '$TARGET_DIR' не существует или не является каталогом."
    exit 1
fi

echo "Скрипт запущен для каталога: $TARGET_DIR"

# Переходим в указанный каталог
cd "$TARGET_DIR" || {
    echo "Ошибка: не удалось перейти в каталог '$TARGET_DIR'."
    exit 1
}

# Ищем все .cpp-файлы в каталоге
CPP_FILES=(*.cpp)

# Проверяем, есть ли хотя бы один .cpp-файл
if [ ! -e "${CPP_FILES[0]}" ]; then
    echo "В каталоге '$TARGET_DIR' нет файлов с расширением .cpp"
    exit 0
fi

# Перебираем все .cpp-файлы
for cpp_file in "${CPP_FILES[@]}"; do
    # Извлекаем имя файла без расширения .cpp
    filename=$(basename "$cpp_file" .cpp)
    
    # Выводим сообщение о компиляции
    echo "Компилирую файл: $cpp_file в $filename"
    
    # Выполняем компиляцию
    g++ "$cpp_file" -o "$filename" -lncurses
    
    # Проверяем результат компиляции
    if [ $? -eq 0 ]; then
        echo "Успешно скомпилировано: $filename"
    else
        echo "Ошибка при компиляции файла: $cpp_file"
    fi
done
