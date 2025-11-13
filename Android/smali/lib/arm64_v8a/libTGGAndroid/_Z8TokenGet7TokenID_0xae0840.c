// 函数: _Z8TokenGet7TokenID
// 地址: 0xae0840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = DomGetContext()
GameAssert((not.d(x19) u>> 0x1f).b)
GameAssert((*(*(x0 + 8) + 0x19ac) s> x19 ? 1 : 0).b)
return *(x0 + 8) + (sx.q(x19) << 5) + 0x15f68
