// 函数: sub_6b8de0
// 地址: 0x6b8de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg1
void* esi = *(eax + 0x30)
void* var_8 = eax

if (*(eax + 0x40) == 0)
    goto label_6b8e2a

int32_t result = *sub_5af880(**(esi + 0x2e4))

if (*(*(esi + 0x2dc) * 0x168 + result + 0xe5) == 0)
    eax = var_8
label_6b8e2a:
    float xmm0_1 = sub_6b8630(*(eax + 0x30), arg2)
    int32_t* eax_3 = arg2[2]
    float var_c_1
    bool p_2
    
    if (eax_3[2] == 1)
        int32_t* eax_4 = *eax_3
        float xmm0_2 = *eax_4
        float temp0_1 = eax_4[1]
        xmm0_2 - temp0_1
        var_c_1 = xmm0_2
        eax_4:1.b = (xmm0_2 == temp0_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_2, temp0_1) ? 1 : 0) << 2 | (xmm0_2 < temp0_1 ? 1 : 0)
        p_2 = unimplemented  {test ah, 0x44}
    
    if (eax_3[2] != 1 || p_2)
        int32_t eax_5 = *arg2
        float xmm1_1 = *(esi + 0x2f0)
        int32_t ecx_6 = (*(esi + 0x2c) + eax_5) * eax_5
        int32_t edx_3 = (ecx_6 << 0xf) + not.d(ecx_6)
        int32_t ecx_8 = (edx_3 u>> 0xc ^ edx_3) * 5
        int32_t eax_12 = (ecx_8 u>> 4 ^ ecx_8) * 0x809
        int32_t eax_13 = *(esi + 0x2f4)
        int32_t edx_4 = eax_13 - 1
        
        if (xmm1_1 f<= *(esi + 0x2e8))
            edx_4 = eax_13
        
        var_c_1 = sub_706bb0(arg2[2], edx_4, xmm1_1, 
            (((eax_12 u>> 0x10 ^ eax_12) & 0x7fffff) | 0x3f800000) - 1f)
    
    int64_t var_2c
    int64_t* eax_15
    int80_t st0_1
    st0_1, eax_15 = sub_6b8a80(&var_2c, *(*(esi + 0x2e4) + 0x54), var_8, xmm0_1, &var_2c)
    int64_t xmm0_4 = *eax_15
    float eax_16 = eax_15[1].d
    float var_4c[0x5]
    int64_t* eax_19
    int80_t st0_2
    st0_2, eax_19 = sub_6b8a80(&var_4c, *(*(esi + 0x2e4) + 0x54) - 1, var_8, var_c_1, &var_4c)
    float eax_20 = eax_19[1].d
    int32_t* eax_21 = *(esi + 0x2e4)
    var_2c = *eax_19
    int32_t eax_22 = sub_5af880(*eax_21)
    int32_t* edx_10 = *(esi + 0x2dc) * 0x168 + *eax_22
    int32_t* eax_25
    
    if (*(edx_10 + 0x61) == 0)
        if (data_8cc608 s> 0x4d)
            eax_25 = *(*(data_8cc604 + 0x134) + 0x24)
            goto label_6b8f82
        
    label_6b916b:
        sub_63b870(eax_22, &data_801800, 
            "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
            "C:\x\ax2017\Engine\AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_25 = sub_6dd1e0(eax_22, edx_10, &data_8cc5f8, data_1777598, 0x4d)
label_6b8f82:
    eax_22 = sub_5af880(**(esi + 0x2e4))
    int32_t* edx_12 = *(esi + 0x2dc) * 0x168 + *eax_22
    int32_t* ebx_1
    
    if (*(edx_12 + 0x62) == 0)
        if (data_8cc608 s<= 0x4e)
            goto label_6b916b
        
        ebx_1 = *(*(data_8cc604 + 0x138) + 0x24)
        goto label_6b8fd5
    
    ebx_1 = sub_6dd1e0(eax_22, edx_12, &data_8cc5f8, data_1777598, 0x4e)
label_6b8fd5:
    eax_22 = sub_5af880(**(esi + 0x2e4))
    int32_t* edx_14 = *(esi + 0x2dc) * 0x168 + *eax_22
    int32_t* edi_1
    
    if (*(edx_14 + 0x63) == 0)
        if (data_8cc608 s<= 0x4f)
            goto label_6b916b
        
        edi_1 = *(*(data_8cc604 + 0x13c) + 0x24)
        goto label_6b9036
    
    edi_1 = sub_6dd1e0(eax_22, edx_14, &data_8cc5f8, data_1777598, 0x4f)
label_6b9036:
    float xmm0_6 = sub_706bb0(eax_25, *(esi + 0x2f4), *(esi + 0x2e8), xmm0_4.d)
    float xmm0_7 = sub_706bb0(ebx_1, *(esi + 0x2f4), *(esi + 0x2e8), xmm0_4:4.d)
    float xmm0_8 = sub_706bb0(edi_1, *(esi + 0x2f4), *(esi + 0x2e8), eax_16)
    float xmm1_5 = *(esi + 0x2f0)
    int32_t eax_32 = *(esi + 0x2f4)
    int32_t edx_18 = eax_32 - 1
    
    if (xmm1_5 f<= *(esi + 0x2e8))
        edx_18 = eax_32
    
    float xmm0_9 = sub_706bb0(eax_25, edx_18, xmm1_5, var_2c.d)
    float xmm1_6 = *(esi + 0x2f0)
    int32_t eax_33 = *(esi + 0x2f4)
    int32_t edx_19 = eax_33 - 1
    
    if (xmm1_6 f<= *(esi + 0x2e8))
        edx_19 = eax_33
    
    float xmm0_10 = sub_706bb0(ebx_1, edx_19, xmm1_6, var_2c:4.d)
    float xmm1_7 = *(esi + 0x2f0)
    int32_t eax_34 = *(esi + 0x2f4)
    int32_t edx_20 = eax_34 - 1
    
    if (xmm1_7 f<= *(esi + 0x2e8))
        edx_20 = eax_34
    
    float xmm0_11
    result, xmm0_11 = sub_706bb0(edi_1, edx_20, xmm1_7, eax_20)
    *(esi + 0x29c) = xmm0_6 - xmm0_9 f+ *(esi + 0x29c)
    *(esi + 0x2a0) = xmm0_7 - xmm0_10 f+ *(esi + 0x2a0)
    *(esi + 0x2a4) = xmm0_8 - xmm0_11 f+ *(esi + 0x2a4)

return result
