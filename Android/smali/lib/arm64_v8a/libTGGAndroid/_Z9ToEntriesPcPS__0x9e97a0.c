// 函数: _Z9ToEntriesPcPS_
// 地址: 0x9e97a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = 0
void* x8 = &arg1[1]
uint32_t x9 = zx.d(*(x8 - 1))

if (x9 == 0x2d)
    goto label_9e97d0

label_9e97b8:

if (x9 != 0)
    while (true)
        x8 += 1
        
        if (zx.d(*(x8 - 1)) != 0x2d)
            break
        
    label_9e97d0:
        
        if (zx.d(*x8) == 0)
            return result
        
        uint32_t x9_2 = zx.d(*(x8 + 1))
        
        if (x9_2 == 0x20)
            *(x8 - 1) = 0
            arg2[sx.q(result.d)] = x8
            result = zx.q(result.d + 1)
            x8 += 1
            x9 = zx.d(*(x8 - 1))
            
            if (x9 != 0x2d)
                goto label_9e97b8
            
            goto label_9e97d0
        
        if (x9_2 == 0)
            return result

return result
