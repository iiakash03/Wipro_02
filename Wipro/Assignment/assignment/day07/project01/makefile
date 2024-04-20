CC = gcc

OBJ = obj
SRC = src
INC = include
BIN = bin

LDFLAGS = -o
CFLAGS = -c -g

$(BIN)/app: $(OBJ)/main.o $(OBJ)/functions.o
	$(CC) $(LDFLAGS) $(BIN)/app $(OBJ)/main.o $(OBJ)/functions.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c -I $(INC)/
	mv main.o $(OBJ)/

$(OBJ)/functions.o: $(SRC)/functions.c
	$(CC) $(CFLAGS) $(SRC)/functions.c -I $(INC)/
	mv functions.o $(OBJ)/

clean:
	rm -f $(BIN)/app
	rm -f $(OBJ)/*.o
	@echo "Cleaning Done!"