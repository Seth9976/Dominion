// 函数: _ZN15OpenGLInterface20ReleaseTextureBufferEj
// 地址: 0xf8b6a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *(arg1 + 0x4248)
uint32_t* x19 = arg1 + 0x4258
int16_t entry_x1
uint64_t x23 = zx.q(entry_x1)
int32_t* x20 = x22 + mulu.dp.d(x23.d, 0x158)

if (zx.d(*(arg1 + 0x5040)) == 0)
    int32_t x21_1 = *x20
    int32_t var_34 = x21_1
    
    if (*(x22 + x23 * 0x158 + 0xe8) != 0)
        glDeleteRenderbuffers(1)
    
    if (*(x22 + x23 * 0x158 + 0xe4) != 0)
        glDeleteFramebuffers(1)
    
    int32_t x8_3
    
    if (x21_1 == 0)
        x8_3 = 0
    else
        glDeleteTextures(1, &var_34)
        x8_3 = var_34
    
    int32_t* x9_2 = *gOpenGLInterface + 0x40a0
    
    if (*x9_2 != x8_3)
        if (x9_2[0x30] == x8_3)
            goto label_f8b850
        
        goto label_f8b75c
    
    *x9_2 = 0xffffffff
    
    if (x9_2[0x30] == x8_3)
    label_f8b850:
        x9_2[0x30] = 0xffffffff
        
        if (x9_2[1] != x8_3)
            goto label_f8b768
        
        goto label_f8b864
    
label_f8b75c:
    
    if (x9_2[1] != x8_3)
    label_f8b768:
        
        if (x9_2[0x31] == x8_3)
            goto label_f8b878
        
        goto label_f8b774
    
label_f8b864:
    x9_2[1] = 0xffffffff
    
    if (x9_2[0x31] == x8_3)
    label_f8b878:
        x9_2[0x31] = 0xffffffff
        
        if (x9_2[2] != x8_3)
            goto label_f8b780
        
        goto label_f8b88c
    
label_f8b774:
    
    if (x9_2[2] != x8_3)
    label_f8b780:
        
        if (x9_2[0x32] == x8_3)
            goto label_f8b8a0
        
        goto label_f8b78c
    
label_f8b88c:
    x9_2[2] = 0xffffffff
    
    if (x9_2[0x32] == x8_3)
    label_f8b8a0:
        x9_2[0x32] = 0xffffffff
        
        if (x9_2[3] != x8_3)
            goto label_f8b798
        
        goto label_f8b8b4
    
label_f8b78c:
    
    if (x9_2[3] != x8_3)
    label_f8b798:
        
        if (x9_2[0x33] == x8_3)
            goto label_f8b8c8
        
        goto label_f8b7a4
    
label_f8b8b4:
    x9_2[3] = 0xffffffff
    
    if (x9_2[0x33] == x8_3)
    label_f8b8c8:
        x9_2[0x33] = 0xffffffff
        
        if (x9_2[4] != x8_3)
            goto label_f8b7b0
        
        goto label_f8b8dc
    
label_f8b7a4:
    
    if (x9_2[4] != x8_3)
    label_f8b7b0:
        
        if (x9_2[0x34] == x8_3)
            goto label_f8b8f0
        
        goto label_f8b7bc
    
label_f8b8dc:
    x9_2[4] = 0xffffffff
    
    if (x9_2[0x34] == x8_3)
    label_f8b8f0:
        x9_2[0x34] = 0xffffffff
        
        if (x9_2[5] != x8_3)
            goto label_f8b7c8
        
        goto label_f8b904
    
label_f8b7bc:
    
    if (x9_2[5] != x8_3)
    label_f8b7c8:
        
        if (x9_2[0x35] == x8_3)
            goto label_f8b918
        
        goto label_f8b7d4
    
label_f8b904:
    x9_2[5] = 0xffffffff
    
    if (x9_2[0x35] == x8_3)
    label_f8b918:
        x9_2[0x35] = 0xffffffff
        
        if (x9_2[6] != x8_3)
            goto label_f8b7e0
        
        goto label_f8b92c
    
label_f8b7d4:
    
    if (x9_2[6] != x8_3)
    label_f8b7e0:
        
        if (x9_2[0x36] == x8_3)
            goto label_f8b940
        
        goto label_f8b7ec
    
label_f8b92c:
    x9_2[6] = 0xffffffff
    
    if (x9_2[0x36] == x8_3)
    label_f8b940:
        x9_2[0x36] = 0xffffffff
        
        if (x9_2[7] != x8_3)
            goto label_f8b7f8
        
        goto label_f8b954
    
label_f8b7ec:
    
    if (x9_2[7] == x8_3)
    label_f8b954:
        x9_2[7] = 0xffffffff
        
        if (x9_2[0x37] == x8_3)
            x9_2[0x37] = 0xffffffff
    else
    label_f8b7f8:
        
        if (x9_2[0x37] == x8_3)
            x9_2[0x37] = 0xffffffff

uint32_t x9_3 = *x19
*x19 = zx.d(x20[0x54].w)
x20[0x54] = x9_3
x19[1] -= 1
