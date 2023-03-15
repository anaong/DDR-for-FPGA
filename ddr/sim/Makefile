VFLAGS = -O3 --x-assign fast --x-initial fast --noassert
SDL_CFLAGS = `sdl2-config --cflags`
SDL_LDFLAGS = `sdl2-config --libs`

# Project F Library Path
PROJF_LIBS = -I../../lib/essential

ddr: ddr.exe

%.exe: %.mk
	make -C ./obj_dir -f Vtop_$<

%.mk: top_%.sv
	verilator ${VFLAGS} -I.. ${PROJF_LIBS} \
	    -cc $< --exe main_$(basename $@).cpp -o $(basename $@) \
		-CFLAGS "${SDL_CFLAGS}" -LDFLAGS "${SDL_LDFLAGS}"

all: ddr

clean:
	rm -rf ./obj_dir

.PHONY: all clean
