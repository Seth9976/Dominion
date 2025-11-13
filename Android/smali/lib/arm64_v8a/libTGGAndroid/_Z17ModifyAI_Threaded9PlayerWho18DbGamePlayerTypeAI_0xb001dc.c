// 函数: _Z17ModifyAI_Threaded9PlayerWho18DbGamePlayerTypeAI
// 地址: 0xb001dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
GameSave* x0 = ActiveGame()
char* x0_2 = GameGetPlayer(x0 + 8, zx.q(x20))
int32_t x0_3 = strlen(x0_2)
int32_t x8_1

if (x0_3 s> 0xe)
    x8_1 = x0_3 - 1
else
    x8_1 = 0xe

int64_t x8_2 = sx.q(x8_1)

if (zx.d(x0_2[x8_2]) != 0x2a)
    *(x0_2 + x8_2) = 0x2a

DomAIDisposeOne(gDomClient + muls.dp.d(x20, 0x18) + 0x20698, zx.q(x20))
return DomAIInitOne(gDomClient + muls.dp.d(x20, 0x18) + 0x20698, x0, gDomClient + 0x20728, 
    zx.q(x20), zx.q(arg2), false) __tailcall
