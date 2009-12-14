CC = gcc
FC = gfortran
LINKFLAGS = -lgfortran
CMPFLAGS = -Wall -ggdb



analisis.exe : main.c sys_wrapers.c atomlist.c\
	           lector_dcd.o \
			   lector_dcd.h common.h sys_wrapers.h atomlist.h
	$(CC) main.c sys_wrapers.c atomlist.c lector_dcd.o  \
		    $(CMPFLAGS) $(LINKFLAGS) -o $@  

lectro_dcd.o : lector_dcd.f
	$(FC) -c $^ $(CMPFLAGS)


