// 函数: _Z19HasTokenIconAbility12DomTokenIcon
// 地址: 0xacc9b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x11 = *(DomGetContext() + 8)
int64_t x8 = sx.q(*(x11 + 0x19c0))

if (x8.d s>= 1)
    int64_t x9_1 = 0
    void* x11_1 = x11 + 0x3c220
    
    do
        if (*x11_1 == *(x11 + 0x19d4) && *(x11_1 + 0x74) == arg1)
            return 1
        
        x9_1 += 1
        x11_1 += 0xb8
    while (x9_1 s< x8)

return 0
