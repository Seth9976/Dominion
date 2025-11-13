// 函数: _Z22ReadPresubmittedActionR8GameSave9PlayerWhoR8DomYield
// 地址: 0xb17e74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x25

if (arg2 == 0xffffffff)
    x25 = gDomClient + 0x48
else
    x25 = gDomClient + 0x48 + muls.dp.d(arg2, 0x4d48)

int32_t x23 = *(x25 + 0x4098)

if (x23 != 0)
    int32_t x20_1 = arg2
    memcpy(arg3, x25 + 0x1938, 0xd20)
    memmove(x25 + 0x1938, x25 + 0x2658, sx.q(*(x25 + 0x4098)) * 0xd20 - 0xd20)
    *(x25 + 0x4098) -= 1
    LogAdd(arg1, zx.q(x20_1), arg3)
    DomLogReadAction(LogGet(arg1, zx.q(x20_1)), arg3)

return zx.q(x23 != 0 ? 1 : 0)
