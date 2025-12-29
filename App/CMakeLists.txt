# Possbility 1
# add_executable(edubeoperator main.cpp )
# target_link_libraries(edubeoperator PRIVATE Stack)

#Possibility 2

add_executable(edubeoperator)

target_sources(edubeoperator
    PRIVATE
        main.cpp
)
target_link_libraries(edubeoperator 
    PRIVATE 
        Stack)