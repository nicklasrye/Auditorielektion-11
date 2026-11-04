
add_library(polish_calculator polish_calculator.c)
target_include_directories(polish_calculator PUBLIC .)

add_executable(calculator calculator.c)
target_link_libraries(calculator polish_calculator)

add_executable(powerof powerof.c)

add_executable(rec_array rec_array.c)

add_executable(live live.c)
