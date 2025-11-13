// 函数: _ZN15OpenGLInterface19VertexBufferIsBoundEj
// 地址: 0xf8cfbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 != 0)
    int32_t x8_1 = entry_x1 & 0xffff
    
    if (x8_1 u< *(arg1 + 0x4250))
        int64_t x9_2 = *(arg1 + 0x4248)
        return zx.q(x9_2 != 0 ? 1 : 0)
            & zx.q(*(x9_2 + mulu.dp.d(x8_1, 0x158) + 0x150) == entry_x1 ? 1 : 0)

return 0
