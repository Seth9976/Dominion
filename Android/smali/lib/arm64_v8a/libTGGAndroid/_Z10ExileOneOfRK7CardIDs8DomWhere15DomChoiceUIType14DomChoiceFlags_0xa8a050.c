// 函数: _Z10ExileOneOfRK7CardIDs8DomWhere15DomChoiceUIType14DomChoiceFlags
// 地址: 0xa8a050
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x1

x1 = arg2 == 0x3ea ? 0x1b : 0x1d

int128_t var_60
__builtin_memset(&var_60, 0, 0x38)
var_60.d = arg3
int32_t x0 = ChooseCard(arg1, x1, &var_60, 0x17, zx.q(arg4))

if (x0 != 0)
    MoveCardToPlayer(zx.q(x0), zx.q(arg2), zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, &var_60, 
        0xc)
    
    if (zx.d(var_60.b) != 0)
        TriggerEvent(0x13, zx.q(x0), 0)

return zx.q(x0)
