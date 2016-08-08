CC := g++

CFLAGS := -c -Wall --std=gnu++0x
LDFLAGS := -lglog

SRCS = $(shell ls *.cc)
OBJS = $(SRCS:%.cc=%.o)
TARGET = glogging

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $(SRCS)

clean:
	rm -rf *.o $(TARGET)
