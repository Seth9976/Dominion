// 函数: sub_aad4c8
// 地址: 0xaad4c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = Trigger_AssociatedInt()
int32_t x0_1 = Trigger_PlayCard()
void* x10 = *(DomGetContext() + 8)
uint64_t x8 = zx.q(*(x10 + 0x19b8))

if (x8.d s< 1)
    return 

int64_t x9_2

if (*(x10 + 0x39c88) != x0_1)
    x9_2 = 0
    int32_t x12_1
    
    do
        if (x8 - 1 == x9_2)
            return 
        
        x12_1 = *(x10 + 0x39c8c + (x9_2 << 2))
        x9_2 += 1
    while (x12_1 != x0_1)

if (*(x10 + 0x39c88) != x0_1 && x9_2 u>= x8)
    return 

if ((x0 & 0x80000000) != 0)
    return Card(1, 1, 0, nullptr) __tailcall

MoneyPlus(1, 1, false)
return NotifyResult(1) __tailcall
