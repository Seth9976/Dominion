// 函数: _Z4TrimR10StringSpan
// 地址: 0x1065d84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg1

if (x8 == 0)
    return 

int64_t i

do
    if (zx.d(*x8) != 0x20)
        int64_t j = *(arg1 + 8) - 1
        
        do
            if (zx.d(x8[j]) != 0x20)
                return 
            
            *(arg1 + 8) = j
            j -= 1
        while (j != -1)
        
        break
    
    i = *(arg1 + 8)
    x8 = &x8[1]
    *arg1 = x8
    *(arg1 + 8) = i - 1
while (i != 1)
*arg1 = 0
