// 函数: _Z11MayTrashOne11DomCardType15DomChoiceUIType15DomChoiceAIHint
// 地址: 0xad34e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, arg1, 0)
int32_t var_d00

if (var_d00 == 0)
    return 0

int32_t* x0 = DomGetContext()
int32_t var_68 = arg2
int64_t var_64
__builtin_memset(&var_64, 0, 0x34)
int64_t var_44 = *(x0 + 0x40)
void var_1980
int32_t var_cf0
memcpy(&var_cf0, &var_1980, 0xc84)
DomGame* x0_2 = *(x0 + 8)
int32_t var_cf8 = *x0
int32_t var_cf4_1 = x0[7]
int32_t var_1990_1 = 0
int32_t var_1998_1 = 0
int32_t var_19a0_1 = arg3
int32_t* var_19a8_1 = &var_68
int32_t var_19b0_1 = 9
int32_t var_70

if (QueueChoiceCards(x0_2, &var_cf8, zx.q(x0[6]), 1, &var_cf0, zx.q(var_70), 1, 0) != 0)
    int32_t x19_1 = var_cf0
    
    if (x19_1 != 0)
        void* x0_5 = DomGetContext()
        TrashCard(*(x0_5 + 8), zx.q(*(x0_5 + 0x18)), zx.q(x19_1), 0x3ea, 0x12, 0)
        return zx.q(x19_1)

return 0
