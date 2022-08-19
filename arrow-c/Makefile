BUILD_TYPE:=release

CLEAN:=0

.ONESHELL:
.PHONY: clean
clean:
	rm -rf build/*

.ONESHELL:
.PHONY: cmake-build
cmake-build: clean
	mkdir -p build
	cd build
	cmake ..
	cmake --build .


.ONESHELL:
.PHONY: run
run:
	./build/bin/poc_arrow_c


.ONESHELL:
.PHONY: cmake-build-and-run
cmake-build-and-run: build run


.ONESHELL:
.PHONY: meson-build
meson-build: clean
	meson setup \
		--prefix ${CONDA_PREFIX} \
		--libdir ${CONDA_PREFIX}/lib \
		--includedir ./src \
		--buildtype=${BUILD_TYPE} \
		build .
	meson compile -C build
