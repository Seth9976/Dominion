// 函数: _ZN15OpenGLInterface18CreateVertexBufferEPhi12VertexFormatb
// 地址: 0xf8bba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg4.d
int32_t x20 = arg3
uint8_t* x22 = arg2
int32_t entry_x4

if (arg2 != 0 && (entry_x4 & 1) == 0)
    return OpenGLCreateSharedVertexBuffer(x22, x20, zx.q(x19)) __tailcall

int32_t var_44
glGenBuffers(1, &var_44)
int32_t x1_3 = var_44
int32_t* x8_2 = *gOpenGLInterface + 0x4094

if (*x8_2 != x1_3)
    *x8_2 = x1_3
    glBindBuffer(0x8892, x1_3)
    uint64_t x8_3 = *gpRenderAppData
    *(x8_3 + 0x10) += 1

int64_t x3_1

if ((entry_x4 & 1) != 0)
    x3_1 = 0x88e0
else
    x3_1 = 0x88e4

glBufferData(0x8892, sx.q(x20), x22, x3_1)
uint64_t x8_4 = zx.q(*(arg1 + 0x4258))
int64_t x9_5
int32_t x10_1

if (x8_4.d != *(arg1 + 0x4250))
    x9_5 = *(arg1 + 0x4248)
    x10_1 = *(x9_5 + x8_4 * 0x158 + 0x150)
else
    x10_1 = x8_4.d + 1
    *(arg1 + 0x4250) = x10_1
    x9_5 = *(arg1 + 0x4248)

*(arg1 + 0x4258) = x10_1
int32_t* x9_6 = x9_5 + x8_4 * 0x158
__builtin_memset(x9_6, 0, 0x150)
x9_6[0x54] = x8_4.d | *(arg1 + 0x4260) << 0x10
int32_t x8_6 = *(arg1 + 0x4260)
int32_t x8_7

if (x8_6 == 0xffff)
    x8_7 = 1
else
    x8_7 = x8_6 + 1

*(arg1 + 0x425c) += 1
*(arg1 + 0x4260) = x8_7
int32_t x8_8 = var_44
x9_6[1] = 0
x9_6[2] = x20
uint64_t result = zx.q(x9_6[0x54])
x9_6[3].b = entry_x4.b & 1
x9_6[0x38] = x19
*x9_6 = x8_8
return result
