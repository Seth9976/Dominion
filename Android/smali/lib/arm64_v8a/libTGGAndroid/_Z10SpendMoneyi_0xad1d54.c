// 函数: _Z10SpendMoneyi
// 地址: 0xad1d54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

void* x0 = DomGetContext()
void* x0_5

if (CountResource(*(x0 + 8), zx.q(*(x0 + 0x18)), 0) s> arg1)
    x0_5 = DomGetContext()
    return AddResource(*(x0_5 + 8), zx.q(*(x0_5 + 0x18)), 0, neg.d(arg1), 0, 0) __tailcall

void* x0_3 = DomGetContext()
arg1 = CountResource(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), 0)

if (arg1 != 0)
    x0_5 = DomGetContext()
    return AddResource(*(x0_5 + 8), zx.q(*(x0_5 + 0x18)), 0, neg.d(arg1), 0, 0) __tailcall
