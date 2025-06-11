# yalwl
yet another light-weight logger *(in c++)*

### example usage
there is a full file example in `main.cc`, but here's a small code snippet:
```cpp
logger logger;
logger.function = false;
logger.timestamp = true;

logger.log(logger::INFO, "this is an info message");
```
