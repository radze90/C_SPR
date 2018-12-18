WARNFLAGS = -W -Wall -Wextra -Werror
OPTFLAGS = -O3 -std=c11
CLFLAGS += $(WARNFLAGS) $(OPTFLAGS)
PROG = main
OBJ = main.o hello.o bye.o

# Linken
$(PROG): $(OBJ)
	$(CC) -o $@ $^

# kompilieren mit Abheangigkeiten
main.o: main.c
	$(CC) -c $<

hello.o: hello.c
	$(CC) -c $<

bye.o: bye.c
	$(CC) -c $<

clean:
	$(RM) $(OBJ)

cleanall:
	$(RM) $(PROG) $(OBJ)
