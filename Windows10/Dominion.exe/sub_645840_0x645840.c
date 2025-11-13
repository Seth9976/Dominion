// 函数: sub_645840
// 地址: 0x645840
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_147aba1 == 0)
    sub_63b870(arg1, &data_801800, "gDraw3DData.submittingRenderItems", 
        "C:\x\ax2017\Engine\Draw3d.cpp", 0x354, "Draw3DDirectionalLight")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ebx = arg4 * 3
float xmm0 = *((ebx << 2) + &data_cf6ae4)
float temp0 = *arg3
xmm0 - temp0
arg1:1.b = (xmm0 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp0) ? 1 : 0) << 2
    | (xmm0 < temp0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t ecx

if (p_1)
label_6458e3:
    ecx = arg4 << 4
label_6458ea:
    *((ebx << 2) + &data_cf6ae4) = *arg3
    arg1 = arg3[2]
    *((ebx << 2) + &data_cf6ae4:8) = arg1
    *(ecx + &data_cf6aa4) = *arg2
else
    float xmm0_1 = *((ebx << 2) + &data_cf6ae4:4)
    float temp1_1 = arg3[1]
    xmm0_1 - temp1_1
    arg1:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        goto label_6458e3
    
    float xmm0_2 = *((ebx << 2) + &data_cf6ae4:8)
    float temp2_1 = arg3[2]
    xmm0_2 - temp2_1
    arg1:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2
        | (xmm0_2 < temp2_1 ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        goto label_6458e3
    
    ecx = arg4 << 4
    float xmm0_3 = (&data_cf6aa4)[arg4].d
    float temp3_1 = *arg2
    xmm0_3 - temp3_1
    arg1:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2
        | (xmm0_3 < temp3_1 ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        goto label_6458ea
    
    float xmm0_4 = (&data_cf6aa4)[arg4]:4
    float temp4_1 = arg2[1]
    xmm0_4 - temp4_1
    arg1:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0) << 2
        | (xmm0_4 < temp4_1 ? 1 : 0)
    bool p_9 = unimplemented  {test ah, 0x44}
    
    if (p_9)
        goto label_6458ea
    
    float xmm0_5 = (&data_cf6aa4)[arg4]:8
    float temp5_1 = arg2[2]
    xmm0_5 - temp5_1
    arg1:1.b = (xmm0_5 == temp5_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, temp5_1) ? 1 : 0) << 2
        | (xmm0_5 < temp5_1 ? 1 : 0)
    bool p_11 = unimplemented  {test ah, 0x44}
    
    if (p_11)
        goto label_6458ea
    
    float xmm0_6 = (&data_cf6aa4)[arg4]:0xc
    float temp6_1 = arg2[3]
    xmm0_6 - temp6_1
    arg1:1.b = (xmm0_6 == temp6_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, temp6_1) ? 1 : 0) << 2
        | (xmm0_6 < temp6_1 ? 1 : 0)
    bool p_13 = unimplemented  {test ah, 0x44}
    
    if (p_13)
        goto label_6458ea
return arg1
