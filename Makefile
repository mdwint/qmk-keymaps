install:
	git submodule update --init --recursive

ducky:
	cd qmk_firmware && \
	cp -r $(shell pwd)/keymaps/ducky-one2mini-fauxsplit \
		keyboards/ducky/one2mini/keymaps/fauxsplit && \
	util/docker_build.sh ducky/one2mini:fauxsplit; \
	rm -r keyboards/ducky/one2mini/keymaps/fauxsplit && \
	mv ducky_one2mini_1861st_fauxsplit.bin .. && \
	cd .. && \
	nu-isp-cli flash ducky_one2mini_1861st_fauxsplit.bin
