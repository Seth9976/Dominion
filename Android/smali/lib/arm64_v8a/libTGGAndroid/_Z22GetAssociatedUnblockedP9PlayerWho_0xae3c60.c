// 函数: _Z22GetAssociatedUnblockedP9PlayerWho
// 地址: 0xae3c60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
GameAssert((*x0 == 3 ? 1 : 0).b)
void* x0_3 = AbilityGetRegistered(*(x0 + 8), zx.q(x0[7]))
memcpy(arg1, x0_3 + 0x98, sx.q(*(x0_3 + 0xb0)) << 2)
return zx.q(*(x0_3 + 0xb0))
