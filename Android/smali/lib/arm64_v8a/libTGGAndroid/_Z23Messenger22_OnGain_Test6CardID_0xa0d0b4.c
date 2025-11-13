// 函数: _Z23Messenger22_OnGain_Test6CardID
// 地址: 0xa0d0b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if ((IsYourBuyPhaseWhenGained() & 1) == 0)
    return 0

void* x0_1 = DomGetContext()
int64_t x8 = *(x0_1 + 8)
int64_t x9 = sx.q(*(x0_1 + 0x18))

if (*(x8 + x9 * 0x5a30 + 0x181ec) == 0)
    return zx.q(0 == x19 ? 1 : 0)

return zx.q(*(x8 + x9 * 0x5a30 + 0x1b418) == x19 ? 1 : 0)
