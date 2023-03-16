#From Will Green's Pong Makefile
#Link: https://projectf.io/posts/fpga-pong/

# configuration
SHELL = /bin/sh
FPGA_PKG = sg48
FPGA_TYPE = up5k
PCF = icebreaker.pcf

# included modules
PATH_LIB = ../../lib
ADD_SRC += ${PATH_LIB}/clock/ice40/clock_480p.sv
ADD_SRC += ${PATH_LIB}/essential/debounce.sv
ADD_SRC += ../simple_480p.sv
ADD_SRC += arrow_logic.sv
ADD_SRC += chart.sv
ADD_SRC += rom.sv
ADD_SRC += counter_up.sv
ADD_SRC += arrow_movement.sv
ADD_SRC += arrow_draw.sv
ADD_SRC += timing.sv

ddr: ddr.rpt ddr.bin

%.json: top_%.sv $(ADD_SRC)
	yosys -ql $(basename $@)-yosys.log -p 'synth_ice40 -abc9 -device u -top top_$(basename $@) -json $@' $< $(ADD_SRC)

%.asc: %.json
	nextpnr-ice40 --${FPGA_TYPE} --package ${FPGA_PKG} --json $< --pcf ${PCF} --asc $@

%.rpt: %.asc
	icetime -d ${FPGA_TYPE} -mtr $@ $<

%.bin: %.asc
	icepack $< $(subst top_,,$@)

all: ddr

clean:
	rm -f *.json *.asc *.rpt *.bin *yosys.log

.PHONY: all clean
