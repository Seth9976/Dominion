// 函数: _Z19FlanimImageOverrideP6FlanimPKcP6XAsset
// 地址: 0xf66ac0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = FlanimGetDef(*arg1)
uint64_t x8 = zx.q(*(x0_1 + 0x28))

if (x8.d s>= 1)
    char** x24_1 = *(x0_1 + 0x20)
    int64_t i = 0
    int64_t x22_1 = 0
    
    do
        int64_t result = strcasecmp(*x24_1, arg2)
        
        if (result.d == 0)
            if (i.d == 1)
                break
            
            *(*(arg1 + 0x70) + (x22_1 s>> 0x20) * 0x70 + 0x58) = arg3
            return result
        
        i -= 1
        x22_1 += 0x100000000
        x24_1 = &x24_1[3]
    while (neg.q(x8) != i)

*arg1
XString::operator char const*()
return XTrace("missing flanim layer %s in %s") __tailcall
