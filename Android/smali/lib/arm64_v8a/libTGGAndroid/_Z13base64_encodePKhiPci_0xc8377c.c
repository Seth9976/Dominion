// 函数: _Z13base64_encodePKhiPci
// 地址: 0xc8377c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = sx.q(arg2)

if (arg2 s>= 3)
    void* x10_16
    
    do
        i -= 3
        *arg3 =
            (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx.q(*arg1) u>> 2]
        arg3[1] = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[(
            zx.q(zx.d(*arg1) << 4) & 0x30) | zx.q(arg1[1]) u>> 4]
        arg3[2] = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[(
            zx.q(zx.d(arg1[1]) << 2) & 0x3c) | zx.q(arg1[2]) u>> 6]
        uint64_t x10_14 = zx.q(arg1[2])
        arg1 = &arg1[3]
        x10_16 = &arg3[4]
        arg3[3] =
            (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[x10_14 & 0x3f]
        arg3 = x10_16
    while (i s> 2)
    
    arg3 = x10_16

if (i != 0)
    *arg3 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx.q(*arg1) u>> 2]
    int64_t x9 = zx.q(zx.d(*arg1) << 4) & 0x30
    char x8_2
    
    if (i != 1)
        arg3[1] = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx.q(x9.d)
            | zx.q(arg1[1]) u>> 4]
        x8_2 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[
            zx.q(zx.d(arg1[1]) << 2) & 0x3c]
    else
        arg3[1] = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[x9]
        x8_2 = 0x3d
    
    arg3[2] = x8_2
    arg3[3] = 0x3d
    arg3 = &arg3[4]

*arg3 = 0
