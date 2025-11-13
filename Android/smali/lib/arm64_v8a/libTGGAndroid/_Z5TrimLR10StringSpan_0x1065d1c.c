// 函数: _Z5TrimLR10StringSpan
// 地址: 0x1065d1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *arg1

if (x8_1 == 0)
    return 

void* x8 = x8_1 + 1

while (zx.d(*(x8 - 1)) == 0x20)
    int64_t x9_2 = *(arg1 + 8)
    *arg1 = x8
    *(arg1 + 8) = x9_2 - 1
    x8 += 1
    
    if (x9_2 == 1)
        *arg1 = 0
        break
