// 函数: _Z19SubmitNetworkActionR8GameSave9PlayerWhoRK8DomYield14GameMoveReason
// 地址: 0xb18168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg4
int32_t x21 = arg2.d
int64_t* x0 = LogGet(arg1, arg2)
x0[2].d
XTrace("submit network action who:%d pos:%d")
void* x0_1 = GetClient()

if (x20 == 2)
    GameGetPlayer(arg1 + 8, zx.q(x21))

int64_t x25 = sx.q(x0[2].d)
DomLogWriteAction(x0, arg3)
int32_t x8 = x0[2].d
int64_t x9 = *x0
int32_t x11 = *(x0_1 + 0xc) + 1
*(x0_1 + 0xc) = x11
int32_t x10_1 = *arg1
int32_t var_60 = x21
int32_t var_5c = x25.d
int64_t var_58 = x9 + x25
int32_t var_50 = x8 - x25.d
int32_t var_4c = x20
int32_t var_68 = x11
int32_t var_64 = x10_1
int32_t var_48 = *arg3
return NetworkSendDef(zx.q(*(x0_1 + 0x14)), 0xf42b0, *defMapGameMoveMsg, &var_68)
