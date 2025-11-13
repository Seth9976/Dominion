// 函数: _Z5TrimRR10StringSpan
// 地址: 0x1065d50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1

if (x8 == 0)
    return 

int64_t x9_2 = *(arg1 + 8) - 1

while (zx.d(*(x8 + x9_2)) == 0x20)
    *(arg1 + 8) = x9_2
    x9_2 -= 1
    
    if (x9_2 == -1)
        *arg1 = 0
        break
