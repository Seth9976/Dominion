// 函数: _Z29LandMod_Project_StartWithCubev
// 地址: 0xa32844
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(DomGetContext() + 0x1c)
int32_t var_cb0[0x320]

if (CardsLandscapeTops(*(DomGetContext() + 8), &var_cb0) == 0)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return LandMod_Project_SecondCopy_Test() __tailcall

int64_t x21 = 0
int32_t x0_5

do
    x0_5 = CardIs(zx.q(var_cb0[x21]), zx.q(x19))
    x21 += 1
while ((x0_5 & 1) == 0)
int32_t x19_1 = var_cb0[zx.q(x21.d - 1)]
void* x0_6 = DomGetContext()
int32_t x0_8 = FindToken(*(x0_6 + 8), zx.q(*(x0_6 + 0x18)), 0xe01, 0x3f1, 0, 0)
uint64_t x2 = zx.q(*(CardGet(*(x0_6 + 8), zx.q(x19_1)) + 0xc))
MoveToken(*(x0_6 + 8), zx.q(x0_8), x2)
int32_t var_cb8 = 0
int32_t var_cc0 = 0
return NotifyLog(*(x0_6 + 8), 0x50, zx.q(*(x0_6 + 0x18)), 0, nullptr, 0, 
    zx.q(CardWhat(zx.q(x19_1))), 0)
