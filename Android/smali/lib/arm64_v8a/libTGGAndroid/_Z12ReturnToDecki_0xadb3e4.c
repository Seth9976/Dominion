// 函数: _Z12ReturnToDecki
// 地址: 0xadb3e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = CardsWhereType(0x3ea, 0, 0)
void* entry_x8
int32_t x8 = *(entry_x8 + 0xc80)

if (x8 != 0)
    int32_t x20_1
    
    x20_1 = x8 s< arg1 ? x8 : arg1
    
    int32_t* x0 = DomGetContext()
    int32_t var_68 = 0x17
    int64_t var_64
    __builtin_memset(&var_64, 0, 0x18)
    int32_t var_4c_1 = x20_1
    int64_t var_48
    __builtin_memset(&var_48, 0, 0x18)
    int64_t var_40_1 = *(x0 + 0x40)
    CardID var_cf0
    memcpy(&var_cf0, entry_x8, 0xc84)
    uint64_t x2_1 = zx.q(x0[6])
    int32_t x8_2 = x0[7]
    DomGame* x0_2 = *(x0 + 8)
    int32_t var_cf8 = *x0
    int32_t var_cf4_1 = x8_2
    int32_t var_d10_1 = 0
    int32_t var_d18_1 = 0
    int32_t* var_d28_1 = &var_68
    int32_t var_d20_1 = 0xe
    int32_t var_d30_1 = 0xe
    int32_t var_70
    int32_t var_70_1 =
        QueueChoiceCards(x0_2, &var_cf8, x2_1, 1, &var_cf0, zx.q(var_70), zx.q(x20_1), zx.q(x20_1))
    result = memcpy(entry_x8, &var_cf0, 0xc84)
    
    if (*(entry_x8 + 0xc80) s>= 1)
        int64_t i = 0
        
        do
            int32_t x20_2 = *(entry_x8 + (i << 2))
            void* x0_5 = DomGetContext()
            int32_t x0_7 = CardOwner(*(x0_5 + 8), zx.q(x20_2))
            int32_t var_d08_1 = 0
            var_d10_1.q = 0
            int32_t var_d18_2 = 0
            int32_t var_d20_2 = 0
            var_d28_1.d = *(x0_5 + 0x48)
            var_d30_1.q = *(x0_5 + 0x40)
            result = MoveCardTo(*(x0_5 + 8), zx.q(x0_7), zx.q(x20_2), 0x3ea, 0xb, 0x3eb, 4, 0)
            i += 1
        while (i s< sx.q(*(entry_x8 + 0xc80)))

return result
