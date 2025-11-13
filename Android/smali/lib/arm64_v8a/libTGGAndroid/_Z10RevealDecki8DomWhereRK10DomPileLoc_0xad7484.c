// 函数: _Z10RevealDecki8DomWhereRK10DomPileLoc
// 地址: 0xad7484
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = arg1
void* x0 = DomGetContext()
void* entry_x8
int64_t result = memset(entry_x8, 0, 0xc84)

if (i_1 s>= 1)
    int32_t i
    
    do
        void* x0_2 = DomGetContext()
        result = TopDeckCard(*(x0_2 + 8), zx.q(*(x0_2 + 0x18)), false)
        
        if (result.d == 0)
            break
        
        int32_t var_cd8 = result.d
        int32_t var_58_1 = 1
        int32_t x24_1 = result.d
        Reveal(*(x0 + 8), &var_cd8, 0x3eb, *(x0 + 0x40), zx.q(*(x0 + 0x48)), zx.q(arg2), arg3, 0)
        int64_t x26_1 = sx.q(*(entry_x8 + 0xc80))
        result = GameAssert((x26_1 s< 0x320 ? 1 : 0).b)
        i = i_1
        i_1 -= 1
        *(entry_x8 + 0xc80) = x26_1.d + 1
        *(entry_x8 + (x26_1 << 2)) = x24_1
    while (i != 1)

return result
