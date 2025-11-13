// 函数: sub_6b2020
// 地址: 0x6b2020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg5
int32_t edi
int32_t var_18 = edi
uint32_t result = std::money_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getmfld(
    ebx)

if (result != 0)
    int32_t* ecx_1 = *(arg1 + 8)
    (*(*ecx_1 + 0x44))(ecx_1, result)
    void* eax = data_147b06c
    *(eax + 0x10) += 1
    int32_t* eax_1 = *(arg1 + 8)
    int32_t* eax_2 = (*(*eax_1 + 0x60))(eax_1, arg2)
    void* edx_2 = data_147b078
    int32_t* esi_1
    
    if (arg3 != 0)
        eax_2 = zx.d(arg3.w)
        
        if (eax_2 u< *(edx_2 + 0x3c))
            int32_t esi_2 = eax_2 * 0x24c
            eax_2 = nullptr
            esi_1 = esi_2 + *(edx_2 + 0x38)
            
            if (esi_1[0x92] != arg3)
                esi_1 = nullptr
        else
            esi_1 = nullptr
    else
        esi_1 = nullptr
    
    char const* const var_20_2
    int32_t var_1c_3
    char const* const var_18_2
    char* ecx_4
    
    if (*esi_1 != 0)
        var_18_2 = "Dx11GraphicsInterface::DrawPrimitive"
        var_1c_3 = 0x942
        ecx_4 = "vertexBufferData->mBufferType == DX11BUFFER_VERTEX"
    label_6b21ff:
        var_20_2 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
        goto label_6b2209
    
    arg5 = 0
    eax_2 = *(sub_731ea0(ebx) + 0xc)
    
    if (eax_2 == 0)
        var_18_2 = "DefinitionGetSize"
        var_1c_3 = 0x6d
        var_20_2 = "C:\x\ax2017\Engine\Definition.cpp"
        ecx_4 = "pDefMap->definitionSize != 0"
    label_6b2209:
        sub_63b870(eax_2, &data_801800, ecx_4, var_20_2, var_1c_3, var_18_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* ecx_6 = *(arg1 + 8)
    int32_t* var_8 = eax_2
    (*(*ecx_6 + 0x48))(ecx_6, 0, 1, &esi_1[6], &var_8, &arg5)
    
    if (arg4 == 0)
        int32_t* eax_10 = *(arg1 + 8)
        var_18 = 0
        int32_t ecx_10 = *eax_10
        
        if (arg8 == 0)
            (*(ecx_10 + 0x34))(eax_10, arg7)
        else
            (*(ecx_10 + 0x54))(eax_10, arg7, arg8, 0)
    else
        void* edx_4 = data_147b078
        uint32_t eax_5 = zx.d(arg4.w)
        
        if (eax_5 u< *(edx_4 + 0x3c))
            eax_2 = eax_5 * 0x24c + *(edx_4 + 0x38)
            
            if (eax_2[0x92] != arg4)
                eax_2 = nullptr
        else
            eax_2 = nullptr
        
        if (*eax_2 != 1)
            var_18_2 = "Dx11GraphicsInterface::DrawPrimitive"
            var_1c_3 = 0x94b
            ecx_4 = "indexBufferData->mBufferType == DX11BUFFER_INDEX"
            goto label_6b21ff
        
        int32_t* ecx_8 = *(arg1 + 8)
        int32_t var_1c_5
        
        if (*(eax_2 + 5) == 0)
            var_1c_5 = 0x39
        else
            var_1c_5 = 0x2a
        
        (*(*ecx_8 + 0x4c))(ecx_8, eax_2[6], var_1c_5, 0)
        eax_2 = arg2 - 1
        
        if (eax_2 u> 4)
            var_18_2 = "Dx11GraphicsInterface::DrawPrimitive"
            var_1c_3 = 0x95f
            ecx_4 = "Halt"
            goto label_6b21ff
        
        int32_t edi_3
        
        switch (eax_2)
            case nullptr
                edi_3 = arg6
            case 1
                edi_3 = arg6 * 2
            case 2
                edi_3 = arg6 + 1
            case 3
                edi_3 = arg6 * 3
            case 4
                edi_3 = arg6 + 2
        
        int32_t ecx_9 = esi_1[5]
        var_18 = 0
        int32_t* eax_9 = *(arg1 + 8)
        int32_t edx_6 = *eax_9
        
        if (arg8 == 0)
            (*(edx_6 + 0x30))(eax_9, edi_3, ecx_9)
        else
            (*(edx_6 + 0x50))(eax_9, edi_3, arg8, ecx_9, 0)
        
        if (esi_1[1].b != 0)
            esi_1[5] += edi_3
    
    result = data_147b06c
    esi_1[4] += arg7
    *(result + 8) += arg6
    *(result + 0xc) += arg7
    *(result + 4) += 1

return result
