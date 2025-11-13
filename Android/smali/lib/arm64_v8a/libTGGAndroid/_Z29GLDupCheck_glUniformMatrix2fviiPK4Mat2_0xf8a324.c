// 函数: _Z29GLDupCheck_glUniformMatrix2fviiPK4Mat2
// 地址: 0xf8a324
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s>= 1)
    Mat2 const* x21_1 = arg3
    uint64_t i_1 = zx.q(arg2)
    void var_68
    void* x23_1 = &var_68
    uint64_t i
    
    do
        int32_t v0_1
        int32_t v1_1
        int32_t v2_1
        int32_t v3_1
        v0_1, v1_1, v2_1, v3_1 = Mat2Transpose(x21_1)
        *(x23_1 - 8) = v0_1
        *(x23_1 - 4) = v1_1
        *x23_1 = v2_1
        *(x23_1 + 4) = v3_1
        x23_1 += 0x10
        x21_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

void var_70
return glUniformMatrix2fv(zx.q(arg1), zx.q(arg2), 0, &var_70)
