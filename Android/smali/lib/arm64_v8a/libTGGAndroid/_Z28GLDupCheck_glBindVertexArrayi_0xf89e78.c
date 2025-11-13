// 函数: _Z28GLDupCheck_glBindVertexArrayi
// 地址: 0xf89e78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8_1 = *gOpenGLInterface + 0x4090

if (*x8_1 == arg1)
    return 

*x8_1 = arg1
glBindVertexArray()
uint64_t x8_2 = *gpRenderAppData
*(x8_2 + 0x14) += 1
