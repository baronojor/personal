OBJS = main.o lector_dcd.o sys_wrapers.o atomlist.o

CC = gcc
FC = gfortran

EXECUTABLE = analisis.exe

LINKFLAGS = -lgfortran
CMPFLAGS = -Wall -ggdb  -c

RM = rm 



.PHONY: all clean cleanall rebuild objs tests

all: $(EXECUTABLE)

clean:
	-$(RM) *.o

cleanall: clean
	-$(RM) $(EXECUTABLE)

rebuild: cleanall all

objs: $(OBJS)

tests:
	cd unit && $(MAKE)



$(EXECUTABLE): $(OBJS)
	$(CC) $^ $(LINKFLAGS) -o $@  

main.o: main.c common.h sys_wrapers.h lector_dcd.h atomlist.h
	$(CC) $< $(CMPFLAGS)

lectro_dcd.o: lector_dcd.f
	$(FC) $< $(CMPFLAGS)

sys_wrapers.o: sys_wrapers.c
	$(CC) $< $(CMPFLAGS)

atomlist.o: atomlist.c common.h sys_wrapers.h
	$(CC) $< $(CMPFLAGS)


