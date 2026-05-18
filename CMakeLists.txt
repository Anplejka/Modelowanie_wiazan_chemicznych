cmake_minimum_required(VERSION 4.1)
project(Modelowanie_wiazan_chemicznych C)

set(CMAKE_C_STANDARD 11)


add_executable(Modelowanie_wiazan_chemicznych
        main.c
        data/data.c
        chemistry/chemistry.c
        simulation/simulation.c
)

