cmake_minimum_required(VERSION 3.0) #Проверка версии CMake.

project(Lab_4 VERSION 0.0.1 LANGUAGES C CXX) 

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE) #Создается переменная CMAKE_CONFIGURATION_TYPES со значением "Debug;Release" и меткой/разделом Configs, переменная сохраниется в специальном файле доступном из всех файлов,
if(NOT CMAKE_BUILD_TYPE) # проверка имеющихся у компилятора вариантов сборки
  set(CMAKE_BUILD_TYPE Release) #Если нет то устанавливаем Release
endif()

file(GLOB srcs "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB hdrs "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h*")

include_directories(include)
add_library(vectorlib STATIC 
		vectorlib/Vector.h
		vectorlib/Matrix.h 
		vectorlib/Vector.cpp
		vectorlib/Matrix.cpp
)
target_include_directories(vectorlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vectorlib)

add_executable(${PROJECT_NAME} ${srcs} ${hdrs}) #Создаем проект с именем из переменной ${vector}, в него добавляются файлы из переменных ${srcs} и ${hdrs}
target_link_libraries(${PROJECT_NAME} vectorlib) #Подключаем к проекту с именем ${vector} библиотеку с именем ${vectorlib}





