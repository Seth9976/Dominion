// 函数: _Z13MayTrashOneOfRK7CardIDsP8DomWhere15DomChoiceUIType
// 地址: 0xaddc44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomWhere* x19 = arg2
CardIDs const& x20 = arg1
int32_t* x0 = DomGetContext()
int32_t i_1
memcpy(&i_1, x20, 0xc84)
uint64_t x2 = zx.q(x0[6])
int32_t x8 = x0[7]
DomGame* x0_2 = *(x0 + 8)
int32_t var_cc0 = *x0
int32_t var_cbc = x8
int128_t var_ce0
var_ce0:8.q = *(x0 + 0x40)
int128_t var_d00
__builtin_memset(&var_d00, 0, 0x38)
var_d00.d = arg3
int32_t var_d10 = 0
int32_t var_d18 = 0
int32_t var_d20 = 7
int128_t* var_d28 = &var_d00
int32_t var_d30 = 9
int32_t var_38
uint64_t result = QueueChoiceCards(x0_2, &var_cc0, x2, 1, &i_1, zx.q(var_38), 1, 0)

if (result.d == 0)
    return result

uint64_t x8_2 = zx.q(*(x20 + 0xc80))
int32_t i = i_1
int32_t x19_1

if (x8_2.d s< 1)
label_addd10:
    x19_1 = 0
else
    while (*x20 != i)
        x19 += 4
        uint64_t temp0_1 = x8_2
        x8_2 -= 1
        x20 += 4
        
        if (temp0_1 == 1)
            goto label_addd10
    
    x19_1 = *x19

GameAssert((x19_1 != 0 ? 1 : 0).b)
void* x0_4 = DomGetContext()

if ((TrashCard(*(x0_4 + 8), zx.q(*(x0_4 + 0x18)), zx.q(i), zx.q(x19_1), 0x12, 0) & 1) != 0)
    return zx.q(i)

return 0
