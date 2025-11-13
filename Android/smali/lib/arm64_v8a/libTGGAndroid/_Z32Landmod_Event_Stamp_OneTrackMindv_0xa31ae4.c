// 函数: _Z32Landmod_Event_Stamp_OneTrackMindv
// 地址: 0xa31ae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
uint64_t x5 = zx.q(*(DomGetContext() + 0x1c))
int64_t var_cc8 = 0
int32_t var_cd0 = 0
int32_t var_cd8 = 0
int32_t var_ce0 = 0
NotifyEffect(*(x0 + 8), 0x1b, 0xffffffff, 0x14, 0x26, x5, 0, 0)
int32_t x19_1 = *(DomGetContext() + 0x1c)
int64_t var_cb8

if (CardsLandscapeTops(*(DomGetContext() + 8), &var_cb8) == 0)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return Landmod_Event_Test_LandscapeCost4Or5OrTriumph() __tailcall

int64_t x21 = 0
int32_t x0_8

do
    x0_8 = CardIs(zx.q(*(&var_cb8 + (x21 << 2))), zx.q(x19_1))
    x21 += 1
while ((x0_8 & 1) == 0)
int32_t x19_2 = *(&var_cb8 + (zx.q(x21.d - 1) << 2))
DomGame* x20 = *(DomGetContext() + 8)
var_cb8 = ToCardRef(x20, zx.q(x19_2))
DomPushContext(x20, 0xffffffff, &var_cb8)
var_cb8.d = 0
Forever(0x17, sub_a5684c, nullptr, 0x10000, &var_cb8, 0x61)
return DomPopContext()
