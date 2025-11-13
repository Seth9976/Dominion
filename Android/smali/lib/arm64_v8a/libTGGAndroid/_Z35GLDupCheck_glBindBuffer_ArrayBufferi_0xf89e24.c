// 函数: _Z35GLDupCheck_glBindBuffer_ArrayBufferi
// 地址: 0xf89e24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8_1 = *gOpenGLInterface + 0x4094

if (*x8_1 == arg1)
    return 

*x8_1 = arg1
glBindBuffer(0x8892, zx.q(arg1))
uint64_t x8_2 = *gpRenderAppData
*(x8_2 + 0x10) += 1
