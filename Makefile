CC=gcc
FORTRAN=f95


all:
	$(CC) -c ./syslog.c
	$(FORTRAN) -u ./main.f90 ./syslog.o

clean:
	rm -fr ./syslog.o a.out
