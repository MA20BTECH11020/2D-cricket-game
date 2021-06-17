SFMLPATH = C:\\SFML-2.5.1
SFML_INC = $(SFMLPATH)\\include
SFML_LIB = $(SFMLPATH)\\lib 
LFLAGS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-network -lsfml-system
CC = g++
CFLAGS = -c
OBJS = main.o game.o
SRCS = *.cpp
BIN = main.exe

$(BIN): $(OBJS); \
$(CC) -o $(BIN) -L $(SFML_LIB) $(OBJS) $(LFLAGS)

$(OBJS): %.o: %.cpp; \
$(CC) $(CFLAGS) $< -I $(SFML_INC)

clean: ; \
rm $(OBJS) $(BIN)

