// 函数: sub_73b4a0
// 地址: 0x73b4a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
float var_24 = 0f
float var_34 = 0f
float var_28 = 0f
float var_2c = 0f
POINT point

if ((*(data_147ac28 + 0x1c) & 2) == 0 || *(data_cf65b4 + 0x18) == 0)
    if (data_147def0 == 1)
        data_147def0 = 0
        ShowCursor(1)
else if (data_147def0 != 0)
    if (GetCursorPos(&point) != 0)
        int32_t Y = data_147def8
        int32_t X = data_147def4
        int32_t esi_2 = point.x - X
        int32_t edi_2 = point.y - Y
        SetCursorPos(X, Y)
        var_24 = 0f - _mm_cvtepi32_ps(zx.o(esi_2)) * 0.00499999989f
        var_34 = _mm_cvtepi32_ps(zx.o(edi_2)) * 0.00499999989f + 0f
else if (GetCursorPos(&data_147def4) != 0)
    data_147def0 = 1
    ShowCursor(0)

if ((*(data_147ac28 + 0x1c) & 4) == 0 || *(data_cf65b4 + 0x18) == 0)
    if (data_147def2 == 1)
        data_147def2 = 0
        ShowCursor(1)
else if (data_147def2 != 0)
    if (GetCursorPos(&point) != 0)
        int32_t Y_1 = data_147df08
        int32_t X_1 = data_147df04
        int32_t esi_4 = point.x - X_1
        int32_t edi_4 = point.y - Y_1
        SetCursorPos(X_1, Y_1)
        var_2c = 0f - _mm_cvtepi32_ps(zx.o(esi_4)) * 0.00499999989f
        var_28 = _mm_cvtepi32_ps(zx.o(edi_4)) * 0.00499999989f + 0f
else if (GetCursorPos(&data_147df04) != 0)
    data_147def2 = 1
    ShowCursor(0)

float xmm0_16 = data_147df10 f- data_147df1c
float xmm2_1 = data_147df0c f- data_147df18
float xmm1_1 = data_147df14 f- data_147df20
int32_t xmm0_20 = sub_4ac580(ebp_1, xmm0_16 * xmm0_16 + xmm2_1 * xmm2_1 + xmm1_1 * xmm1_1)
float xmm3_3 = data_147df18
float xmm1_3 = _mm_max_ss(0x3f800000, xmm0_20)
float xmm3_4 = xmm3_3 f- data_147df0c
float xmm2_4 = data_147df20 f- data_147df14
float xmm1_5 = data_147df1c f- data_147df10
float xmm1_10 = 1f / sub_4ac580(ebp_1, xmm1_5 * xmm1_5 + xmm3_4 * xmm3_4 + xmm2_4 * xmm2_4)
float xmm0_27 = xmm2_4 * xmm1_10
float xmm3_6 = xmm3_4 * xmm1_10
float xmm4_1 = xmm1_5 * xmm1_10
float xmm1_12 = xmm0_27 * 0f
float xmm2_6 = xmm4_1 - xmm1_12
float xmm1_13 = xmm1_12 - xmm3_6
float xmm3_8 = xmm3_6 * 0f - xmm4_1 * 0f
float xmm1_18 = 1f / sub_4ac580(ebp_1, xmm1_13 * xmm1_13 + xmm2_6 * xmm2_6 + xmm3_8 * xmm3_8)
float xmm3_10 = xmm1_18 * xmm2_6
float xmm1_19 = xmm1_18 * xmm3_8
float xmm4_3 = xmm1_18 * xmm1_13
float xmm0_42 = xmm3_10 * xmm1_3 * var_2c * 0.300000012f
    - (xmm1_19 * xmm4_1 - xmm4_3 * xmm0_27) * xmm1_3 * var_28 * 0.300000012f
float xmm0_43 = xmm0_42 f+ data_147df18
data_147df18 = xmm0_43
float xmm0_51 = xmm4_3 * xmm1_3 * var_2c * 0.300000012f
    - (xmm3_10 * xmm0_27 - xmm1_19 * xmm3_6) * xmm1_3 * var_28 * 0.300000012f
float xmm1_32 = xmm0_51 f+ data_147df1c
float xmm0_53 = xmm0_51 f+ data_147df10 - xmm1_32
data_147df1c = xmm1_32
float xmm1_37 = xmm1_19 * xmm1_3 * var_2c * 0.300000012f
    - (xmm4_3 * xmm3_6 - xmm3_10 * xmm4_1) * xmm1_3 * var_28 * 0.300000012f
float xmm2_8 = xmm1_37 f+ data_147df20
float xmm1_39 = xmm0_42 f+ data_147df0c
point.y = xmm2_8
float xmm0_56 = xmm1_37 f+ data_147df14 - xmm2_8
data_147df20 = xmm2_8
float xmm1_40 = xmm1_39 - xmm0_43
float xmm0_58 = var_24 * 0.5f
float xmm0_59 = sub_4ae0d0(ebp_1, xmm0_58)
float xmm0_61 = sub_4ae0f0(ebp_1, xmm0_58)
float xmm5_1 = xmm0_61 * 0f
float xmm6_2 = xmm0_61 * xmm0_61
float xmm2_10 = xmm0_59 * xmm0_59
float xmm7_2 = xmm5_1 * xmm5_1
float xmm3_13 = xmm0_61 * xmm0_59
float xmm4_10 = xmm0_53 + xmm0_53
float xmm4_12 = xmm5_1 * xmm0_61
float xmm5_2 = xmm5_1 * xmm0_59
float xmm1_43 = xmm0_56 + xmm0_56
float xmm2_12 = xmm5_2 + xmm4_12
float xmm4_13 = xmm4_12 - xmm5_2
float xmm0_65 = xmm7_2 + xmm2_10 - xmm7_2 - xmm6_2
float var_28_1 = xmm0_65
float xmm5_6 = xmm0_65 * xmm1_40 + (xmm7_2 - xmm3_13) * xmm4_10 + xmm1_43 * xmm2_12
float xmm0_72 = xmm1_40 + xmm1_40
float xmm0_74 = xmm2_10 - xmm7_2
float xmm5_10 = (xmm7_2 + xmm0_74 - xmm6_2) * xmm0_53
float var_1c_4 = xmm5_10
float xmm5_11 = xmm5_10 + (xmm3_13 + xmm7_2) * xmm0_72
float var_1c_5 = xmm5_11
float xmm3_17 = xmm5_11 + xmm1_43 * xmm4_13
float xmm1_48 = xmm4_10 * xmm2_12 + xmm0_72 * xmm4_13 + (xmm0_74 - xmm7_2 + xmm6_2) * xmm0_56
float xmm2_15 = xmm5_6 * 0f - xmm3_17 * 0f
float xmm3_19 = xmm1_48 * 0f
float xmm1_50 = xmm3_17 - xmm3_19
float xmm3_20 = xmm3_19 - xmm5_6
float xmm1_55 = 1f / sub_4ac580(ebp_1, xmm1_50 * xmm1_50 + xmm3_20 * xmm3_20 + xmm2_15 * xmm2_15)
float xmm0_86 = var_34 * 0.5f
float xmm0_87 = sub_4ae0d0(ebp_1, xmm0_86)
float xmm0_89 = sub_4ae0f0(ebp_1, xmm0_86)
float xmm4_16 = xmm1_55 * xmm1_50 * xmm0_89
float xmm2_18 = xmm1_55 * xmm3_20 * xmm0_89
float xmm6_5 = xmm1_55 * xmm2_15 * xmm0_89
float xmm0_91 = xmm0_87 * xmm0_87
float xmm3_22 = xmm4_16 * xmm4_16
float xmm0_93 = xmm2_18 * xmm2_18
float xmm5_15 = xmm2_18 * xmm4_16
float xmm4_18 = xmm6_5 * xmm0_87
float xmm1_58 = xmm6_5 * xmm4_16
float xmm0_95 = xmm6_5 * xmm6_5
float xmm7_4 = xmm3_17 + xmm3_17
float xmm6_7 = xmm2_18 * xmm0_87
float xmm2_20 = xmm1_48 + xmm1_48
float xmm1_62 = xmm3_22 + xmm0_91 - xmm0_93 - xmm0_95
float var_14_6 = xmm1_62
float xmm1_64 = xmm1_62 * xmm5_6 + (xmm5_15 - xmm4_18) * xmm7_4
float var_14_8 = xmm1_64
float xmm1_65 = xmm1_64 + (xmm6_7 + xmm1_58) * xmm2_20
float xmm0_105 = xmm0_91 - xmm3_22
float xmm3_24 = xmm6_5 * xmm2_18
float xmm1_67 = xmm5_6 + xmm5_6
float xmm3_26 = xmm4_16 * xmm0_87
float var_20_4 = xmm3_26
float xmm2_22 = (xmm0_105 + xmm0_93 - xmm0_95) * xmm3_17 + (xmm4_18 + xmm5_15) * xmm1_67
    + (xmm3_24 - xmm3_26) * xmm2_20
float xmm5_20 = (xmm3_26 + xmm3_24) * xmm7_4 + (xmm1_58 - xmm6_7) * xmm1_67
    + (xmm0_105 - xmm0_93 + xmm0_95) * xmm1_48
float xmm2_23 = 1f / sub_4ac580(ebp_1, xmm2_22 * xmm2_22 + xmm1_65 * xmm1_65 + xmm5_20 * xmm5_20)
float xmm0_129
float xmm1_79
float xmm2_25

if (0x3fefae1480000000 f<= __andps_xmmxud_memxud(
        _mm_cvtps_pd(xmm2_23 * xmm2_22 * 0f + xmm2_23 * xmm1_65 * 0f + xmm2_23 * xmm5_20), 
        data_8937b0.o))
    xmm0_129 = xmm5_6
    xmm1_79 = xmm3_17
    xmm2_25 = xmm1_48
else
    xmm0_129 = xmm1_65
    xmm1_79 = xmm2_22
    xmm2_25 = xmm5_20

float xmm2_26 = xmm2_25 f+ point.y
void* ecx_1 = data_147abe8
double* result = data_147df54
data_147df0c = xmm0_129 + xmm0_43
data_147df10 = xmm1_79 + xmm1_32
data_147df14 = xmm2_26

if (ecx_1 == 0)
    sub_63b870(result, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* ecx_2 = *(ecx_1 + 0x10)

if (result != 0)
    uint32_t edx_1 = zx.d(result.w)
    
    if (edx_1 u< *(ecx_2 + 4))
        void* esi_6 = edx_1 * 0x7c + *ecx_2
        
        if (*(esi_6 + 0x78) == result && esi_6 != 0)
            float xmm0_132 = data_147df58 f+ data_147df84
            data_147df58 = xmm0_132
            float xmm0_133 = xmm0_132 * 0.5f
            point.y = xmm0_133
            float xmm0_134 = sub_4ae0d0(ebp_1, xmm0_133)
            float var_54_1 = xmm0_134
            float xmm0_136
            result, xmm0_136 = sub_4ae0f0(ebp_1, point.y)
            float var_58_1 = xmm0_136
            float xmm1_82 = xmm0_136 * 0f
            float xmm4_23 = xmm0_136 * xmm0_134
            float xmm3_29 = xmm0_134 * xmm0_134
            float xmm0_138 = xmm0_134 * xmm1_82
            float xmm2_28 = xmm1_82 * xmm1_82
            float xmm7_6 = xmm0_136 * xmm0_136
            float xmm6_9 = xmm0_136 * xmm1_82
            float var_5c_1 = xmm1_82
            point.y = xmm2_28
            float xmm6_11 = xmm3_29 - xmm2_28
            float y = point.y
            float xmm5_24 = (xmm0_138 + xmm6_9) * 0f
            float xmm1_84 = xmm6_9 - xmm0_138
            float var_6c_1 = (xmm2_28 + xmm3_29 - y - xmm7_6) * 3f + (y - xmm4_23) * 0f
                + xmm5_24 f+ data_147df64 - 3f
            float var_68_1 =
                (y + xmm6_11 - xmm7_6) * 0f + (xmm4_23 + y) * 6f + xmm1_84 * 0f f+ data_147df68 + 0f
            float var_64_1 =
                (xmm6_11 - y + xmm7_6) * 0f + xmm1_84 * 6f + xmm5_24 f+ data_147df6c + 0f
            *(esi_6 + 0x2c) = 0x3f800000.o
            *(esi_6 + 0x3c) = xmm1_82.o

return result
