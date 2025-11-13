// 函数: _Z8DrawTextPKcRK4Mat4RK4Vec2RK3UI2RK10ColorRgbaISC_SC_fb8Language
// 地址: 0x10244ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int96_t v4 = (*(arg2 + 0x10)).12
int96_t var_40 = (*(arg2 + 0x20)).12
int128_t var_30 = *(arg2 + 0x30)
float128 var_60 = *arg2
int96_t var_50 = v4
int128_t v2
v2.d = *arg3
int96_t v1
v1.d = *(arg3 + 4)
int128_t var_100
__builtin_memset(&var_100, 0, 0x98)
int128_t var_e0
var_e0.d = *arg5
var_e0:4.d = *arg6
int128_t var_80
var_80:8.d = arg10.d
int128_t var_c0
var_c0:0xd.d = *gRgbaIWhite
var_e0:8.d = *arg7
float128 v3
v3.q = *V20

if ((arg9.d & 1) != 0)
    var_80:0xc.b = 1
    var_c0:0xd.d = 0

int64_t x11_1 = *(arg4 + 0x1548)
int64_t var_108
var_100:8.q = &var_108
int64_t var_110
int128_t var_90
var_90:8.q = &var_110
var_110 = *(arg4 + 0x1550)
var_108 = x11_1
v4.d = *(arg4 + 0x1558)
var_80.d = v4.d
var_e0:0xc.d = 0x3f800000
int128_t var_f0
var_f0:0xc.d = *(arg4 + 0x1444)
int64_t v5
v5.d = *(arg4 + 0x158c)
v4.d = *(arg4 + 0x1594)
int128_t var_b0
var_b0:4.d = v5.d
var_b0:8.d = v4.d
v4.d = *(arg4 + 0x1598)
int128_t var_d0
var_d0.d = v4.d
int32_t x9_5 = *(arg4 + 0x1564)

if (x9_5 u>= 3)
    pthread_kill(pthread_self(), 6)
    int64_t* x0_4 = XNoReturn()
    XString::~XString()
    sub_1101e04(x0_4)
    noreturn

v5.d = var_60.q.d f* arg8
v5:4.d = v5:4.d f* arg8
var_90.d = 1 | (0x7fffffff & x9_5) << 1
var_60.q = v5
var_60:8.d = var_60:8.d * arg8
float128 v4_1 = v3
v3:8.d = v2.d
v2.d = var_40:8.d
v3:0xc.d = v1.d
v1.d = fconvert.s(1f)
v1.d = v1.d f/ arg8
int64_t v7
v7.d = var_50.q.d f* arg8
v7:4.d = v7:4.d f* arg8
float v16 = var_50:8.d * arg8
int64_t v17
v17.d = var_40.q.d f* arg8
v17:4.d = v17:4.d f* arg8
arg8 = v2.d f* arg8
v2.q = *V21
v4_1:8.q = v4_1.q
var_40:8.d = arg8
arg8:8.q = (v2:4.d f* v1.d).q
var_50.q = v7
var_50:8.d = v16
var_40.q = v17
var_90:4.b = *(arg4 + 0x1568)
float128 var_120 = vaddq_f32(v4_1, vmulq_f32(vsubq_f32(v3, v4_1), arg8, 0))
char var_128
XString::XString(&var_128)
float v0_2 = *(arg4 + 0x1710)
FancyStringData* x3 = *(gUI2 + 0x68)
int64_t x4

if (not(v0_2 <= float.s(0x3f7fbe77)))
    x4 = 0xffffffff
else if (v0_2 >= float.s(0x3a83126f))
    x4 = 0xffffff | zx.q(vcvts_s32_f32(v0_2 * float.s(0x437f0000) + fconvert.s(0.5f))) << 0x18
else
    x4 = 0xffffff

DrawParentedStringFancy4(&var_128, &var_60, &var_120, x3, x4, &var_100)
return XString::~XString()
