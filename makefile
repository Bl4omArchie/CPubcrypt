CC=gcc

SRCDIR = src
BUILDDIR = build
INCDIR = includes

TARGET = rsa.o

SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c, $(BUILDDIR)/%.o, $(SRCS))

CFLAGS = -I$(INCDIR) -o3 -lcrypto
all: $(BUILDDIR) $(TARGET)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJS)
	$(CC) main.c -o $(TARGET) $(OBJS)


clean:
	rm -rf $(BUILDDIR) $(TARGET) .vscode/ *.o


.PHONY: all clean