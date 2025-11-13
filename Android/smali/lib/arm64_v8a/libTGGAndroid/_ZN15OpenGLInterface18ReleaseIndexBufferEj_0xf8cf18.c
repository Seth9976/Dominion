// 函数: _ZN15OpenGLInterface18ReleaseIndexBufferEj
// 地址: 0xf8cf18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 == 0)
    return 

int32_t x8_1 = entry_x1 & 0xffff

if (x8_1 u>= *(arg1 + 0x4250))
    return 

int64_t x21_1 = *(arg1 + 0x4248)
int32_t* x20_1 = x21_1 + mulu.dp.d(x8_1, 0x158)

if (x20_1[0x54] != entry_x1)
    return 

int32_t var_24 = *x20_1
uint32_t x1_1 = glDeleteBuffers(1, &var_24)
void* x0 = *(x21_1 + zx.q(x8_1) * 0x158 + 0xd8)

if (x0 != 0)
    x1_1 = XFree(x0)
    *(x21_1 + zx.q(x8_1) * 0x158 + 0xd8) = 0

int32_t x9_4 = *(arg1 + 0x4258)
*(arg1 + 0x4258) = zx.d(x20_1[0x54].w)
x20_1[0x54] = x9_4
*(arg1 + 0x425c) -= 1
OpenGLRemoveVAOWithShaderOrIndexBuffer(0, x1_1)
