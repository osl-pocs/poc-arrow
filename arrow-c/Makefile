.PHONY: build

CLEAN:=0

.ONESHELL:
.PHONY: build
build:
	if [[ ${CLEAN} -eq 1 ]]; then rm -rf build/*; fi
	mkdir -p build
	cd build
	cmake ..
	cmake --build .


.ONESHELL:
.PHONY: run
run:
	./build/bin/poc_arrow_c


.ONESHELL:
.PHONY: build-and-run
build-and-run: build run
