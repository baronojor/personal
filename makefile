OBJS = main.o lector_dcd.o sys_wrapers.o atomlist.o

CC = gcc
FC = /opt/intel/fc/10.1.022/bin/ifort

EXECUTABLE = analisis.exe

#LINKFLAGS = -lgfortran
LINKFLAGS = -nofor-main


CMPFLAGS = -Wall -ggdb  -c
FFFLAGS = -c

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
	$(FC) $^ $(LINKFLAGS) -o $@

main.o: main.c common.h sys_wrapers.h lector_dcd.h atomlist.h
	$(CC) $< $(CMPFLAGS)

lectro_dcd.o: lector_dcd.f
	$(FC) $< $(FFFLAGS)

sys_wrapers.o: sys_wrapers.c
	$(CC) $< $(CMPFLAGS)

atomlist.o: atomlist.c common.h sys_wrapers.h
	$(CC) $< $(CMPFLAGS)


