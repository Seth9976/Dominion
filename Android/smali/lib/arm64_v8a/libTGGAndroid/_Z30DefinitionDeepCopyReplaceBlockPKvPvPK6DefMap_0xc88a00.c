// 函数: _Z30DefinitionDeepCopyReplaceBlockPKvPvPK6DefMap
// 地址: 0xc88a00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = memcpy(arg2, arg1, sx.q(*(arg3 + 0x14)))
int32_t x8 = *(arg3 + 0x18)

if (x8 - 1 u> 0x10)
label_c88a6c:
    int32_t x22_1 = *(arg3 + 0x10)
    
    if (x22_1 != 0)
        result = DefDeepCopyField(arg2, *(arg3 + 8), nullptr, arg1)
        
        if (x22_1 s>= 2)
            int64_t x22_2 = 1
            int64_t x23_1 = 0x68
            int64_t x24_1
            
            do
                x24_1 = sx.q(*(arg3 + 0x10))
                x22_2 += 1
                result = DefDeepCopyField(arg2, *(arg3 + 8) + x23_1, nullptr, arg1)
                x23_1 += 0x68
            while (x22_2 s< x24_1)
    
    return result

if (x8 u> 0x11)
label_c88b20:
    pthread_kill(pthread_self(), 6)
    DefAssetHeader* x0_9
    DefMap* x1_5
    x0_9, x1_5 = XNoReturn()
    return DefinitionNewDeepCopy(x0_9, x1_5) __tailcall

int32_t x9_1 = 1 << x8

if ((x9_1 & 0x1c41e) != 0)
    return result

if ((x9_1 & 0x21a60) != 0)
    goto label_c88a6c

if (x8 != 8)
    goto label_c88b20

char* x20_1 = *arg1
int32_t x21_1 = strlen(x20_1) + 1
int64_t x0_6 = XMalloc(x21_1)
*arg2 = x0_6
return memcpy(x0_6, x20_1, sx.q(x21_1)) __tailcall
