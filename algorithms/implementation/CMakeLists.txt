project(HackerRank/Algorithms/Implementation C)

add_executable(angry-professor angry-professor.c)
add_executable(sherlock-and-the-beast sherlock-and-the-beast.c)
add_executable(utopian-tree utopian-tree.c)
add_executable(find-digits find-digits.c)

add_executable(sherlock-and-squares sherlock-and-squares.c)
target_link_libraries(sherlock-and-squares m)
