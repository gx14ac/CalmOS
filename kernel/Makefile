TARGET = kernel.elf
OBJS = main.o

CXXFLAGS += -O2 --target=x86_64-elf -ffreestanding -fno-exceptions -mno-red-zone \
			-std=c++17 -fno-rtti
LDFLAGS += --entry KernelMain -z norelro --image-base 0x100000 --static -z separate-code

.PHONY: all
all: $(TARGET)

.PHONY: clean
clean:
		rm -rf *.o

kernel.elf: $(OBJS) Makefile
		ld.lld $(LDFLAGS) -o kernel.elf $(OBJS)

%.o: %.cpp Makefile
		clang++ $(CPPFLAGS) $(CXXFLAGS) -c $<