// 函数: _Z4Cardi7LogFlag8DrawFlagP7CardIDs
// 地址: 0xad1e10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg3
int32_t* x0
CardID* x1
x0, x1 = DomGetContext()
int32_t x22_1

if ((arg2 & 1) != 0)
    int32_t* x0_1
    x0_1, x1 = DomGetContext()
    int32_t x8_1 = *x0_1
    
    if (x8_1 == 3)
        x1 = zx.q(x0_1[7])
        int32_t x8_2 = x1.d u>> 4 & 3
        
        if (x8_2 == 0)
            void* x0_9
            x0_9, x1 = AbilityGetRegistered(*(x0_1 + 8), x1)
            x22_1 = *(x0_9 + 0x24)
            
            if (x23 != 0)
                return DrawCards(*(x0 + 8), zx.q(x0[6]), arg1, zx.q(x22_1), arg4) __tailcall
        else
            if (x8_2 != 2)
                goto label_ad1e90
            
            x22_1 = (x1 u>> 0x12).d & 0x3fff
            
            if (x23 != 0)
                return DrawCards(*(x0 + 8), zx.q(x0[6]), arg1, zx.q(x22_1), arg4) __tailcall
    else if (x8_1 != 4)
    label_ad1e90:
        int32_t x0_2 = ThisCard(false, x1)
        int32_t x0_5
        x0_5, x1 = CardWhat(*(DomGetContext() + 8), zx.q(x0_2))
        x22_1 = x0_5
        
        if (x23 != 0)
            return DrawCards(*(x0 + 8), zx.q(x0[6]), arg1, zx.q(x22_1), arg4) __tailcall
    else
        x22_1 = x0_1[7]
        
        if (x23 != 0)
            return DrawCards(*(x0 + 8), zx.q(x0[6]), arg1, zx.q(x22_1), arg4) __tailcall
else
    x22_1 = 0
    
    if (x23 != 0)
        return DrawCards(*(x0 + 8), zx.q(x0[6]), arg1, zx.q(x22_1), arg4) __tailcall

int32_t x0_10 = ThisCard(false, x1)
void* x0_11 = DomGetContext()
int32_t x0_13 = HasOngoing(*(x0_11 + 8), zx.q(*(x0_11 + 0x18)), 0x13, x0_10, 0)

if (x0_10 != 0)
    int32_t x0_16 = PileSource(*(DomGetContext() + 8), zx.q(x0_10))
    void* x0_17 = DomGetContext()
    
    if (((x0_13 ^ HasOngoing(*(x0_17 + 8), zx.q(*(x0_17 + 0x18)), 0x27, x0_16, 0)) & 1) == 0)
        goto label_ad1ffc
    
    goto label_ad1f58

void* result

if ((x0_13 & 1) != 0)
label_ad1f58:
    
    if (arg1 != 0)
        void* x0_20 = DomGetContext()
        AddResource(*(x0_20 + 8), zx.q(*(x0_20 + 0x18)), 0, arg1, zx.q(x22_1), 0)
    
    if (*x0 == 2)
        void* x8_9 = *(x0 + 8)
        int32_t x10_2 = x0[7]
        int64_t x9_2 = sx.q(*(x8_9 + 0x19b8))
        *(x8_9 + 0x19b8) = x9_2.d + 1
        *(x8_9 + (x9_2 << 2) + 0x39c88) = x10_2
    
    result = DomGetContext()
    void* x8_11 = *(result + 8) + sx.q(*(result + 0x18)) * 0x5a30
    *(x8_11 + 0x181f8) |= 1
    
    if (arg4 != 0)
        *(arg4 + 0xc80) = 0
else
label_ad1ffc:
    DrawCards(*(x0 + 8), zx.q(x0[6]), arg1, zx.q(x22_1), arg4)
    result = DomGetContext()
    void* x8_13 = *(result + 8) + sx.q(*(result + 0x18)) * 0x5a30
    *(x8_13 + 0x181f8) |= 4

return result
