// 函数: sub_fb984c
// 地址: 0xfb984c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + (sx.q(arg2) << 2)
double v1

if (arg4.d f== 0f || arg4.d == 0x7fc00000)
    *x19 = arg5.d
    *(x19 + 4) = arg6
    arg7:4.d = arg8
    arg5:4.d = arg6
    v1 = vsub_f32(arg7, arg5)
label_fb9920:
    arg4.d = v1:4.d
    float v0_1
    v0_1, arg1 = atan2f(arg4.d, v1.d, arg6)
    *(x19 + 8) = v0_1
    return 

int128_t v18
v18.d = fconvert.s(1f)
int128_t v17
v17.d = arg11
v18.d = v18.d f- arg4.d
arg5:4.d = arg6
arg6 = v18.d f* arg4.d
arg7:4.d = arg8
arg8 = v18.d f* v18.d
float v19 = arg6 * fconvert.s(3f)
float v16 = arg4.d f* arg4.d
int128_t v20
v20.d = v18.d f* arg8
v18.d = v18.d f* v19
arg9:4.d = arg10.d
arg10.d = v16 f* arg4.d
v19 = v19 f* arg4.d
v20.d = arg5.d f* v20.d
v20:4.d = arg5:4.d f* v20.d
int64_t v7
v7:4.d = v17.d
v17.d = arg7.d f* v18.d
v17:4.d = arg7:4.d f* v18.d
v18.d = arg9.d f* v19
v18:4.d = arg9:4.d f* v19
arg10.d = v7.d f* arg10.d
arg10:4.d = v7:4.d f* arg10.d
int128_t v6 = vadd_f32(vadd_f32(vadd_f32(v20, v17), v18), arg10)
*(arg1 + (zx.q(arg2) << 0x20 s>> 0x1e)) = v6.q

if (arg3 == 0)
    return 

arg4.q = fconvert.d(arg4.d)

if (arg4.q f>= 0.001)
    arg4.d = arg5.d f* arg8
    arg4:4.d = arg5:4.d f* arg8
    arg5.d = arg7.d f* arg6
    arg5:4.d = arg7:4.d f* arg6
    int128_t v1_1
    v1_1.d = arg9.d f* v16
    v1_1:4.d = arg9:4.d f* v16
    v1 = vsub_f32(v6, vadd_f32(vadd_f32(arg4, vadd_f32(arg5, arg5)), v1_1))
else
    v1 = vsub_f32(arg7, arg5)

goto label_fb9920
