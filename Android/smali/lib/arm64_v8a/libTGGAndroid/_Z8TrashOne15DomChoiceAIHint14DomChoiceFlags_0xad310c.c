// 函数: _Z8TrashOne15DomChoiceAIHint14DomChoiceFlags
// 地址: 0xad310c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
CardsWhereType(0x3ea, 0, 0)
int32_t var_38

if (var_38 == 0)
    return 0

uint64_t result
int32_t result_1
int32_t var_24

if (var_38 != 1)
    int128_t var_cf0
    __builtin_memset(&var_cf0, 0, 0x30)
    var_cf0.d = 0x12
    int128_t var_ce0
    var_ce0:0xc.d = 0
    int128_t var_cd0
    var_cd0:8.q = 0
    int64_t var_cc0_1 = 0
    result = ChooseCard(&result_1, 9, &var_cf0, zx.q(arg1), zx.q(arg2))
    var_24 = result.d
    
    if (result.d != 0)
        TrashCards(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_24, 1, 0x3ea, 0x12, 0)
        return zx.q(var_24)
else
    result = zx.q(result_1)
    var_24 = result.d
    
    if (result.d != 0)
        TrashCards(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_24, 1, 0x3ea, 0x12, 0)
        return zx.q(var_24)
return result
