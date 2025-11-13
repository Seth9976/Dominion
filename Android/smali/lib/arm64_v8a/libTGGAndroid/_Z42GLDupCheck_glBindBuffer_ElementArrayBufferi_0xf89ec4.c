// 函数: _Z42GLDupCheck_glBindBuffer_ElementArrayBufferi
// 地址: 0xf89ec4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*gGLHasVAO) != 0)
    return glBindBuffer(0x8893, arg1) __tailcall

int32_t* x8_3 = *gOpenGLInterface + 0x4098

if (*x8_3 == arg1)
    return 

*x8_3 = arg1
return glBindBuffer(0x8893) __tailcall
