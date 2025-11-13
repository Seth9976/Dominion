// 函数: sub_648c30
// 地址: 0x648c30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = data_147ab94

if (result != 0)
    int32_t edx_1 = data_147ab90
    int32_t ecx_1
    
    if (edx_1 s>= 0)
        ecx_1 = data_e76b40
        result += edx_1
    
    char const* const var_44_3
    int32_t var_40_3
    char const* const var_3c_8
    char* ecx_20
    
    if (edx_1 s< 0 || result s> ecx_1)
        var_3c_8 = "RenderDrawQuadBuffers"
        var_40_3 = 0x8dd
        ecx_20 = "sortIndex >= 0 && sortIndex + gDraw3DData.batchedQuadGroupCount <= gDraw3DData."
        "renderItemCount"
    label_648f7a:
        var_44_3 = "C:\x\ax2017\Engine\Draw3d.cpp"
    label_648f84:
        sub_63b870(result, &data_801800, ecx_20, var_44_3, var_40_3, var_3c_8)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = *((edx_1 << 2) + &data_1476b90)
    
    if (result s< 0 || result s> ecx_1)
        var_3c_8 = "RenderDrawQuadBuffers"
        var_40_3 = 0x8e0
        ecx_20 = "firstItemIndex >= 0 && firstItemIndex <= gDraw3DData.renderItemCount"
        goto label_648f7a
    
    result = sub_642ef0(result * 0x180 + 0xcf6b40)
    int32_t ebx_1 = 0
    int32_t var_24_1 = 0x100
    int32_t var_c_1 = 0
    int32_t var_8_1 = 0
    
    if (data_147ab94 s> 0)
        int32_t edx_2 = data_1476b8c
        
        while (true)
            int32_t var_10_1 = 0
            
            if ((*(*data_147b070 + 0x2c))(*((edx_2 << 2) + &data_1476b4c)) == 0)
                *((data_1476b8c << 2) + &data_1476b4c) =
                    (*(*data_147b070 + 0x28))(0, 0xc0000, 0xa, 1)
            
            if ((*(*data_147b070 + 0x38))(data_1476b48) == 0)
                result = _aligned_malloc(0xc000, 0x10)
                
                if (result == 0)
                    var_3c_8 = "XMalloc"
                    var_40_3 = 0x57
                    var_44_3 = "C:\x\ax2017\Engine\xMemory.cpp"
                    ecx_20 = "pBuffer"
                    break
                
                int32_t i = 0
                int16_t* ecx_8 = &result[1]
                
                do
                    int16_t esi_2 = (i << 2).w
                    i += 1
                    ecx_8[-2] = esi_2
                    *ecx_8 = esi_2 + 1
                    ecx_8[1] = esi_2 + 1
                    ecx_8[-1] = esi_2 + 2
                    ecx_8 = &ecx_8[6]
                    ecx_8[-4] = esi_2 + 2
                    ecx_8[-3] = esi_2 + 3
                while (i s< 0x1000)
                
                data_1476b48 = (*(*data_147b070 + 0x34))(result, 0xc000, 0, 0, 
                    *((data_1476b8c << 2) + &data_1476b4c))
                _aligned_free(result)
            
            int32_t edx_5 = data_1476b8c
            int32_t eax_13 = (*(*data_147b070 + 0x64))(*((edx_5 << 2) + &data_1476b4c))
            int32_t edx_6 = data_147ab94
            int32_t edi_1 = 0
            int32_t esi_4 = 0
            int32_t var_18_1 = 0
            int32_t var_1c_1 = 0
            
            if (ebx_1 s< edx_6)
                void* eax_14 = ((edx_1 + ebx_1) << 2) + &data_1476b90
                void* var_14_1 = eax_14
                
                do
                    int32_t ebx_3 = *eax_14 * 0x180
                    
                    if ((*(ebx_3 + 0xcf6ca4) & 1 << (data_147abb4).b) == 0)
                        ebx_1 = var_c_1
                        eax_14 = var_14_1
                    else
                        int32_t edi_4 = (*(ebx_3 + 0xcf6c88) << 2) - var_8_1
                        
                        if (0x4000 - var_10_1 s< edi_4)
                            edi_4 = 0x4000 - var_10_1
                        
                        int32_t count = edi_4 * 0x30
                        memcpy(var_10_1 * 0x30 + eax_13, 
                            (var_8_1 + (*(ebx_3 + 0xcf6c84) << 2)) * 0x30 + 0xe76b44, count)
                        var_18_1 += count
                        var_10_1 += edi_4
                        int32_t ecx_16 = var_8_1 + edi_4
                        int32_t eax_27
                        int32_t edx_8
                        edx_8:eax_27 = sx.q(edi_4)
                        var_8_1 = ecx_16
                        esi_4 = var_1c_1 + ((eax_27 + (edx_8 & 3)) s>> 2)
                        ebx_1 = var_c_1
                        var_1c_1 = esi_4
                        
                        if (ecx_16 != *(ebx_3 + 0xcf6c88) << 2)
                            break
                        
                        ebx_1 += 1
                        edx_6 = data_147ab94
                        eax_14 = var_14_1 + 4
                        var_c_1 = ebx_1
                        var_14_1 = eax_14
                        var_8_1 = 0
                while (ebx_1 s< edx_6)
                
                edi_1 = var_18_1
            
            (*(*data_147b070 + 0x6c))(*((edx_5 << 2) + &data_1476b4c), edi_1)
            result = data_147b06c
            int32_t ecx_18 = *result
            
            if (ecx_18 == 0 || result[9] s< ecx_18)
                (*(*data_147b070 + 0x40))(4, *((edx_5 << 2) + &data_1476b4c), data_1476b48, 0xa, 
                    esi_4 * 2, esi_4 << 2, 0, 0)
                result = data_147b06c
            
            int32_t temp0_1 = var_24_1
            var_24_1 -= 1
            
            if (temp0_1 == 1)
                goto label_648f36
            
            result[8] += esi_4
            result[9] += 1
            edx_2 = (data_1476b8c + 1) & 0x8000000f
            
            if (edx_2 s< 0)
                edx_2 = ((edx_2 - 1) | 0xfffffff0) + 1
            
            data_1476b8c = edx_2
            
            if (ebx_1 s>= data_147ab94)
                goto label_648f36
        
        goto label_648f84
    
label_648f36:
    data_147ab94 = 0

return result
