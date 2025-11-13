// 函数: _Z19UI2ApplyScrollDelta9UI2HandleRK4Vec2
// 地址: 0x10414c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1)
int64_t x8 = *gUI2
UI2* i = x8 + mulu.dp.d(x9.d, 0x19a8)
uint64_t x10 = zx.q(*(i + 0x1528))

if (x10.d u> 3)
    pthread_kill(pthread_self(), 6)
    return UI2GetScrollPageAmount(XNoReturn()) __tailcall

void* x8_1

switch (x10)
    case 1
        x8_1 = x8 + x9 * 0x19a8
        *(x8_1 + 0x13ac) = *(x8_1 + 0x13ac) - *(arg2 + 4)
    case 2
        void* x8_2 = x8 + x9 * 0x19a8
        *(x8_2 + 0x13a8) = *arg2 + *(x8_2 + 0x13a8)
    case 3
        x8_1 = x8 + x9 * 0x19a8
        *(x8_1 + 0x13ac) = *(arg2 + 4) + *(x8_1 + 0x13ac)

int64_t result = UI2ClampScrollDelta(i, nullptr)

do
    *(i + 0x1378) = 2
    i = *(i + 0x17d0)
while (i != 0)

return result
