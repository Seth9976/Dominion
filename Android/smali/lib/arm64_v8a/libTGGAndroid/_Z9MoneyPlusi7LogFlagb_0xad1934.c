// 函数: _Z9MoneyPlusi7LogFlagb
// 地址: 0xad1934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

int32_t* x0
CardID* x1
x0, x1 = DomGetContext()
int32_t x22_2

if ((arg2 & 1) != 0)
    int32_t* x0_1
    x0_1, x1 = DomGetContext()
    int32_t x8_1 = *x0_1
    
    if (x8_1 == 3)
        x1 = zx.q(x0_1[7])
        int32_t x8_2 = x1.d u>> 4 & 3
        
        if (x8_2 == 0)
            void* x0_7
            x0_7, x1 = AbilityGetRegistered(*(x0_1 + 8), x1)
            x22_2 = *(x0_7 + 0x24)
        else
            if (x8_2 != 2)
                goto label_ad19a8
            
            x22_2 = (x1 u>> 0x12).d & 0x3fff
    else if (x8_1 != 4)
    label_ad19a8:
        int32_t x0_2 = ThisCard(false, x1)
        int32_t x0_5
        x0_5, x1 = CardWhat(*(DomGetContext() + 8), zx.q(x0_2))
        x22_2 = x0_5
    else
        x22_2 = x0_1[7]
else
    x22_2 = 0

int32_t x0_8 = ThisCard(false, x1)
void* x0_9 = DomGetContext()
int32_t x0_11 = HasOngoing(*(x0_9 + 8), zx.q(*(x0_9 + 0x18)), 0x13, x0_8, 0)
int32_t x21_2

if (x0_8 != 0)
    int32_t x0_14 = PileSource(*(DomGetContext() + 8), zx.q(x0_8))
    void* x0_15 = DomGetContext()
    
    if (((x0_11 ^ HasOngoing(*(x0_15 + 8), zx.q(*(x0_15 + 0x18)), 0x27, x0_14, 0)) & 1) == 0)
        goto label_ad1a68
    
    DrawCards(*(x0 + 8), zx.q(x0[6]), arg1, zx.q(x22_2), nullptr)
    x21_2 = 4
else if ((x0_11 & 1) != 0)
    DrawCards(*(x0 + 8), zx.q(x0[6]), arg1, zx.q(x22_2), nullptr)
    x21_2 = 4
else
label_ad1a68:
    void* x0_19 = DomGetContext()
    AddResource(*(x0_19 + 8), zx.q(*(x0_19 + 0x18)), 0, arg1, zx.q(x22_2), 0)
    x21_2 = 1
    
    if (*x0 == 2 && (arg3.d & 1) == 0)
        void* x8_8 = *(x0 + 8)
        x21_2 = 1
        int64_t x9_1 = sx.q(*(x8_8 + 0x19b8))
        *(x8_8 + 0x19b8) = x9_1.d + 1
        *(*(x0 + 8) + (x9_1 << 2) + 0x39c88) = x0[7]

arg1 = DomGetContext()
void* x8_12 = *(arg1 + 8) + sx.q(*(arg1 + 0x18)) * 0x5a30
*(x8_12 + 0x181f8) |= x21_2
