C=gcc
CFLAGS=-g -Wall
OBJS = getnum.o getimage.o hw2.o rotate.o

rotate: ${OBJS}
	@echo Linking $@
	gcc -g -o $@ ${OBJS} 

${OBJS}: image.h

clean:
	rm -f *.o rotate

test:
	./rotate butterfly.ppm rotate.ppm 


