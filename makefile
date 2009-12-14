CC = gcc
FC = gfortran
LINKFLAGS = -lgfortran
CMPFLAGS = -Wall -ggdb

analisis.exe : main.c lector_dcd.o lector_dcd.h
	$(CC) main.c lector_dcd.o  $(CMPFLAGS) $(LINKFLAGS) -o $@  

lectro_dcd.o : lector_dcd.f
	$(FC) -c $^ $(CMPFLAGS)


