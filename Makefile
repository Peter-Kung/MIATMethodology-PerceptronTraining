SRC_RUN:= ./src/main.c
SRC_VAL := ./src/validation.c
OBJ := ./test


all:
	gcc $(SRC_RUN) -o $(OBJ) -lm
	
validate:
	gcc $(SRC_VAL) -o $(OBJ) -lm

clean:
	rm ./test