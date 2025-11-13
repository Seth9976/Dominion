// 函数: _Z17AttribMapSetValueP11AttribTableR9AttribMapjl
// 地址: 0xc86ad0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg2)
void* x8_1 = *(*(arg1 + 0x18) + (zx.q(arg3) << 3))
DefMap* x20 = *(x8_1 + 0x18)
uint64_t x26 = zx.q(arg3)
uint32_t* x24_1

if (x9.d s< 1)
label_c86b30:
    int32_t x25_1 = x9.d << 4
    void* x0_1 = XMalloc(x25_1 + 0x10)
    int64_t x25_2 = sx.q(x25_1)
    memcpy(x0_1, *(arg2 + 8), x25_2)
    int32_t x8_2 = *arg2
    
    if (x8_2 s>= 1)
        XFree(*(arg2 + 8))
        x8_2 = *arg2
    
    *(arg2 + 8) = x0_1
    *arg2 = x8_2 + 1
    x24_1 = x0_1 + x25_2
else
    x24_1 = *(arg2 + 8)
    uint64_t x10_1 = x9
    
    while (*x24_1 != arg3)
        uint64_t temp0_1 = x10_1
        x10_1 -= 1
        x24_1 = &x24_1[4]
        
        if (temp0_1 == 1)
            goto label_c86b30
    
    if (*(x20 + 0x18) != 8)
        if ((DefTypeIsBuiltIn(x20) & 1) == 0)
            void* x0_14 = *(x24_1 + 8)
            
            if (x0_14 != *(*(*(arg1 + 0x18) + (x26 << 3)) + 0x48))
                DefinitionDeleteBlock(x0_14, x20)
                *(x24_1 + 8) = 0
    else
        void* x0_9 = *(x24_1 + 8)
        
        if (x0_9 != *(x8_1 + 0x48))
            XFree(x0_9)
            *(x24_1 + 8) = 0

*x24_1 = arg3
int64_t result = DefTypeIsDeepStructure(x20)

if ((result.d & 1) == 0)
    *(x24_1 + 8) = arg4
else
    if (*(x20 + 0x18) == 8)
        int32_t x20_1 = strlen(arg4) + 1
        int64_t x0_7 = XMalloc(x20_1)
        *(x24_1 + 8) = x0_7
        return memcpy(x0_7, arg4, sx.q(x20_1)) __tailcall
    
    DefTypeIsBuiltIn(x20)
    int64_t x0_11
    
    if (arg4 == 0)
        x0_11 = *(*(*(arg1 + 0x18) + (x26 << 3)) + 0x48)
        
        if (x0_11 == 0)
            void* x0_17 = XCalloc(DefinitionGetSize(x20))
            *(x24_1 + 8) = x0_17
            return DefinitionFillBlockWithDefaults(x0_17, x20) __tailcall
    else
        x0_11 = arg4
    
    result = DefinitionNewDeepCopyBlock(x0_11, x20)
    *(x24_1 + 8) = result

return result
