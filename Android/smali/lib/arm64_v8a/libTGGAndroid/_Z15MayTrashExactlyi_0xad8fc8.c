// 函数: _Z15MayTrashExactlyi
// 地址: 0xad8fc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameAssert((arg1 s> 0 ? 1 : 0).b)
CardsWhereType(0x3ea, 0, 0)
int32_t var_d00
int32_t x20_1

x20_1 = var_d00 s< arg1 ? var_d00 : arg1

CardID* entry_x8
void var_1980
int32_t var_cf8
CardID var_cf0
int32_t var_70
int32_t var_70_1
int32_t var_68
DomGame* x0_5

if (x20_1 == 1)
    int64_t var_1990_1 = 0
    
    if (var_d00 == 0)
        memset(entry_x8, 0, 0xc84)
    else
        int32_t* x0_3
        int128_t v0_1
        x0_3, v0_1 = DomGetContext()
        var_68 = 0x14
        int128_t var_64_1 = 0.o
        int64_t var_54
        __builtin_memset(&var_54, 0, 0x24)
        int64_t var_44 = *(x0_3 + 0x40)
        memcpy(&var_cf0, &var_1980, 0xc84)
        x0_5 = *(x0_3 + 8)
        var_cf8 = *x0_3
        int32_t var_19a0_1 = 0
        int32_t var_cf4_1 = x0_3[7]
        int32_t var_19a8_1 = 0
        int32_t var_19b0_1 = 7
        int32_t* var_19b8_1 = &var_68
        int32_t var_19c0_1 = 9
        var_70_1 = QueueChoiceCards(x0_5, &var_cf8, zx.q(x0_3[6]), 1, &var_cf0, zx.q(var_70), 1, 0)
        memcpy(entry_x8, &var_cf0, 0xc84)
else
    if (x20_1 == 0)
        return memset(entry_x8, 0, 0xc84)
    
    int64_t var_1990_2 = 0
    
    if (var_d00 == 0)
        memset(entry_x8, 0, 0xc84)
    else
        int32_t* x0_6
        int128_t v0_2
        x0_6, v0_2 = DomGetContext()
        var_68 = 0x14
        int128_t var_64_2 = 0.o
        int64_t var_54_1
        __builtin_memset(&var_54_1, 0, 0x24)
        int64_t var_44_1 = *(x0_6 + 0x40)
        memcpy(&var_cf0, &var_1980, 0xc84)
        x0_5 = *(x0_6 + 8)
        var_cf8 = *x0_6
        int32_t var_cf4_2 = x0_6[7]
        int32_t var_19a8_2 = 0
        int32_t var_19a0_2 = 1
        int32_t var_19b0_2 = 7
        int32_t* var_19b8_2 = &var_68
        int32_t var_19c0_2 = 9
        var_70_1 = QueueChoiceCards(x0_5, &var_cf8, zx.q(x0_6[6]), 1, &var_cf0, zx.q(var_70), 
            zx.q(x20_1), zx.q(x20_1))
        memcpy(entry_x8, &var_cf0, 0xc84)
void* x0_11 = DomGetContext()
return TrashCards(*(x0_11 + 8), zx.q(*(x0_11 + 0x18)), entry_x8, *(entry_x8 + 0xc80), 0x3ea, 0x12, 
    0)
