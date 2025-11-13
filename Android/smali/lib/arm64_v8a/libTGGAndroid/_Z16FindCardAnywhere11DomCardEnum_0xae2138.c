// 函数: _Z16FindCardAnywhere11DomCardEnum
// 地址: 0xae2138
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *(DomGetContext() + 8)
int64_t x8 = sx.q(*(x9 + 0x1528))

if (x8.d s>= 1)
    int64_t result = 0
    void* x9_1 = x9 + 0x1a70
    
    do
        if (*x9_1 == arg1)
            return result
        
        result += 1
        x9_1 += 0x68
    while (result s< x8)

return 0
