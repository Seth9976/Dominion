// 函数: sub_740000
// 地址: 0x740000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_20
float xmm2_8
float xmm4_3
float xmm5_2
float xmm5_3
float xmm6_4

if (arg3 - 2 u<= 9)
    switch (arg3)
        case 2, 9
            var_20 = 0
            int32_t var_18 = 0x3f800000
            xmm2_8 = arg2[1] f* 0f + *arg2 * 0f f+ arg2[2]
        label_7401ee:
            int32_t var_1c = 0
            int32_t var_14 = xmm2_8 ^ (data_8937c0.o).d
            *arg4 = var_20.o
            return arg4
        case 3, 0xa
            var_20 = 0x3f800000
            int32_t var_18_1 = 0
            xmm2_8 = arg2[1] f* 0f f+ *arg2 + arg2[2] f* 0f
            goto label_7401ee
        case 4, 0xb
            int32_t var_1c_1 = 0x3f800000
            int32_t var_18_2 = 0
            int32_t var_14_1 = (*arg2 * 0f f+ arg2[1] + arg2[2] f* 0f) ^ (data_8937c0.o).d
            *arg4 = 0.o
            return arg4
        case 5
            float xmm3 = data_15123f4
            float xmm2 = data_1512400
            float xmm6 = data_15123fc
            float xmm1 = data_15123f8
            xmm5_2 = xmm3 * xmm6 + xmm2 * xmm1
            float xmm4_2 = xmm6 * xmm1 - xmm3 * xmm2
            xmm4_3 = xmm4_2 + xmm4_2
            xmm6_4 = xmm6 * xmm6 - xmm1 * xmm1 - xmm3 * xmm3 + xmm2 * xmm2
        label_740090:
            xmm5_3 = xmm5_2 + xmm5_2
            goto label_7400b6
        case 6
            float xmm6_8 = data_15123f4
            float xmm3_3 = data_1512400
            float xmm2_4 = data_15123fc
            float xmm1_8 = data_15123f8
            xmm5_3 = xmm6_8 * xmm6_8 + xmm3_3 * xmm3_3 - xmm2_4 * xmm2_4 - xmm1_8 * xmm1_8
            float xmm6_10 = xmm6_8 * xmm2_4 - xmm3_3 * xmm1_8
            float xmm4_10 = xmm2_4 * xmm3_3 + xmm6_8 * xmm1_8
            xmm6_4 = xmm6_10 + xmm6_10
            xmm4_3 = xmm4_10 + xmm4_10
        label_7400b6:
            int32_t xmm1_6 =
                (xmm4_3 f* arg2[1] + xmm5_3 f* *arg2 + xmm6_4 f* arg2[2]) ^ (data_8937c0.o).d
            *arg4 = xmm5_3
            *(arg4 + 4) = xmm4_3
            *(arg4 + 8) = xmm6_4
            *(arg4 + 0xc) = xmm1_6
            return arg4
        case 7
            float xmm6_5 = data_15123f4
            float xmm2_2 = data_15123fc
            float xmm3_2 = data_15123f8
            float xmm1_7 = data_1512400
            xmm5_2 = xmm6_5 * xmm3_2 - xmm2_2 * xmm1_7
            xmm4_3 = xmm3_2 * xmm3_2 - xmm2_2 * xmm2_2 + xmm1_7 * xmm1_7 - xmm6_5 * xmm6_5
            float xmm6_7 = xmm6_5 * xmm1_7 + xmm2_2 * xmm3_2
            xmm6_4 = xmm6_7 + xmm6_7
            goto label_740090
sub_63b870(arg1, &data_801800, "Halt", "C:\x\ax2017\Engine\Editor\FabEditor.cpp", 0x2f2, 
    "CalcDragPlane")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
