// 函数: sub_645e30
// 地址: 0x645e30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = data_147b06c
*(eax_2 + 0x166) = 0
char const* const var_ec
int32_t var_e8
char const* const var_e4
char* ecx

if (data_147aba1 == 0)
    float var_d0
    void* const ecx_2
    int32_t edx_1
    
    if (data_147d2b0 == 0)
        float xmm5_1 = data_cf65c0
        float xmm4_2 = xmm5_1 f/ data_cf65c4
        float xmm5_3 = (xmm5_1 + xmm5_1) * 0.5f
        float xmm4_4 = (xmm4_2 + xmm4_2) * 0.5f
        float var_c4_2 = xmm5_3 + 0f
        var_d0 = 0f - xmm4_4
        float var_c8_2 = xmm4_4 + 0f
        float var_cc_2 = 0f - xmm5_3
        var_d0.o = var_d0.o
        int32_t var_c0_1 = data_cf65c8
        int32_t var_bc_1 = data_cf65cc
        edx_1 = sub_645a20(&var_d0)
        ecx_2 = 2
    label_646029:
        void* eax_7 = ecx_2 * 7
        int128_t var_40 = *((eax_7 << 2) + &data_cf6614)
        int32_t var_28 = (&data_cf662c)[eax_7]
        int64_t var_30 = *((eax_7 << 2) + &data_cf6624)
        void var_60
        int128_t* eax_10 = sub_6dc9a0(&var_60, edx_1, &var_40, &var_60)
        float xmm2_4[0x4] = *eax_10
        uint32_t result = *(eax_10 + 0x18)
        int64_t xmm0_24 = eax_10[1].q
        float xmm4_6 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0x55)
        float xmm3_4 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xaa)
        float xmm1_5 = xmm4_6 * 2f
        int128_t xmm5_6 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xff) * 2f
        float xmm1_6 = xmm1_5 * xmm4_6
        var_d0.o = xmm5_6
        float xmm1_9 = xmm3_4 * 2f * xmm3_4
        float xmm1_11 = xmm2_4[0] * 2f
        float xmm5_7 = xmm5_6 f* xmm4_6
        float xmm2_6 = xmm5_6.d * xmm3_4
        float xmm6_1 = xmm1_11 * xmm4_6
        float xmm7_1 = xmm1_11 * xmm3_4
        float xmm4_7 = 1f - xmm1_11 f* *eax_10
        float xmm1_14 = xmm1_5 * xmm3_4
        float xmm3_6 = (var_d0.o).d f* *eax_10
        float var_a0 = 1f - xmm1_6 - xmm1_9
        float var_9c = xmm6_1 - xmm2_6
        float var_90 = xmm2_6 + xmm6_1
        float var_98 = xmm5_7 + xmm7_1
        int32_t var_94 = xmm0_24.d
        float var_80 = xmm7_1 - xmm5_7
        float var_8c = xmm4_7 - xmm1_9
        float var_78 = xmm4_7 - xmm1_6
        float var_88 = xmm1_14 - xmm3_6
        int32_t var_84 = xmm0_24:4.d
        float var_7c = xmm3_6 + xmm1_14
        uint32_t result_1 = result
        int128_t var_70 = data_893530
        sub_645940(&var_a0)
        CookieCheckFunction(result)
        return result
    
    int32_t eax_3 = data_147d214
    int128_t xmm2_1
    
    if (eax_3 != 0x3e8)
        xmm2_1 = *((eax_3 << 4) + &data_147d1f4)
    else
        var_d0 = (data_147d204 f- data_147d1f4) * 0.5f f+ data_147d1f4
        float var_c8_1 = (data_147d20c f- data_147d1fc) * 0.5f f+ data_147d1fc
        float var_cc_1 = (data_147d208 f- data_147d1f8) * 0.5f f+ data_147d1f8
        float var_c4_1 = (data_147d210 f- data_147d200) * 0.5f f+ data_147d200
        xmm2_1 = var_d0.o
    
    int64_t xmm1_2 = _mm_unpacklo_ps(data_cf65c8, data_cf65cc)
    var_d0.o = xmm2_1
    int32_t var_c0
    var_c0.q = xmm1_2
    edx_1 = sub_645a20(&var_d0)
    eax_2 = data_147d214
    
    if (eax_2 == 0)
        ecx_2 = nullptr
        goto label_646029
    
    if (eax_2 == 1)
        ecx_2 = eax_2
        goto label_646029
    
    if (eax_2 == 0x3e8)
        ecx_2 = 3
        goto label_646029
    
    var_e4 = "RenderUseSubmittedCamera"
    var_e8 = 0x3bc
    var_ec = "C:\x\ax2017\Engine\Draw3d.cpp"
    ecx = "Halt"
else
    var_e4 = "VRIsDrawingEye"
    var_e8 = 0x1f5
    var_ec = "C:\x\ax2017\Engine\VR.cpp"
    ecx = "!gDraw3DData.submittingRenderItems"

sub_63b870(eax_2, &data_801800, ecx, var_ec, var_e8, var_e4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
