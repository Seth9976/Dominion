// 函数: sub_6b3d40
// 地址: 0x6b3d40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float var_10 = 0f
float var_c = 0f

if (arg8 == 2 || arg8 == 5 || arg8 == 8)
    var_c = 0f - sub_4d5cb0(sub_6b43a0(arg4, arg3, arg9, arg10) * 0.5f)

if (arg8 == 3 || arg8 == 6 || arg8 == 9)
    var_c = var_c - sub_6b43a0(arg4, arg3, arg9, arg10)

float xmm1_4

if (arg8 == 4 || arg8 == 5 || arg8 == 6)
    xmm1_4 = 0f - sub_4d5cb0(_mm_cvtepi32_ps(zx.o(sub_6b4780(arg4))) * 0.5f)
    var_10 = xmm1_4
else
    xmm1_4 = (zx.o(0)).d

if (arg8 == 7 || arg8 == 8 || arg8 == 9)
    xmm1_4 = var_10 - _mm_cvtepi32_ps(zx.o(sub_6b4780(arg4)))

float var_4c = var_c
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_48 = 0
float var_3c = xmm1_4
int32_t var_58
int128_t var_98 = var_58.o
int32_t var_44 = 0x3f800000
int32_t var_40 = 0
int128_t var_78
__builtin_memcpy(&var_78, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x24)
int128_t var_88 = var_48.o
float var_d8[0x10]
float* eax_3 = sub_642ae0(&var_d8, &var_98, arg2, &var_d8)
var_98 = *eax_3
int128_t var_88_1 = *(eax_3 + 0x10)
int128_t var_78_1 = *(eax_3 + 0x20)
int128_t var_68 = *(eax_3 + 0x30)
float var_ec_1 = arg10
float var_f0 = arg9
return sub_6b3460(eax_3, arg4, &var_98, arg5, arg6, arg7, arg3)
