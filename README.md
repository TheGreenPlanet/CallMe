# CallMe :telephone_receiver:
### C++ x86

## Description:
### Invokes a function at a specific address in memory and removes the need to declare a function pointer and its parameters. Simply pass the address and its parameters and call it when you like.

## Usage:
```cpp
CallMe<void>((DWORD)&PrintStr, "Hello, World!");

```
## Output:
```bash
Hello, World!
```