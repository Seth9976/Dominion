// 函数: sub_6494f0
// 地址: 0x6494f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_e76b40 == 0)
    return 

char const* const var_18
int32_t var_14
char const* const var_10
void* eax
char* ecx

if (data_147aba1 == 0)
    sub_6e1520(2)
    int32_t edi_1 = 0
    data_147abb4 = arg1
    data_cf6a1c = 0
    __builtin_memset(&data_cf6684, 0, 0x40)
    data_cf6a58 = 0x3f800000
    
    if (data_e76b40 s<= 0)
    label_649a3a:
        sub_648c30()
        sub_648fa0()
        data_147abb4 = 5
        return sub_6e1520(0) __tailcall
    
    while (true)
        int32_t eax_1 = *((edi_1 << 2) + &data_1476b90)
        
        if ((*(eax_1 * 0x180 + 0xcf6ca4) & 1 << arg1.b) != 0)
            int32_t eax_2 = *(eax_1 * 0x180 + 0xcf6b40)
            
            if (eax_2 == 0)
                *(eax_1 * 0x180 + 0xcf6b88)
                
                if (sub_643790() == 0)
                    sub_648c30()
                    sub_648fa0()
                    data_147ab98 = edi_1
                    void* esi_4
                    esi_4, edi_1 = sub_642ef0(eax_1 * 0x180 + 0xcf6b40)
                    sub_6437e0(esi_4)
                else
                    int32_t edx_1
                    
                    if (data_147ab9c == 0)
                    label_6499f0:
                        sub_648c30()
                        sub_648fa0()
                        edx_1 = data_147ab9c
                        data_147ab98 = edi_1
                    else
                        eax = sub_6d77d0(sub_6d7690(*(eax_1 * 0x180 + 0xcf6b88)))
                        int32_t* ecx_7 = *eax
                        
                        if (ecx_7[1] != 4)
                            var_10 = "ShaderGetDef"
                            var_14 = 0x8a
                            var_18 = "C:\x\ax2017\Engine\Shader.cpp"
                            ecx = "assetPtr->assetType == ASSET_TYPE_SHADER"
                            break
                        
                        void* eax_13 = sub_5af880(ecx_7)
                        edx_1 = data_147ab9c
                        
                        if (edx_1 == *(eax_13 + 0x54))
                            goto label_6499f0
                        
                        int32_t ecx_9 = *((data_147ab98 << 2) + &data_1476b90) * 0x180
                        
                        if (*(ecx_9 + 0xcf6b44) != *(eax_1 * 0x180 + 0xcf6b44)
                                || *(ecx_9 + 0xcf6b88) != *(eax_1 * 0x180 + 0xcf6b88)
                                || *(ecx_9 + 0xcf6b8c) != *(eax_1 * 0x180 + 0xcf6b8c))
                            goto label_6499f0
                        
                        float xmm0_23 = *(ecx_9 + 0xcf6bc0)
                        float temp5_1 = *(eax_1 * 0x180 + 0xcf6bc0)
                        xmm0_23 - temp5_1
                        int32_t eax_18
                        eax_18:1.b = (xmm0_23 == temp5_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_23, temp5_1) ? 1 : 0) << 2
                            | (xmm0_23 < temp5_1 ? 1 : 0)
                        bool p_46 = unimplemented  {test ah, 0x44}
                        
                        if (p_46)
                            goto label_6499f0
                        
                        float xmm0_24 = *(ecx_9 + 0xcf6bc4)
                        float temp7_1 = *(eax_1 * 0x180 + 0xcf6bc4)
                        xmm0_24 - temp7_1
                        eax_18:1.b = (xmm0_24 == temp7_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_24, temp7_1) ? 1 : 0) << 2
                            | (xmm0_24 < temp7_1 ? 1 : 0)
                        bool p_48 = unimplemented  {test ah, 0x44}
                        
                        if (p_48)
                            goto label_6499f0
                        
                        float xmm0_25 = *(ecx_9 + 0xcf6bc8)
                        float temp9_1 = *(eax_1 * 0x180 + 0xcf6bc8)
                        xmm0_25 - temp9_1
                        eax_18:1.b = (xmm0_25 == temp9_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_25, temp9_1) ? 1 : 0) << 2
                            | (xmm0_25 < temp9_1 ? 1 : 0)
                        bool p_50 = unimplemented  {test ah, 0x44}
                        
                        if (p_50)
                            goto label_6499f0
                        
                        float xmm0_26 = *(ecx_9 + 0xcf6bcc)
                        float temp11_1 = *(eax_1 * 0x180 + 0xcf6bcc)
                        xmm0_26 - temp11_1
                        eax_18:1.b = (xmm0_26 == temp11_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_26, temp11_1) ? 1 : 0) << 2
                            | (xmm0_26 < temp11_1 ? 1 : 0)
                        bool p_52 = unimplemented  {test ah, 0x44}
                        
                        if (p_52)
                            goto label_6499f0
                        
                        float xmm0_27 = *(ecx_9 + 0xcf6bd0)
                        float temp13_1 = *(eax_1 * 0x180 + 0xcf6bd0)
                        xmm0_27 - temp13_1
                        eax_18:1.b = (xmm0_27 == temp13_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_27, temp13_1) ? 1 : 0) << 2
                            | (xmm0_27 < temp13_1 ? 1 : 0)
                        bool p_54 = unimplemented  {test ah, 0x44}
                        
                        if (p_54)
                            goto label_6499f0
                        
                        float xmm0_28 = *(ecx_9 + 0xcf6bd4)
                        float temp15_1 = *(eax_1 * 0x180 + 0xcf6bd4)
                        xmm0_28 - temp15_1
                        eax_18:1.b = (xmm0_28 == temp15_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_28, temp15_1) ? 1 : 0) << 2
                            | (xmm0_28 < temp15_1 ? 1 : 0)
                        bool p_56 = unimplemented  {test ah, 0x44}
                        
                        if (p_56)
                            goto label_6499f0
                        
                        float xmm0_29 = *(ecx_9 + 0xcf6bd8)
                        float temp17_1 = *(eax_1 * 0x180 + 0xcf6bd8)
                        xmm0_29 - temp17_1
                        eax_18:1.b = (xmm0_29 == temp17_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_29, temp17_1) ? 1 : 0) << 2
                            | (xmm0_29 < temp17_1 ? 1 : 0)
                        bool p_58 = unimplemented  {test ah, 0x44}
                        
                        if (p_58)
                            goto label_6499f0
                        
                        float xmm0_30 = *(ecx_9 + 0xcf6bdc)
                        float temp19_1 = *(eax_1 * 0x180 + 0xcf6bdc)
                        xmm0_30 - temp19_1
                        eax_18:1.b = (xmm0_30 == temp19_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_30, temp19_1) ? 1 : 0) << 2
                            | (xmm0_30 < temp19_1 ? 1 : 0)
                        bool p_60 = unimplemented  {test ah, 0x44}
                        
                        if (p_60)
                            goto label_6499f0
                        
                        float xmm0_31 = *(ecx_9 + 0xcf6be0)
                        float temp21_1 = *(eax_1 * 0x180 + 0xcf6be0)
                        xmm0_31 - temp21_1
                        eax_18:1.b = (xmm0_31 == temp21_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_31, temp21_1) ? 1 : 0) << 2
                            | (xmm0_31 < temp21_1 ? 1 : 0)
                        bool p_62 = unimplemented  {test ah, 0x44}
                        
                        if (p_62)
                            goto label_6499f0
                        
                        float xmm0_32 = *(ecx_9 + 0xcf6be4)
                        float temp23_1 = *(eax_1 * 0x180 + 0xcf6be4)
                        xmm0_32 - temp23_1
                        eax_18:1.b = (xmm0_32 == temp23_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_32, temp23_1) ? 1 : 0) << 2
                            | (xmm0_32 < temp23_1 ? 1 : 0)
                        bool p_64 = unimplemented  {test ah, 0x44}
                        
                        if (p_64)
                            goto label_6499f0
                        
                        float xmm0_33 = *(ecx_9 + 0xcf6be8)
                        float temp25_1 = *(eax_1 * 0x180 + 0xcf6be8)
                        xmm0_33 - temp25_1
                        eax_18:1.b = (xmm0_33 == temp25_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_33, temp25_1) ? 1 : 0) << 2
                            | (xmm0_33 < temp25_1 ? 1 : 0)
                        bool p_66 = unimplemented  {test ah, 0x44}
                        
                        if (p_66)
                            goto label_6499f0
                        
                        float xmm0_34 = *(ecx_9 + 0xcf6bec)
                        float temp27_1 = *(eax_1 * 0x180 + 0xcf6bec)
                        xmm0_34 - temp27_1
                        eax_18:1.b = (xmm0_34 == temp27_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_34, temp27_1) ? 1 : 0) << 2
                            | (xmm0_34 < temp27_1 ? 1 : 0)
                        bool p_68 = unimplemented  {test ah, 0x44}
                        
                        if (p_68)
                            goto label_6499f0
                        
                        float xmm0_35 = *(ecx_9 + 0xcf6c60)
                        float temp29_1 = *(eax_1 * 0x180 + 0xcf6c60)
                        xmm0_35 - temp29_1
                        eax_18:1.b = (xmm0_35 == temp29_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_35, temp29_1) ? 1 : 0) << 2
                            | (xmm0_35 < temp29_1 ? 1 : 0)
                        bool p_70 = unimplemented  {test ah, 0x44}
                        
                        if (p_70)
                            goto label_6499f0
                    
                    data_147ab9c = edx_1 + 1
            else
                eax = eax_2 - 1
                
                if (eax_2 != 1)
                    var_10 = "RenderItemListDraw"
                    var_14 = 0xac4
                    var_18 = "C:\x\ax2017\Engine\Draw3d.cpp"
                    ecx = "Halt"
                    break
                
                if (data_147ab94 == eax)
                label_649819:
                    sub_648c30()
                    sub_648fa0()
                    data_147ab90 = edi_1
                else
                    int32_t ecx_3 = *((data_147ab90 << 2) + &data_1476b90) * 0x180
                    
                    if (*(ecx_3 + 0xcf6b88) != *(eax_1 * 0x180 + 0xcf6b88)
                            || *(ecx_3 + 0xcf6b8c) != *(eax_1 * 0x180 + 0xcf6b8c))
                        goto label_649819
                    
                    float xmm0_1 = *(ecx_3 + 0xcf6bc0)
                    float temp2_1 = *(eax_1 * 0x180 + 0xcf6bc0)
                    xmm0_1 - temp2_1
                    int32_t eax_7
                    eax_7:1.b = (xmm0_1 == temp2_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_1, temp2_1) ? 1 : 0) << 2
                        | (xmm0_1 < temp2_1 ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        goto label_649819
                    
                    float xmm0_2 = *(ecx_3 + 0xcf6bc4)
                    float temp3_1 = *(eax_1 * 0x180 + 0xcf6bc4)
                    xmm0_2 - temp3_1
                    eax_7:1.b = (xmm0_2 == temp3_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_2, temp3_1) ? 1 : 0) << 2
                        | (xmm0_2 < temp3_1 ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        goto label_649819
                    
                    float xmm0_3 = *(ecx_3 + 0xcf6bc8)
                    float temp4_1 = *(eax_1 * 0x180 + 0xcf6bc8)
                    xmm0_3 - temp4_1
                    eax_7:1.b = (xmm0_3 == temp4_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_3, temp4_1) ? 1 : 0) << 2
                        | (xmm0_3 < temp4_1 ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        goto label_649819
                    
                    float xmm0_4 = *(ecx_3 + 0xcf6bcc)
                    float temp6_1 = *(eax_1 * 0x180 + 0xcf6bcc)
                    xmm0_4 - temp6_1
                    eax_7:1.b = (xmm0_4 == temp6_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_4, temp6_1) ? 1 : 0) << 2
                        | (xmm0_4 < temp6_1 ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_8)
                        goto label_649819
                    
                    float xmm0_5 = *(ecx_3 + 0xcf6bd0)
                    float temp8_1 = *(eax_1 * 0x180 + 0xcf6bd0)
                    xmm0_5 - temp8_1
                    eax_7:1.b = (xmm0_5 == temp8_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_5, temp8_1) ? 1 : 0) << 2
                        | (xmm0_5 < temp8_1 ? 1 : 0)
                    bool p_10 = unimplemented  {test ah, 0x44}
                    
                    if (p_10)
                        goto label_649819
                    
                    float xmm0_6 = *(ecx_3 + 0xcf6bd4)
                    float temp10_1 = *(eax_1 * 0x180 + 0xcf6bd4)
                    xmm0_6 - temp10_1
                    eax_7:1.b = (xmm0_6 == temp10_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_6, temp10_1) ? 1 : 0) << 2
                        | (xmm0_6 < temp10_1 ? 1 : 0)
                    bool p_12 = unimplemented  {test ah, 0x44}
                    
                    if (p_12)
                        goto label_649819
                    
                    float xmm0_7 = *(ecx_3 + 0xcf6bd8)
                    float temp12_1 = *(eax_1 * 0x180 + 0xcf6bd8)
                    xmm0_7 - temp12_1
                    eax_7:1.b = (xmm0_7 == temp12_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_7, temp12_1) ? 1 : 0) << 2
                        | (xmm0_7 < temp12_1 ? 1 : 0)
                    bool p_14 = unimplemented  {test ah, 0x44}
                    
                    if (p_14)
                        goto label_649819
                    
                    float xmm0_8 = *(ecx_3 + 0xcf6bdc)
                    float temp14_1 = *(eax_1 * 0x180 + 0xcf6bdc)
                    xmm0_8 - temp14_1
                    eax_7:1.b = (xmm0_8 == temp14_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_8, temp14_1) ? 1 : 0) << 2
                        | (xmm0_8 < temp14_1 ? 1 : 0)
                    bool p_16 = unimplemented  {test ah, 0x44}
                    
                    if (p_16)
                        goto label_649819
                    
                    float xmm0_9 = *(ecx_3 + 0xcf6be0)
                    float temp16_1 = *(eax_1 * 0x180 + 0xcf6be0)
                    xmm0_9 - temp16_1
                    eax_7:1.b = (xmm0_9 == temp16_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_9, temp16_1) ? 1 : 0) << 2
                        | (xmm0_9 < temp16_1 ? 1 : 0)
                    bool p_18 = unimplemented  {test ah, 0x44}
                    
                    if (p_18)
                        goto label_649819
                    
                    float xmm0_10 = *(ecx_3 + 0xcf6be4)
                    float temp18_1 = *(eax_1 * 0x180 + 0xcf6be4)
                    xmm0_10 - temp18_1
                    eax_7:1.b = (xmm0_10 == temp18_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_10, temp18_1) ? 1 : 0) << 2
                        | (xmm0_10 < temp18_1 ? 1 : 0)
                    bool p_20 = unimplemented  {test ah, 0x44}
                    
                    if (p_20)
                        goto label_649819
                    
                    float xmm0_11 = *(ecx_3 + 0xcf6be8)
                    float temp20_1 = *(eax_1 * 0x180 + 0xcf6be8)
                    xmm0_11 - temp20_1
                    eax_7:1.b = (xmm0_11 == temp20_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_11, temp20_1) ? 1 : 0) << 2
                        | (xmm0_11 < temp20_1 ? 1 : 0)
                    bool p_22 = unimplemented  {test ah, 0x44}
                    
                    if (p_22)
                        goto label_649819
                    
                    float xmm0_12 = *(ecx_3 + 0xcf6bec)
                    float temp22_1 = *(eax_1 * 0x180 + 0xcf6bec)
                    xmm0_12 - temp22_1
                    eax_7:1.b = (xmm0_12 == temp22_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_12, temp22_1) ? 1 : 0) << 2
                        | (xmm0_12 < temp22_1 ? 1 : 0)
                    bool p_24 = unimplemented  {test ah, 0x44}
                    
                    if (p_24)
                        goto label_649819
                    
                    float xmm0_13 = *(ecx_3 + 0xcf6c60)
                    float temp24_1 = *(eax_1 * 0x180 + 0xcf6c60)
                    xmm0_13 - temp24_1
                    eax_7:1.b = (xmm0_13 == temp24_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_13, temp24_1) ? 1 : 0) << 2
                        | (xmm0_13 < temp24_1 ? 1 : 0)
                    bool p_26 = unimplemented  {test ah, 0x44}
                    
                    if (p_26)
                        goto label_649819
                    
                    float xmm0_14 = *(ecx_3 + 0xcf6c70)
                    float temp26_1 = *(eax_1 * 0x180 + 0xcf6c70)
                    xmm0_14 - temp26_1
                    eax_7:1.b = (xmm0_14 == temp26_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_14, temp26_1) ? 1 : 0) << 2
                        | (xmm0_14 < temp26_1 ? 1 : 0)
                    bool p_28 = unimplemented  {test ah, 0x44}
                    
                    if (p_28)
                        goto label_649819
                    
                    float xmm0_15 = *(ecx_3 + 0xcf6c64)
                    float temp28_1 = *(eax_1 * 0x180 + 0xcf6c64)
                    xmm0_15 - temp28_1
                    eax_7:1.b = (xmm0_15 == temp28_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_15, temp28_1) ? 1 : 0) << 2
                        | (xmm0_15 < temp28_1 ? 1 : 0)
                    bool p_30 = unimplemented  {test ah, 0x44}
                    
                    if (p_30)
                        goto label_649819
                    
                    float xmm0_16 = *(ecx_3 + 0xcf6c68)
                    float temp30_1 = *(eax_1 * 0x180 + 0xcf6c68)
                    xmm0_16 - temp30_1
                    eax_7:1.b = (xmm0_16 == temp30_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_16, temp30_1) ? 1 : 0) << 2
                        | (xmm0_16 < temp30_1 ? 1 : 0)
                    bool p_32 = unimplemented  {test ah, 0x44}
                    
                    if (p_32)
                        goto label_649819
                    
                    float xmm0_17 = *(ecx_3 + 0xcf6c6c)
                    float temp31_1 = *(eax_1 * 0x180 + 0xcf6c6c)
                    xmm0_17 - temp31_1
                    eax_7:1.b = (xmm0_17 == temp31_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_17, temp31_1) ? 1 : 0) << 2
                        | (xmm0_17 < temp31_1 ? 1 : 0)
                    bool p_34 = unimplemented  {test ah, 0x44}
                    
                    if (p_34)
                        goto label_649819
                    
                    float xmm0_18 = *(ecx_3 + 0xcf6c80)
                    float temp32_1 = *(eax_1 * 0x180 + 0xcf6c80)
                    xmm0_18 - temp32_1
                    eax_7:1.b = (xmm0_18 == temp32_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_18, temp32_1) ? 1 : 0) << 2
                        | (xmm0_18 < temp32_1 ? 1 : 0)
                    bool p_36 = unimplemented  {test ah, 0x44}
                    
                    if (p_36)
                        goto label_649819
                    
                    float xmm0_19 = *(ecx_3 + 0xcf6c74)
                    float temp33_1 = *(eax_1 * 0x180 + 0xcf6c74)
                    xmm0_19 - temp33_1
                    eax_7:1.b = (xmm0_19 == temp33_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_19, temp33_1) ? 1 : 0) << 2
                        | (xmm0_19 < temp33_1 ? 1 : 0)
                    bool p_38 = unimplemented  {test ah, 0x44}
                    
                    if (p_38)
                        goto label_649819
                    
                    float xmm0_20 = *(ecx_3 + 0xcf6c78)
                    float temp34_1 = *(eax_1 * 0x180 + 0xcf6c78)
                    xmm0_20 - temp34_1
                    eax_7:1.b = (xmm0_20 == temp34_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_20, temp34_1) ? 1 : 0) << 2
                        | (xmm0_20 < temp34_1 ? 1 : 0)
                    bool p_40 = unimplemented  {test ah, 0x44}
                    
                    if (p_40)
                        goto label_649819
                    
                    float xmm0_21 = *(ecx_3 + 0xcf6c7c)
                    float temp35_1 = *(eax_1 * 0x180 + 0xcf6c7c)
                    xmm0_21 - temp35_1
                    eax_7:1.b = (xmm0_21 == temp35_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_21, temp35_1) ? 1 : 0) << 2
                        | (xmm0_21 < temp35_1 ? 1 : 0)
                    bool p_42 = unimplemented  {test ah, 0x44}
                    
                    if (p_42)
                        goto label_649819
                    
                    float xmm0_22 = *(ecx_3 + 0xcf6ca8)
                    float temp36_1 = *(eax_1 * 0x180 + 0xcf6ca8)
                    xmm0_22 - temp36_1
                    eax_7:1.b = (xmm0_22 == temp36_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_22, temp36_1) ? 1 : 0) << 2
                        | (xmm0_22 < temp36_1 ? 1 : 0)
                    bool p_44 = unimplemented  {test ah, 0x44}
                    
                    if (p_44)
                        goto label_649819
                
                data_147ab94 = edi_1 - data_147ab90 + 1
        
        edi_1 += 1
        
        if (edi_1 s>= data_e76b40)
            goto label_649a3a
else
    var_10 = "RenderItemListDraw"
    var_14 = 0xaa2
    var_18 = "C:\x\ax2017\Engine\Draw3d.cpp"
    ecx = "!gDraw3DData.submittingRenderItems"

sub_63b870(eax, &data_801800, ecx, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
