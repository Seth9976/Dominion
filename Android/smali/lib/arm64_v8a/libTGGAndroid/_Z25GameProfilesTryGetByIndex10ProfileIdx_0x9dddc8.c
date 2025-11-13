// 函数: _Z25GameProfilesTryGetByIndex10ProfileIdx
// 地址: 0x9dddc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *(gGameSettings + 0x10)
int64_t x9 = sx.q(*(result + 0x1f2e0))

if (x9.d s>= 1)
    int64_t x10_1 = 0
    void* x11_1 = result + 0x4320
    
    do
        if (*x11_1 == arg1)
            return result
        
        x10_1 += 1
        result += 0x7cb8
        x11_1 += 0x7cb8
    while (x10_1 s< x9)

return 0
