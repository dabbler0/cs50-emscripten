emcc --js-library library.js -v test.c -s EXPORTED_FUNCTIONS="['_loop']"