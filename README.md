# CallMe :telephone_receiver:
### C++ x86

## Description:
### Invokes a function at a specific address in memory and removes the need to declare a function pointer and its parameters. Simply add your address to the "CALLME::ADRESS" enum and call it when and how you like.

## Usage:
```cpp
int result = CALLME::function<int>(CALLME::ADDRESS::Add, 10, 20);
std::cout << "Result: " << result << std::endl;
```
## Output:
```bash
Result: 30
```