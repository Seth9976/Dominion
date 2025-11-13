// 函数: sub_642130
// 地址: 0x642130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg5[1] != 0x25)
    sub_63b870(arg6, &data_801800, "ttf->assetType == ASSET_TYPE_TRUETYPE", 
        "C:\x\ax2017\Engine\TTFont.cpp", 0x1ef, "TTFontGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_1 = sub_5af880(arg5)
float xmm4 = arg4
void* ecx_1 = *(eax_1 + 0x38)
int32_t esi = *(ecx_1 + 0x14)
int32_t ecx_2 = *(ecx_1 + 4)
uint32_t ecx_3 = zx.d(*(esi + ecx_2 + 0x13))
float xmm1_1 = xmm4 / _mm_cvtepi32_ps(zx.o((zx.d(*(esi + ecx_2 + 0x12)) << 8) + ecx_3))
float var_10 = arg8 + xmm1_1 f* *(eax_1 + 0x48)
float var_14 = arg9 + xmm1_1 f* *(eax_1 + 0x4c)

if (arg7 == 2 || arg7 == 5 || arg7 == 8)
    uint32_t var_f4_1 = ecx_3
    float xmm0_8
    ecx_3, xmm0_8 = sub_4d5cb0(sub_6417e0(arg5, arg2, xmm4, (zx.o(0)).d) * 0.5f)
    xmm4 = arg4
    var_10 = var_10 - xmm0_8

if (arg7 == 3 || arg7 == 6 || arg7 == 9)
    uint32_t var_f4_2 = ecx_3
    var_10 = var_10 - sub_6417e0(arg5, arg2, xmm4, (zx.o(0)).d)

if (arg7 == 4 || arg7 == 5 || arg7 == 6)
    var_14 = var_14 - sub_4d5cb0(sub_6419c0(arg5, arg4) * 0.5f)

if (arg7 == 7 || arg7 == 8 || arg7 == 9)
    var_14 = var_14 - sub_6419c0(arg5, arg4)

int32_t var_5c = 0x80000000
int32_t var_60 = 0x3f800000
int32_t var_58 = 0
float var_54 = var_10
int32_t var_50 = 0
int32_t var_4c = 0x3f800000
int32_t var_48 = 0
float var_44 = sub_6419c0(arg5, arg4) + var_14
int128_t var_80
__builtin_memcpy(&var_80, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f", 
    0x20)
int128_t var_a0 = var_60.o
int128_t var_90 = var_50.o
void var_e0
int128_t* eax_2 = sub_642e30(&var_e0)
float xmm1_10 = arg3[5]
var_a0 = *eax_2
int128_t var_90_1 = eax_2[1]
int128_t var_80_1 = eax_2[2]
int128_t var_70 = eax_2[3]
float xmm0_23 = *arg3
int32_t __saved_ebp
int32_t eax_3
int32_t ecx_10
float xmm0_26
eax_3, ecx_10, xmm0_26 = sub_4ac580(&__saved_ebp, xmm0_23 * xmm0_23 + xmm1_10 * xmm1_10)
int32_t var_fc = ecx_10
return sub_641d40(eax_3, &var_a0, arg5, arg4, arg2, xmm0_26 * 0.707106769f * arg4, arg6)
