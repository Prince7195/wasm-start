# WASM Start

    A WebAssembly programming start up.

### CMD's:

1. emcc lib/demo.c -s WASM=1 -o public/demo.js
2. emcc lib/demo.c -s WASM=1 -02 -o public/demo.js
3. emcc lib/demo.c -s WASM=1 --post-js public/ready.js -o public/demo.js
4. emcc lib/demo.c -s WASM=1 --pre-js public/ready.js -o public/demo.js
5. emcc lib/demo.c -s WASM=1 -s EXPORTED_FUNCTIONS="['_{functionName1}', ' _{functionName2}']" -o public/demo.js

### Inbuilt Helper functions:

1. ccall(functionName, returnType, argsType, args, opts)

EX1: ccall('greet', 'string') - getting string

Ex2: ccall('getDoubleNum', 'number', ['number'], [2]) - passing args

2. cwrap(functionName, returnType, argsType) - assign to a native javascript

EX1: const greetings = cwrap('greetings', 'string', ['string']);
    call as greetings('Vijay');
