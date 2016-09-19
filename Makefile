all:
	cd rust && cargo build
	rake
rust-build:
	cd rust && cargo build
test:
	rake
