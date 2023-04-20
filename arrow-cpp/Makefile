BUILD_TYPE:=release

.ONESHELL:
.PHONY: clean
clean:
	rm -rf build/*

.ONESHELL:
.PHONY: build
build: clean
	meson setup \
		--prefix ${CONDA_PREFIX} \
		--libdir ${CONDA_PREFIX}/lib \
		--includedir ./src \
		--buildtype=${BUILD_TYPE} \
		build .
	meson compile -C build
