// 函数: sub_a5798c
// 地址: 0xa5798c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
DomGame* x19 = *(x0 + 8)
int32_t x20 = *(x0 + 0x18)

if (GetDebt(x19, zx.q(x20)) s< 1)
    return AddOngoing(0x2f, 1, 1, false, 0, 0, 0, 0) __tailcall

return RemoveDebt(x19, zx.q(x20), 1) __tailcall
