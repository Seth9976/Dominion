// 函数: _Z12GlickoUpdateR6GlickoPKS_PKfS4_if
// 地址: 0x9ec130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_70 = v15
int64_t v14
int64_t var_68 = v14
int64_t v13
int64_t var_60 = v13
int64_t v12
int64_t var_58 = v12
int64_t v10
int64_t var_48 = v10
int64_t v8
int64_t var_38 = v8
float var_74 = arg6
int64_t v9
int64_t v11

if (arg5 s< 1)
    v11.d = 0f
    v9.d = 0f
else
    v10.d = *arg1
    float const* x20_1 = arg4
    float const* x21_1 = arg3
    arg6 = *PI
    uint64_t i_1 = zx.q(arg5)
    void* __offset(Glicko, 0x4) x23_1 = arg2 + 4
    v9.d = 0f
    v13.d = fconvert.s(1f)
    v14.d = arg6 * arg6
    v11.d = 0f
    uint64_t i
    
    do
        v15.d = *x21_1
        x21_1 = &x21_1[1]
        v8.d = *x20_1
        x20_1 = &x20_1[1]
        arg6 = *x23_1
        v12.d = v13.d f/ sqrt(arg6 * arg6 * fconvert.s(3f) f/ v14.d f+ v13.d)
        arg6 = v13.d f/ (expf((v10.d f- *(x23_1 - 4)) * fneg(v12.d)) f+ v13.d)
        i = i_1
        i_1 -= 1
        v11.d = v11.d f+ v12.d f* v12.d * arg6 * (v13.d f- arg6)
        v9.d = v9.d f+ v8.d f* v12.d * (v15.d f- arg6)
        x23_1 += 0xc
    while (i != 1)

arg6 = fconvert.s(1f) f/ v11.d
return GlickoUpdate_Finish(arg1, arg6, v9.d f* arg6, var_74) __tailcall
