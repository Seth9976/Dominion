// 函数: _ZN5Botan13base32_encodeEPcPKhmRmb
// 地址: 0xccfbf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i = arg3
uint64_t x25 = 0
*arg4 = 0
int64_t result

if (arg3 u< 5)
    result = 0
    
    if (i != 0)
    label_ccfc6c:
        
        if ((arg5.d & 1) != 0)
            char* x0_1 = operator new(5)
            memset(&x0_1[i], 0, 5 - i)
            memcpy(x0_1, &arg2[x25], i)
            sub_f264c8(&arg1[result], x0_1)
            int32_t x9_1 = i.d << 3
            int32_t x10_1
            
            if (i u> 3)
                x10_1 = x9_1 + 0xdd
            else
                x10_1 = 0xfb
            
            uint64_t x9_6 = zx.q(((x10_1 - x9_1 + 0x27) & 0xfe) u/ 5)
            memset(&arg1[(result | 7) - x9_6], 0x3d, x9_6 + 1)
            *arg4 += i
            operator delete(x0_1)
            return result + 8
else
    result = 0
    
    do
        sub_f264c8(&arg1[result], &arg2[x25])
        i -= 5
        result += 8
        x25 = *arg4 + 5
        *arg4 = x25
    while (i u> 4)
    
    if (i != 0)
        goto label_ccfc6c

return result
