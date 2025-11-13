// 函数: sub_697400
// 地址: 0x697400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
float var_14[0x4]
int128_t* eax_4 =
    sub_696f80(&var_14, &arg3[0x13], arg2, &var_14, &arg3[0xb], &arg3[0xf], *arg5, arg5[1])
float xmm1[0x4] = *eax_4
float xmm2_1 = _mm_shuffle_ps(xmm1, xmm1, 0xaa)
var_14 = xmm1

if (not(xmm2_1 f< xmm1))
    float xmm3_1 = var_14[3]
    
    if (not(xmm3_1 < var_14[1]))
        float xmm4 = *arg3
        float xmm0_2 = __maxss_xmmss_memss(0, arg3[3])
        float xmm5 = arg3[1]
        float xmm1_2 = arg3[7]
        float xmm0_3 = arg3[6]
        float xmm3_4 = arg3[5] f+ 1f
        float xmm2_6 = arg3[4] f+ 1f
        float xmm5_4 = (xmm5 + var_14[1] * xmm0_2 - xmm1_2) * xmm3_4 + xmm1_2
        *arg4 = (xmm4 + xmm1 f* xmm0_2 - xmm0_3) * xmm2_6 + xmm0_3
        arg4[1] = xmm5_4
        arg4[2] = (xmm4 + xmm2_1 * xmm0_2 - xmm0_3) * xmm2_6 + xmm0_3
        arg4[3] = (xmm5 + xmm3_1 * xmm0_2 - xmm1_2) * xmm3_4 + xmm1_2
        return arg4

int128_t var_34_1
var_34_1:0xc.d = "RectBottomRight"
var_34_1:8.d = 0x12d
var_34_1:4.d = "C:\x\ax2017\Engine\Rect.cpp"
sub_63b870(eax_4, &data_801800, "RectIsNormalized(r)")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
