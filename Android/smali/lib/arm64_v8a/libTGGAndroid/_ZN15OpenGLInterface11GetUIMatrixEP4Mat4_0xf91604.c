// 函数: _ZN15OpenGLInterface11GetUIMatrixEP4Mat4
// 地址: 0xf91604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* entry_x1
int32_t* x19 = entry_x1
int128_t v1 = *(M4I + 0x30)
int128_t v2 = *M4I
int128_t v3 = *(M4I + 0x10)
entry_x1[2] = *(M4I + 0x20)
entry_x1[3] = v1
*entry_x1 = v2
entry_x1[1] = v3
int128_t v0

if (zx.d(*(arg1 + 0x4274)) == 0)
    int32_t x0_1
    x0_1, v0, v1, v2 = AppGetOrientation()
    
    if (x0_1 u> 3)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return OpenGL_DeleteAllState() __tailcall
    
    switch (x0_1)
        case 0
            v1.d = fconvert.s(2f)
            v2.d = fconvert.s(-2f)
            v0.d = *(*gAppInterface + 0x28)
            v0.d = float.s(v0.d)
            v0.d = v1.d f/ v0.d
            *x19 = v0.d
            v0.d = fconvert.s(1f)
            v1.d = *(*gAppInterface + 0x2c)
            v1.d = float.s(v1.d)
            v1.d = v2.d f/ v1.d
            v2.d = fconvert.s(-1f)
        case 1
            *x19 = 0
            v2.d = fconvert.s(-2f)
            v1.d = 0f
            void* x8_6 = *gAppInterface
            v0.d = *(x8_6 + 0x28)
            v0.d = float.s(v0.d)
            v0.d = v2.d f/ v0.d
            x19[4] = v0.d
            v0.d = fconvert.s(1f)
            v2.d = v2.d f/ float.s(*(x8_6 + 0x2c))
            x19[1] = v2.d
            v2.d = 0f
        case 2
            v1.d = fconvert.s(-2f)
            v2.d = fconvert.s(2f)
            v0.d = *(*gAppInterface + 0x28)
            v0.d = float.s(v0.d)
            v0.d = v1.d f/ v0.d
            *x19 = v0.d
            v0.d = fconvert.s(-1f)
            v1.d = *(*gAppInterface + 0x2c)
            v1.d = float.s(v1.d)
            v1.d = v2.d f/ v1.d
            v2.d = fconvert.s(1f)
        case 3
            *x19 = 0
            float v3_2 = fconvert.s(2f)
            v2.d = fconvert.s(-1f)
            v1.d = 0f
            uint64_t x8_7 = *gAppInterface
            v0.d = *(x8_7 + 0x28)
            v0.d = float.s(v0.d)
            v0.d = v3_2 f/ v0.d
            x19[4] = v0.d
            v0.d = *(x8_7 + 0x2c)
            v0.d = float.s(v0.d)
            v0.d = v3_2 f/ v0.d
            x19[1] = v0.d
            v0.d = fconvert.s(-1f)
else
    v0.d = fconvert.s(1f)
    *x19 = 0x3b000000
    v2.d = fconvert.s(-1f)
    v1.d = float.s(0xbb000000)

x19[5] = v1.d
x19[3] = v2.d
x19[7] = v0.d
int64_t result
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
result, v0_1, v1_1, v2_1, v3_1 = Mat4Multiply(*gpRenderAppData + 0x124, x19)
int128_t var_40
*(x19 + 0x20) = var_40
int128_t var_30
*(x19 + 0x30) = var_30
int128_t var_60
*x19 = var_60
int128_t var_50
*(x19 + 0x10) = var_50

if (zx.d(*(arg1 + 0x4274)) != 0)
    v0_1.d = x19[5]
    x19[7] = 0xbf800000
    v0_1.d = fneg(v0_1.d)
    x19[5] = v0_1.d

return result
