# yalwl
yet another light-weight logger *(in c++)*

### example usage

```cpp
logger logger;
logger.function = false;
logger.timestamp = true;

logger.log(logger::INFO, "this is an info message");
```
