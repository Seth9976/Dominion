// 函数: sub_694be0
// 地址: 0x694be0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0
int32_t* var_c = arg2
int32_t i = *(arg3 + arg2[4])
int32_t* eax_1 = arg4
int32_t ecx = eax_1[2]

if (ecx s> 0)
    int32_t* eax_2 = eax_1[1]
    
    while (*eax_2 != i)
        esi += 1
        eax_2 = &eax_2[0xf]
        
        if (esi s>= ecx)
            return eax_2
    
    void* eax_3 = sub_6dd320(arg4, i)
    int32_t* eax_4 = *(eax_3 + 0x10)
    
    if (eax_4 != 0xf)
        eax_1 = sub_69c520(eax_3)
        
        if (eax_1.b != 0)
            if (eax_4 == 8)
                int32_t* eax_7 = *arg2
                char* ecx_5 = &data_801800
                
                if ((arg2[0xa].b & 0x10) == 0)
                    ecx_5 = *(eax_7 + arg3)
                
                return sub_694890(eax_7, arg5[1] + *arg5 + eax_7, ecx_5, arg5)
            
            uint32_t count = *(eax_3 + 0x10) - 1
            char const* const var_28_1
            int32_t var_24_1
            char const* const var_20_3
            char* ecx_6
            
            if (count u<= 0x10)
                var_20_3 = "DefBinSerializeTagValue"
                var_24_1 = 0x222
                var_28_1 = "C:\x\ax2017\Engine\DefBin.cpp"
                ecx_6 = "!DefTypeIsBuiltIn(pDefMap)"
            label_694d80:
                sub_63b870(count, &data_801800, ecx_6, var_28_1, var_24_1, var_20_3)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            count = arg5[4]
            
            if (count != 0 && *count != 0)
                var_20_3 = "DefBinSerializeTagValue"
                var_24_1 = 0x225
                var_28_1 = "C:\x\ax2017\Engine\DefBin.cpp"
                ecx_6 = "!tSerializer.pDataSizeWithoutHWBuffers || *tSerializer."
                "pDataSizeWithoutHWBuffers == 0"
                goto label_694d80
            
            count.b = arg5[3].b
            int32_t ebx_3 = (arg5[2] + 3) & 0xfffffffc
            arg5[2] = ebx_3
            arg4:3.b = count.b
            
            if (count.b == 0)
                *(arg5[1] + *var_c + *arg5) = ebx_3
            
            int32_t* ecx_9 = *(arg3 + *var_c)
            count = *(eax_3 + 0xc)
            
            if (count == 0)
                var_20_3 = "DefinitionGetSize"
                var_24_1 = 0x6d
                var_28_1 = "C:\x\ax2017\Engine\Definition.cpp"
                ecx_6 = "pDefMap->definitionSize != 0"
                goto label_694d80
            
            if (arg4:3.b == 0)
                memcpy(*arg5 + ebx_3, ecx_9, count)
            
            int32_t esi_2 = arg5[1]
            int32_t eax_14 = count + ebx_3
            arg5[1] = ebx_3
            arg5[2] = eax_14
            eax_1 = sub_694da0(eax_14, eax_3, ecx_9, nullptr, arg5)
            arg5[1] = esi_2
    else
        eax_1 = *arg2
        void* ecx_2 = *(eax_1 + arg3)
        
        if (ecx_2 != 0)
            int32_t* eax_5 = *(ecx_2 + 0x20)
            char* ecx_3 = &data_801800
            
            if (eax_5 != 0)
                ecx_3 = eax_5
            
            return sub_694890(eax_5, arg5[1] + *arg5 + eax_1, ecx_3, arg5)

return eax_1
