.phony all:
all:
	g++ -Wall main.cpp -o FastInverseSquare
.phony clean:
clean:
	-rm FastInverseSquare
