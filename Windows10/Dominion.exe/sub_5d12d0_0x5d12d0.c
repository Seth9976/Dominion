// 函数: sub_5d12d0
// 地址: 0x5d12d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = sub_4bb9f0(arg2 + 0x38, arg3, "tbl_global_play")
void* esi = *(arg2 + 0x5c)

if (esi == 0)
    sub_63b870(eax_2, &data_801800, "loc.userData", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
        0x192a, "CalcPlayerInPlayTransformNewPlayer")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_3 = sub_5cc410(eax_2, data_b809cc, 0x3e9, 0, 0)
int32_t var_70_1
int32_t ecx_1

if (eax_3 != 0)
    ecx_1 = *(eax_3 + 0x88)
    var_70_1 = ecx_1

if (eax_3 == 0 || ecx_1 s< 1)
    var_70_1 = 1

void* eax_4 = data_cf65b8
int16_t esi_1 = (*(esi + 0x98)).w
bool var_81 = 1.75824165f <= (_mm_cvtepi32_ps(zx.o(*(eax_4 + 0x14))) - 0f)
    / (_mm_cvtepi32_ps(zx.o(*(eax_4 + 0x18))) - 0f)
uint32_t esi_2 = zx.d(esi_1)

if (esi_2 u>= 0x320)
    sub_591930()

void* eax_6 = sub_571b30(*(esi_2 * 0x64 + &data_b82524), data_b81820)
char var_82 = 0

if (((*(eax_6 + 0x98) & 0x7f000400) | (*(eax_6 + 0x9c) & 0x940)) != 0)
    var_82 = 1

uint32_t eax_9 = sub_64e7a0(eax_2)
float var_30 = 0f
int32_t var_2c = 0
float xmm0_3 = *(eax_9 + 0x16cc)
int32_t var_24 = *(eax_9 + 0x16d0)
var_30.o = var_30.o
float var_40[0x4]
float xmm1_4[0x4] = *sub_655430(&var_40, &var_30, eax_9 + 0x1620, &var_40)
float* eax_11
eax_11.b = var_81
var_30.o = xmm1_4
float xmm0_7 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xff)
float xmm1_5 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0x55)
float xmm0_8 = xmm0_7 - xmm1_5
float xmm4_1 = xmm0_8 / 712f
float xmm1_7 = xmm0_8 / 430f
float xmm0_9

xmm0_9 = eax_11.b == 0 ? xmm4_1 : xmm1_7

float xmm0_11 = xmm0_9 * 463f / 735f
float var_80
float var_7c
float var_78
int32_t esi_3
int32_t edi_1

if (var_82 == 0)
    var_80 = xmm0_11 * 735f
    
    if (eax_11.b == 0)
        var_78 = xmm4_1
        var_7c = xmm4_1 * 712f
        esi_3 = *(arg2 + 0xc)
        edi_1 = 0
    else
        edi_1 = *(arg2 + 0xc)
        esi_3 = 0
        var_78 = xmm1_7
        var_7c = xmm1_7 * 430f
else
    var_78 = xmm0_11
    var_7c = xmm0_11 * 463f
    var_80 = xmm0_11 * 735f
    
    if (eax_11.b == 0)
        esi_3 = *(arg2 + 0xc)
        edi_1 = 0
    else
        edi_1 = *(arg2 + 0xc)
        esi_3 = 0

float xmm5 = *(sub_64e7a0(eax_2) + 0x138c)
float xmm4_6 =
    (xmm0_3 + var_30 - (float.s(var_70_1 - 1) * 10f * xmm4_1 + float.s(var_70_1) * var_80)) * 0.5f
    + float.s(edi_1) * 463f * xmm1_7 + float.s(esi_3) * 463f * xmm4_1 + xmm0_11 * 0f
    + float.s(edi_1 + esi_3) * 10f * xmm4_1
arg4[5] = xmm4_6 + xmm5
arg4[6] = (xmm0_8 - var_7c) * 0.5f + xmm1_5
arg4[7] = 0
*(arg4 + 4) = data_800248
*arg4 = var_78
CookieCheckFunction(arg4)
return arg4
