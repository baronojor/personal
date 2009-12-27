OBJS = t_lector_dcd.o lector_dcd.o sys_wrapers.o 

CC = gcc
FC = gfortran

EXECUTABLE = test_lector_dcd.exe

LINKFLAGS = -lgfortran
CMPFLAGS = -Wall -ggdb  -c

RM = rm -f



.PHONY: all clean cleanall rebuild objs

all: $(EXECUTABLE)

clean:
	$(RM) *.o

cleanall: clean
	rm $(EXECUTABLE)

rebuild: cleanall all

objs: $(OBJS)




$(EXECUTABLE): $(OBJS)
	$(CC) $^ $(LINKFLAGS) -o $@  

t_lector_dcd.o: t_lector_dcd.c ../../common.h ../../sys_wrapers.h ../../lector_dcd.h
	$(CC) $< $(CMPFLAGS)

lector_dcd.o: ../../lector_dcd.f
	$(FC) $< $(CMPFLAGS)

sys_wrapers.o: ../../sys_wrapers.c
	$(CC) $< $(CMPFLAGS)


