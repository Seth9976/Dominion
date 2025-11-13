// 函数: _Z12ReceiveCardsv
// 地址: 0xadc2e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
DomGame* x19 = *(x0 + 8)
int32_t x20 = *(x0 + 0x18)
void var_19b8
int32_t i_2 = CardsWhere(x19, zx.q(x20), 0x3ed, &var_19b8)

if (i_2 s>= 1)
    uint64_t i_1 = zx.q(i_2)
    void* x24_1 = &var_19b8
    uint64_t i
    
    do
        int32_t var_19c8_1 = 1
        int64_t var_19d0_1 = 0
        int32_t var_19d8_1 = 0
        int32_t var_19e0_1 = 0
        int32_t var_19e8_1 = 0
        int64_t var_19f0_2 = 0
        MoveCardTo(x19, zx.q(x20), zx.q(*x24_1), 0x3ed, 0x11, 0x3ea, 0xb, 0)
        int32_t x27_1 = *x24_1
        int32_t var_b8_2 = 0
        int32_t var_d38
        int32_t x21_1
        
        if (x27_1 != 0)
            x21_1 = 1
            GameAssert(true)
            int32_t var_b8_1 = 1
            var_d38 = x27_1
        else
            x21_1 = 0
        
        int32_t var_64 = 0x1c
        void* x0_2 = DomGetContext()
        int128_t var_b0
        __builtin_memset(&var_b0, 0, 0x48)
        int64_t var_19f0_1 = 0
        TriggerEvents(*(x0_2 + 8), zx.q(*(x0_2 + 0x18)), &var_64, 1, &var_b0, 0, &var_d38, 
            zx.q(x21_1))
        i = i_1
        i_1 -= 1
        x24_1 += 4
    while (i != 1)

return CalcScores(x19)
