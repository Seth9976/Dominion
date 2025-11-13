// 函数: _ZN15OpenGLInterface16LockVertexBufferEj
// 地址: 0xf907c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x4248)
int16_t entry_x1
uint64_t x9 = zx.q(entry_x1)
int64_t x0 = *(x8 + mulu.dp.d(x9.d, 0x158) + 0xd8)

if (x0 != 0)
    return x0

int64_t x0_2 = XMalloc(*(x8 + x9 * 0x158 + 8))
*(x8 + mulu.dp.d(x9.d, 0x158) + 0xd8) = x0_2
return x0_2
