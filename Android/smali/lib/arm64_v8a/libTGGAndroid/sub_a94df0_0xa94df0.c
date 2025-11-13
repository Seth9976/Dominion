// 函数: sub_a94df0
// 地址: 0xa94df0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardIDs* x0 = *(arg1 + 8)
int128_t var_50
__builtin_memset(&var_50, 0, 0x30)
var_50.d = 0xd4
int128_t var_40
var_40:0xc.d = 0
int128_t var_30
var_30:8.q = 0
int64_t var_20 = 0
int32_t result = ChooseCard(x0, 0x1d, &var_50, 0x17, 2)

if (result != 0)
    int32_t result_1 = result
    result = MoveCardToPlayer(zx.q(result_1), 7, zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, 
        &var_50, 0xc)
    
    if (zx.d(var_50.b) != 0)
        return TriggerEvent(0x13, zx.q(result_1), 0)

return result
