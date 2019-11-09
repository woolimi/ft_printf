make re
gcc  main.c test_basic.c test_x.c test_u.c test_c.c test_s.c test_p.c test_d.c libftprintf.a
#valgrind  --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt ./a.out
./a.out
