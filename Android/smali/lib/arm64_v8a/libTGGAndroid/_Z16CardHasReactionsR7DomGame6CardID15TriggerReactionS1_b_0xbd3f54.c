// 函数: _Z16CardHasReactionsR7DomGame6CardID15TriggerReactionS1_b
// 地址: 0xbd3f54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
*(entry_x8 + 0x400) = 0
void* x12 = *(arg1 + mulu.dp.d(arg2, 0x68) + 0x1a68)
int32_t i = *(x12 + 0xe0)

if (i == 0)
    return 

int32_t x9_3 = (0x3ffff & (arg4 & 0xfff) << 6) | (0x3fff & arg2) << 0x12 | 0x10
int32_t x11_1 = 0

if ((arg5.d & 1) == 0)
    void* x12_2 = x12 + 0xe4
    
    do
        if (i == 6 && *x12_2 == 0 && *(x12_2 + 8) == arg3)
            int64_t x10_6 = sx.q(*(entry_x8 + 0x400))
            *(entry_x8 + 0x400) = x10_6.d + 1
            *(entry_x8 + (x10_6 << 2)) = x9_3 | (x11_1 & 0xf)
        
        i = *(x12_2 + 0xbc)
        x12_2 += 0xc0
        x11_1 += 1
    while (i != 0)
else
    void* x12_1 = x12 + 0x1a0
    
    do
        if (i == 6 && (*(x12_1 - 0xc) & 4) != 0 && *(x12_1 - 0xbc) == 0 && *(x12_1 - 0xb4) == arg3)
            int64_t x10_3 = sx.q(*(entry_x8 + 0x400))
            *(entry_x8 + 0x400) = x10_3.d + 1
            *(entry_x8 + (x10_3 << 2)) = x9_3 | (x11_1 & 0xf)
        
        i = *x12_1
        x12_1 += 0xc0
        x11_1 += 1
    while (i != 0)
