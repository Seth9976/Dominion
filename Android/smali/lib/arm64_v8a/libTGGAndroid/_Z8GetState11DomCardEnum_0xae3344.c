// 函数: _Z8GetState11DomCardEnum
// 地址: 0xae3344
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(DomGetContext() + 0x18)
void* x9 = *(DomGetContext() + 8)
uint64_t x8 = zx.q(*(x9 + 0x1528))

if (x8.d s>= 1)
    int64_t result = 0
    void* x9_1 = x9 + 0x1a94
    
    do
        if (*(x9_1 - 0x24) == arg1 && *x9_1 == x20)
            return result
        
        result += 1
        x9_1 += 0x68
    while (x8 != result)

return 0
