// 函数: _Z28HasGainedVictoryThisBuyPhasev
// 地址: 0xaccd44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int64_t x8 = *(x0 + 8)
int64_t x9 = sx.q(*(x0 + 0x18))

if (*(x8 + x9 * 0x5a30 + 0x181ec) s< 1)
    return 0

int64_t i = 0
int32_t x0_2

do
    x0_2 = CardIs(zx.q(*(x8 + x9 * 0x5a30 + 0x1b418 + (i << 2))), 8)
    
    if ((x0_2 & 1) != 0)
        break
    
    i += 1
while (i s< sx.q(*(x8 + x9 * 0x5a30 + 0x181ec)))

return zx.q(x0_2) & 1
