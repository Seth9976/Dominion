// 函数: _Z5Exile6CardID8DomWhere14ExileMoveStyle
// 地址: 0xa89ef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
uint64_t x2 = zx.q(*(DomGetContext() + 0x18))
int64_t x7

x7 = arg3 != 0 ? 0xc : 0xb

bool var_24
int64_t result = MoveCardToPlayer(zx.q(x19), zx.q(arg2), x2, 0x462, 0, 0, &var_24, x7)

if (zx.d(var_24) == 0)
    return result

return TriggerEvent(0x13, zx.q(x19), 0)
