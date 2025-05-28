cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(samples_antlr)

set(CMAKE_CXX_STANDARD 17)

set(TARGET translator)

# --- Настройка ANTLR Runtime ---
set(ANTLR_DIR "C:/temp/ANTLR/antlr-4.13.2")
set(ANTLR_INCLUDE_DIR "${ANTLR_DIR}/include/antlr4-runtime")  # Полный путь!
set(ANTLR_LIBRARY "${ANTLR_DIR}/lib/antlr4-runtime.lib")      # Полный путь!

# --- Пути к сгенерированным файлам парсера (lexer/parser/visitor) ---
set(GENERATED_PARSER_DIR "${CMAKE_CURRENT_SOURCE_DIR}/translator")  # Папка, куда ANTLR генерирует файлы

# --- Исходные файлы проекта ---
file(GLOB TARGET_SRC "*.cpp" "${GENERATED_PARSER_DIR}/*.cpp")  # Все .cpp + сгенерированные
file(GLOB TARGET_HD "*.h" "${GENERATED_PARSER_DIR}/*.h")        # Все .h + сгенерированные

# --- Создание исполняемого файла ---
add_executable(${TARGET} ${TARGET_SRC} ${TARGET_HD})

# --- Подключение заголовочных файлов ---
target_include_directories(${TARGET} PUBLIC
    ${ANTLR_INCLUDE_DIR}      # ANTLR Runtime
    ${GENERATED_PARSER_DIR}   # Сгенерированные файлы парсера
    ${CMAKE_CURRENT_SOURCE_DIR}  # Текущая папка (для своих заголовков)
)

# --- Подключение библиотек ---
target_link_libraries(${TARGET} ${ANTLR_LIBRARY})