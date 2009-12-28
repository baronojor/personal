OBJS = t_funciones.o funciones.o

CC = gcc
FC = gfortran

EXECUTABLE = test_funciones.exe

LINKFLAGS = -lm
CMPFLAGS = -Wall -ggdb  -c

RM = rm 

VPATH = ../../


.PHONY: all clean cleanall rebuild objs

all: $(EXECUTABLE)

clean:
	-$(RM) *.o

cleanall: clean
	-$(RM) $(EXECUTABLE)

rebuild: cleanall all

objs: $(OBJS)




$(EXECUTABLE): $(OBJS)
	$(CC) $^ $(LINKFLAGS) -o $@  


t_funciones.o: t_funciones.c funciones.h common.h
	$(CC) $^ $(CMPFLAGS) 

funciones.o: funciones.c common.h
	$(CC) $^ $(CMPFLAGS) 

