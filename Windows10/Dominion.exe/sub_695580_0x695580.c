// 函数: sub_695580
// 地址: 0x695580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = arg4

if (*(edi + 8) != 0)
    int32_t edx = 0
    
    while (true)
        int32_t edx_1 = edx + 1
        int32_t* esi_1 = *(edi + 4) + edx * 0x3c
        
        if (edx_1 s>= *(edi + 8))
            edx_1 = 0xffffffff
        
        void* eax_1 = esi_1[3]
        int32_t edi_1 = *(eax_1 + 0x10)
        
        if (edi_1 != 0xf)
            arg1 = sub_69c520(eax_1)
            char const* const var_2c_5
            int32_t var_28_1
            char const* const var_24_1
            char* ecx_11
            char const* const edx_3
            
            if (arg1.b == 0)
                arg1 = *(esi_1[3] + 0x10)
                
                if (arg1 == 1 || arg1 == 4 || arg1 == 0x10 || arg1 == 2 || arg1 == 0xe
                        || arg1 == 0xa || arg1 == 3)
                    goto label_6957fc
                
                var_24_1 = "DefBinShallowDefTypeFixup"
                var_28_1 = 0x147
                edx_3 = "Unable to fixup data type"
                ecx_11 = "HaltMsg"
            label_695841:
                var_2c_5 = "C:\x\ax2017\Engine\DefBin.cpp"
            label_695846:
                sub_63b870(arg1, edx_3, ecx_11, var_2c_5, var_28_1, var_24_1)
                
                if (sub_63bc30() == 0)
                    sub_63bb00()
                    noreturn
                
                breakpoint
            
            if (edi_1 == 0x11)
                sub_695290()
                noreturn
            
            if (edi_1 == 5)
                uint32_t eax_8 = esi_1[4]
                arg1 = sub_6952c0(eax_8, arg2, arg3, esi_1, arg5, *(eax_8 + arg2), arg6)
            label_695763:
                
                if (arg1.b != 0)
                    goto label_6957fc
                
                arg1.b = 0
                return arg1
            
            int32_t var_30_2
            int32_t* var_2c_2
            int32_t var_24_3
            int32_t* edx_6
            
            if (edi_1 == 6)
                var_24_3 = arg6
                int32_t var_28_3 = 0
                var_2c_2 = esi_1
                var_30_2 = esi_1[7]
                edx_6 = *esi_1 + arg2
            label_69575b:
                arg1 = sub_6950c0(arg1, edx_6, arg3, var_30_2, var_2c_2, nullptr, var_24_3)
                goto label_695763
            
            if (edi_1 == 8 || edi_1 == 0xc)
                arg1 = *esi_1
                int32_t edx_12 = *(arg1 + arg2)
                
                if (edx_12 == 0)
                    arg1.b = 0
                    return arg1
                
                void* eax_13 = arg3 + edx_12
                *(arg1 + arg2) = eax_13
                void* esi_4 = eax_13 + 1
                void** ecx_18
                
                do
                    ecx_18.b = *eax_13
                    eax_13 += 1
                while (ecx_18.b != 0)
                
                if (eax_13 - esi_4 + 1 + edx_12 s<= arg6)
                    goto label_6957fc
                
                arg1.b = 0
                return arg1
            
            if (edi_1 != 0xb)
                if (edi_1 == 9)
                    if (sub_695390(arg1, arg2, arg3, esi_1, arg5, arg6).b == 0)
                        arg1.b = 0
                        return arg1
                    
                    goto label_6957fc
                
                arg1 = *(eax_1 + 0x10) - 1
                
                if (arg1 u<= 0x10)
                    var_24_1 = "DefBinReadFixupField"
                    var_28_1 = 0x416
                    edx_3 = &data_801800
                    ecx_11 = "!DefTypeIsBuiltIn(pFieldDefMap)"
                    goto label_695841
                
                void* eax_11 = arg5
                
                if (eax_11 == 0 && (edi_1 == 0x13 || edi_1 == 0x14))
                    eax_11 = esi_1[7]
                
                if (sub_695870(eax_11, *esi_1 + arg2, arg3, eax_1, eax_11, arg6).b != 0)
                    goto label_6957fc
                
                arg1.b = 0
                return arg1
            
            arg1 = *esi_1
            int32_t ecx_13 = *(arg1 + arg2)
            
            if (ecx_13 == 0)
                *(arg1 + arg2) = ecx_13
                goto label_6957fc
            
            int32_t edx_7 = esi_1[0xa]
            
            if ((edx_7.b & 0x10) != 0)
                goto label_6957fc
            
            if ((edx_7 & 0x100) != 0 && ecx_13 s>= arg6)
                *(arg1 + arg2) = ecx_13
                goto label_6957fc
            
            edx_6 = arg3 + ecx_13
            *(arg1 + arg2) = edx_6
            arg1 = *(esi_1[6] + 0xc)
            
            if (arg1 == 0)
                var_24_1 = "DefinitionGetSize"
                var_28_1 = 0x6d
                var_2c_5 = "C:\x\ax2017\Engine\Definition.cpp"
                edx_3 = &data_801800
                ecx_11 = "pDefMap->definitionSize != 0"
                goto label_695846
            
            arg1 += ecx_13
            
            if (arg1 s> arg6 || edx_6 s<= arg2)
                arg1.b = 0
                return arg1
            
            var_24_3 = arg6
            int32_t var_28_4 = 0
            var_2c_2 = esi_1
            var_30_2 = 1
            goto label_69575b
        
        int32_t edx_2 = esi_1[8]
        int32_t* eax_3 = *esi_1 + arg2
        int32_t edi_2 = *eax_3
        
        if (edi_2 != 0)
            char* esi_3 = arg3 + edi_2
            char* ecx_4 = esi_3
            *eax_3 = esi_3
            void* eax_4
            
            do
                eax_4.b = *ecx_4
                ecx_4 = &ecx_4[1]
            while (eax_4.b != 0)
            
            if (ecx_4 - &ecx_4[1] + 1 + edi_2 s> arg6)
                arg1.b = 0
                return arg1
            
            if (edx_2 != 0)
                *eax_3 = sub_69f030(esi_3, edx_2)
            else if (*esi_3 != edx_2.b)
                if (edx_2 == 0)
                    edx_2 = sub_6b7ef0(esi_3)
                
                *eax_3 = sub_69f030(esi_3, edx_2)
            else
                *eax_3 = 0
            
            goto label_6957fc
        
        *eax_3 = 0
    label_6957fc:
        edx = edx_1
        
        if (edx == 0xffffffff)
            break
        
        edi = arg4

arg1.b = 1
return arg1
