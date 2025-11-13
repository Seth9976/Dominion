// 函数: _Z8PlayBoon6CardIDi12PlayBoonFlag
// 地址: 0xae2c60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
void* x0 = DomGetContext()

if ((arg3 & 1) == 0 && (HasOngoing(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x2a, 0, 0) & 1) != 0)
    return PlayBoonMayDelay(zx.q(x20), arg2) __tailcall

void* x0_5 = DomGetContext()
return PlayFate(*(x0_5 + 8), zx.q(*(x0_5 + 0x18)), zx.q(x20), arg2) __tailcall
