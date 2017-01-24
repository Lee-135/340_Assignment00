CC=g++
ASSIGNMENT=assignment00

%.o: %.cc
	$(CC) -std=c++11 -c -g -Wall -Wextra $(ASSIGNMENT).cc

$(ASSIGNMENT).exe: $(ASSIGNMENT).o $(ASSIGNMENT).cc
	$(CC) -o $(ASSIGNMENT).exe $(ASSIGNMENT).o
clean:
	rm -f *.o *~ core $(ASSIGNMENT).exe
