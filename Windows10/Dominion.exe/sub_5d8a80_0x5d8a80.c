// 函数: sub_5d8a80
// 地址: 0x5d8a80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t* esi = arg2

if (esi == 0)
    *arg4 = data_bf21e8
    arg4[1] = data_bf21f8
    return arg4

int128_t var_40
int128_t xmm0_3
int32_t ecx

if (data_8db5c4 != 0x27)
    if (data_8db5d4 == 0x27)
        ecx = data_8db5d8
        goto label_5d8ae4
    
    var_40 = data_bf21e8
    xmm0_3 = data_bf21f8
else
    ecx = data_8db5c8
label_5d8ae4:
    
    if (ecx == 0)
        var_40 = data_bf21e8
        xmm0_3 = data_bf21f8
    else
        uint32_t eax_1 = zx.d(ecx.w)
        
        if (eax_1 u>= data_c23bac || *(eax_1 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx)
            var_40 = data_bf21e8
            xmm0_3 = data_bf21f8
        else
            uint32_t eax_4
            eax_4, arg2 = sub_64e7a0(ecx)
            var_40 = *(eax_4 + 0x1620)
            xmm0_3 = *(eax_4 + 0x1630)
int128_t var_30 = xmm0_3
void var_58
int128_t* eax_6 = sub_64f350(&var_58, arg2, esi, &var_58)
int32_t xmm2 = (zx.o(0)).d
float xmm6 = arg3[3]
float xmm5 = arg3[1]
float xmm1[0x4] = *eax_6
void* eax_7 = data_cf65b8
float xmm4_1 = arg3[2] + *arg3
float xmm7_1 = _mm_shuffle_ps(xmm1, xmm1, 0xaa)
float xmm4_2 = xmm4_1 * 0.5f
float xmm3 = float.s(*(eax_7 + 0x18))
float xmm5_2 = (xmm5 + xmm6) * 0.5f
float xmm6_1 = xmm6 - arg3[1]
float xmm7_5 = (xmm7_1 - 0f) f* var_40.d + 0f - ((xmm1[0] - 0f) f* var_40.d + 0f)
int128_t xmm0_14 = (_mm_shuffle_ps(xmm1, xmm1, 0xff) - 0f) f* var_40.d + 0f
    - ((_mm_shuffle_ps(xmm1, xmm1, 0x55) - 0f) f* var_40.d + 0f)
int128_t var_20
float xmm0_18
float xmm4_3

if (arg5 == 0)
    float xmm6_5 = xmm0_14.d
    xmm4_3 = xmm4_2 - xmm7_5 * 0.5f
    float xmm5_4 = xmm5_2 - xmm6_1 * 0.5f - xmm6_5
    float var_44_1 = xmm5_4
    var_20:4.d = xmm5_4
    xmm0_18 = xmm5_4 + xmm6_5
else
    if (arg5 != 1)
        sub_63b870(eax_7, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x30d3, "RectAligned")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm6_3 = xmm6_1 * 0.5f + xmm5_2
    xmm4_3 = xmm4_2 - xmm7_5 * 0.5f
    var_20:4.d = xmm6_3
    xmm0_18 = xmm6_3 f+ var_20.d

var_20:0xc.d = xmm0_18
float xmm5_6 = xmm4_3 + xmm7_5
var_20.d = xmm4_3
int32_t xmm1_6 = (zx.o(0)).d
var_20:8.d = xmm5_6

if (0f <= xmm4_3)
    float xmm0_25 = _mm_cvtepi32_ps(zx.o(*(eax_7 + 0x14)))
    
    if (not(xmm5_6 <= xmm0_25))
        xmm1_6 = xmm0_25 - xmm5_6 + 0f
else
    xmm1_6 = 0f - xmm4_3 + 0f

float xmm4_4 = var_20:4.d

if (0 f<= xmm4_4)
    float xmm0_27 = var_20:0xc.d
    
    if (not(xmm0_27 <= xmm3))
        xmm2 = 0f + xmm3 - xmm0_27
else
    xmm2 = 0f + 0f - xmm4_4

var_40.d = var_40.d
var_30:0xc.d = 0
var_30:4.d = xmm1_6 f+ var_20.d
var_30:8.d = xmm2 f+ xmm4_4
*arg4 = data_800248
arg4[1] = var_30
return arg4
