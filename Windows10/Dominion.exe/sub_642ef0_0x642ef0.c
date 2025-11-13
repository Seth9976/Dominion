// 函数: sub_642ef0
// 地址: 0x642ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm0 = data_cf6684
int32_t ebx
int32_t var_58 = ebx
int32_t esi
int32_t var_5c = esi
int32_t edi
int32_t var_60 = edi
float temp0 = *(arg1 + 8)
xmm0 - temp0
int32_t eax
eax:1.b = (xmm0 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp0) ? 1 : 0) << 2
    | (xmm0 < temp0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
label_643070:
    float xmm1_1[0x4] = data_cf688c
    float xmm3_1[0x4] = data_cf689c
    float xmm4_1[0x4] = data_cf68ac
    data_cf6684.o = *(arg1 + 8)
    data_cf6694 = *(arg1 + 0x18)
    data_cf66a4 = *(arg1 + 0x28)
    int128_t xmm0_20 = *(arg1 + 0x38)
    data_cf6744 = xmm1_1
    data_cf66b4 = xmm0_20
    int128_t xmm0_21 = data_cf68bc
    data_cf6754 = xmm3_1
    data_cf6774 = xmm0_21
    data_cf6764 = xmm4_1
    float xmm2_1 = *(arg1 + 0x168)
    float xmm0_23 = xmm2_1 * _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
    float xmm3_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
    float xmm4_2 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xaa)
    data_cf6744:8 = xmm0_23
    data_cf6a58 = xmm2_1
    data_cf6754:8 = xmm2_1 * xmm3_2
    data_cf6764:8 = xmm2_1 * xmm4_2
    float var_48[0x10]
    float* eax_2 = sub_642ae0(&var_48, &data_cf6684, &data_cf6744, &var_48)
    data_cf66c4 = *eax_2
    data_cf66d4 = *(eax_2 + 0x10)
    data_cf66e4 = *(eax_2 + 0x20)
    data_cf66f4 = *(eax_2 + 0x30)
    float* eax_4 = sub_642ae0(&var_48, &data_cf6744, &data_cf67c4, &var_48)
    data_cf6784 = *eax_4
    data_cf6794 = *(eax_4 + 0x10)
    data_cf67a4 = *(eax_4 + 0x20)
    data_cf67b4 = *(eax_4 + 0x30)
    float* eax_6 = sub_642ae0(&var_48, &data_cf66c4, &data_cf67c4, &var_48)
    data_cf6704 = *eax_6
    data_cf6714 = *(eax_6 + 0x10)
    data_cf6724 = *(eax_6 + 0x20)
    data_cf6734 = *(eax_6 + 0x30)
else
    float xmm0_1 = data_cf6688
    float temp1_1 = *(arg1 + 0xc)
    xmm0_1 - temp1_1
    eax:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        goto label_643070
    
    float xmm0_2 = data_cf668c
    float temp2_1 = *(arg1 + 0x10)
    xmm0_2 - temp2_1
    eax:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2
        | (xmm0_2 < temp2_1 ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        goto label_643070
    
    float xmm0_3 = data_cf6690
    float temp3_1 = *(arg1 + 0x14)
    xmm0_3 - temp3_1
    eax:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2
        | (xmm0_3 < temp3_1 ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        goto label_643070
    
    float xmm0_4 = data_cf6694.d
    float temp4_1 = *(arg1 + 0x18)
    xmm0_4 - temp4_1
    eax:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0) << 2
        | (xmm0_4 < temp4_1 ? 1 : 0)
    bool p_9 = unimplemented  {test ah, 0x44}
    
    if (p_9)
        goto label_643070
    
    float xmm0_5 = data_cf6694:4
    float temp5_1 = *(arg1 + 0x1c)
    xmm0_5 - temp5_1
    eax:1.b = (xmm0_5 == temp5_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, temp5_1) ? 1 : 0) << 2
        | (xmm0_5 < temp5_1 ? 1 : 0)
    bool p_11 = unimplemented  {test ah, 0x44}
    
    if (p_11)
        goto label_643070
    
    float xmm0_6 = data_cf6694:8
    float temp7_1 = *(arg1 + 0x20)
    xmm0_6 - temp7_1
    eax:1.b = (xmm0_6 == temp7_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, temp7_1) ? 1 : 0) << 2
        | (xmm0_6 < temp7_1 ? 1 : 0)
    bool p_13 = unimplemented  {test ah, 0x44}
    
    if (p_13)
        goto label_643070
    
    float xmm0_7 = data_cf6694:0xc
    float temp8_1 = *(arg1 + 0x24)
    xmm0_7 - temp8_1
    eax:1.b = (xmm0_7 == temp8_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, temp8_1) ? 1 : 0) << 2
        | (xmm0_7 < temp8_1 ? 1 : 0)
    bool p_15 = unimplemented  {test ah, 0x44}
    
    if (p_15)
        goto label_643070
    
    float xmm0_8 = data_cf66a4.d
    float temp9_1 = *(arg1 + 0x28)
    xmm0_8 - temp9_1
    eax:1.b = (xmm0_8 == temp9_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, temp9_1) ? 1 : 0) << 2
        | (xmm0_8 < temp9_1 ? 1 : 0)
    bool p_17 = unimplemented  {test ah, 0x44}
    
    if (p_17)
        goto label_643070
    
    float xmm0_9 = data_cf66a4:4
    float temp10_1 = *(arg1 + 0x2c)
    xmm0_9 - temp10_1
    eax:1.b = (xmm0_9 == temp10_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, temp10_1) ? 1 : 0) << 2
        | (xmm0_9 < temp10_1 ? 1 : 0)
    bool p_19 = unimplemented  {test ah, 0x44}
    
    if (p_19)
        goto label_643070
    
    float xmm0_10 = data_cf66a4:8
    float temp11_1 = *(arg1 + 0x30)
    xmm0_10 - temp11_1
    eax:1.b = (xmm0_10 == temp11_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, temp11_1) ? 1 : 0) << 2
        | (xmm0_10 < temp11_1 ? 1 : 0)
    bool p_21 = unimplemented  {test ah, 0x44}
    
    if (p_21)
        goto label_643070
    
    float xmm0_11 = data_cf66a4:0xc
    float temp12_1 = *(arg1 + 0x34)
    xmm0_11 - temp12_1
    eax:1.b = (xmm0_11 == temp12_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, temp12_1) ? 1 : 0) << 2
        | (xmm0_11 < temp12_1 ? 1 : 0)
    bool p_23 = unimplemented  {test ah, 0x44}
    
    if (p_23)
        goto label_643070
    
    float xmm0_12 = data_cf66b4.d
    float temp13_1 = *(arg1 + 0x38)
    xmm0_12 - temp13_1
    eax:1.b = (xmm0_12 == temp13_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, temp13_1) ? 1 : 0) << 2
        | (xmm0_12 < temp13_1 ? 1 : 0)
    bool p_25 = unimplemented  {test ah, 0x44}
    
    if (p_25)
        goto label_643070
    
    float xmm0_13 = data_cf66b4:4
    float temp14_1 = *(arg1 + 0x3c)
    xmm0_13 - temp14_1
    eax:1.b = (xmm0_13 == temp14_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_13, temp14_1) ? 1 : 0) << 2
        | (xmm0_13 < temp14_1 ? 1 : 0)
    bool p_27 = unimplemented  {test ah, 0x44}
    
    if (p_27)
        goto label_643070
    
    float xmm0_14 = data_cf66b4:8
    float temp15_1 = *(arg1 + 0x40)
    xmm0_14 - temp15_1
    eax:1.b = (xmm0_14 == temp15_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_14, temp15_1) ? 1 : 0) << 2
        | (xmm0_14 < temp15_1 ? 1 : 0)
    bool p_29 = unimplemented  {test ah, 0x44}
    
    if (p_29)
        goto label_643070
    
    float xmm0_15 = data_cf66b4:0xc
    float temp16_1 = *(arg1 + 0x44)
    xmm0_15 - temp16_1
    eax:1.b = (xmm0_15 == temp16_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_15, temp16_1) ? 1 : 0) << 2
        | (xmm0_15 < temp16_1 ? 1 : 0)
    bool p_31 = unimplemented  {test ah, 0x44}
    
    if (p_31)
        goto label_643070
    
    float xmm0_16 = data_cf6a58
    float temp17_1 = *(arg1 + 0x168)
    xmm0_16 - temp17_1
    eax:1.b = (xmm0_16 == temp17_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_16, temp17_1) ? 1 : 0) << 2
        | (xmm0_16 < temp17_1 ? 1 : 0)
    bool p_33 = unimplemented  {test ah, 0x44}
    
    if (p_33)
        goto label_643070

data_cf6a1c = *(arg1 + 0x48)
data_cf69d4 = sub_6d77d0(sub_6d7690(*(arg1 + 0x48)))
void* esi_1 = arg1 + 0x4c
int32_t eax_11

for (int32_t i = 0x53; i != 0x5b; )
    eax_11 = *esi_1
    
    if (eax_11 != 0)
        *(&data_cf69d4 - arg1 + esi_1) = eax_11
        sub_6d8960(eax_11, i, data_cf69d4, *esi_1)
    
    i += 1
    esi_1 += 4

if (*(arg1 + 0x6c) == 0)
    goto label_6432a1

int128_t xmm0_38 = *(arg1 + 0x6c)
int32_t* ecx_3 = xmm0_38
data_cf6a40 = xmm0_38
eax_11 = *(arg1 + 0x7c)
data_cf6a50 = eax_11
char const* const var_6c
int32_t var_68
char const* const var_64_5
char* ecx_4

if (ecx_3[1] == 0x21)
    void* eax_12 = sub_5af880(ecx_3)
    sub_6d8960(sub_6d8960(eax_12, 0x58, data_cf69d4, *(eax_12 + 0x30)), 0x59, data_cf69d4, 
        *(eax_12 + 0x38))
    data_cf69b0 = data_cf6a40:4.o
label_6432a1:
    data_cf6980 = *(arg1 + 0x80)
    data_cf69c4 = *(arg1 + 0x90)
    data_cf696c = *(arg1 + 0xa0)
    data_cf697c = *(arg1 + 0x120)
    float xmm0_44 = *(arg1 + 0x120)
    xmm0_44 - 1f
    eax_11:1.b = (xmm0_44 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_44, 1f) ? 1 : 0) << 2
        | (xmm0_44 < 1f ? 1 : 0)
    bool p_35 = unimplemented  {test ah, 0x44}
    
    if (p_35)
        int32_t* ecx_7 = data_147b070
        data_cf6990 = *(arg1 + 0x124)
        data_cf69a0 = *(arg1 + 0x134)
        data_cf692c = *(arg1 + 0xb0)
        data_cf693c = *(arg1 + 0xc0)
        data_cf694c = *(arg1 + 0xd0)
        data_cf695c = *(arg1 + 0xe0)
        data_cf68fc = *(arg1 + 0xf0)
        data_cf690c = *(arg1 + 0x100)
        data_cf691c = *(arg1 + 0x110)
        data_cf69c0 = *(arg1 + 0x160)
        data_cf69d8 = arg1
        return (*(*ecx_7 + 0x44))(&data_cf6684)
    
    var_64_5 = "RenderStateSetMaterial"
    var_68 = 0xdc
    var_6c = "C:\x\ax2017\Engine\Draw3d.cpp"
    ecx_4 = "renderItem.diffuseAmbientRatio != 1.0f"
else
    var_64_5 = "IBLDefGet"
    var_68 = 0x20
    var_6c = "C:\x\ax2017\Engine\IBLDef.cpp"
    ecx_4 = "assetPtr->assetType == ASSET_TYPE_IBL"

sub_63b870(eax_11, &data_801800, ecx_4, var_6c, var_68, var_64_5)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
