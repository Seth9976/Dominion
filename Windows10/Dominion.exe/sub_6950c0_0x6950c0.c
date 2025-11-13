// 函数: sub_6950c0
// 地址: 0x6950c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg5
int32_t* esi = arg2
uint32_t result = *(*(ebx + 0x18) + 0xc)
uint32_t result_1 = result
char const* const var_30_1
int32_t var_2c_1
char const* const var_28_1
char* ecx
char* const edx_2

if (result != 0)
    uint32_t result_2 = 0
    
    if (arg4 s<= 0)
    label_695257:
        result.b = 1
        return result
    
    int32_t edi_1 = arg7
    
    while (true)
        void* ecx_1 = *(ebx + 0x18)
        
        if (*(ecx_1 + 0x10) != 0xf)
            result = sub_69c520(ecx_1)
            void* edx_1 = *(ebx + 0x18)
            int32_t ecx_6 = *(edx_1 + 0x10)
            
            if (result.b != 0)
                if (ecx_6 != 8)
                    if (ecx_6 s> 0 && ecx_6 s< 0x12)
                        var_28_1 = "DefBinReadFixupArray"
                        var_2c_1 = 0x327
                        var_30_1 = "C:\x\ax2017\Engine\DefBin.cpp"
                        ecx = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
                        goto label_695272
                    
                    if (sub_695870(result, esi, arg3, edx_1, arg6, edi_1).b == 0)
                        result.b = 0
                        return result
                else
                    int32_t edx_3 = *esi
                    
                    if (edx_3 == 0)
                        result.b = 0
                        return result
                    
                    void* ecx_8 = arg3 + edx_3
                    *esi = ecx_8
                    void* edi_4 = ecx_8 + 1
                    
                    do
                        result.b = *ecx_8
                        ecx_8 += 1
                    while (result.b != 0)
                    
                    edi_1 = arg7
                    
                    if (ecx_8 - edi_4 + 1 + edx_3 s> edi_1)
                        result.b = 0
                        return result
            else if (ecx_6 != 1 && ecx_6 != 4 && ecx_6 != 0x10 && ecx_6 != 2 && ecx_6 != 0xe
                    && ecx_6 != 0xa && ecx_6 != 3)
                var_28_1 = "DefBinShallowDefTypeFixup"
                var_2c_1 = 0x147
                var_30_1 = "C:\x\ax2017\Engine\DefBin.cpp"
                edx_2 = "Unable to fixup data type"
                ecx = "HaltMsg"
                break
        else
            int32_t edx = *(ebx + 0x20)
            int32_t ebx_1 = *esi
            
            if (ebx_1 != 0)
                char* edi_3 = arg3 + ebx_1
                char* ecx_2 = edi_3
                *esi = edi_3
                void* eax_1
                
                do
                    eax_1.b = *ecx_2
                    ecx_2 = &ecx_2[1]
                while (eax_1.b != 0)
                
                if (ecx_2 - &ecx_2[1] + 1 + ebx_1 s> arg7)
                    result.b = 0
                    return result
                
                if (edx != 0)
                label_695183:
                    edi_1 = arg7
                    ebx = arg5
                    *esi = sub_69f030(edi_3, edx)
                else
                    if (*edi_3 != edx.b)
                        if (edx == 0)
                            edx = sub_6b7ef0(edi_3)
                        
                        goto label_695183
                    
                    edi_1 = arg7
                    ebx = arg5
                    *esi = 0
            else
                ebx = arg5
                *esi = 0
        
        esi += result_1
        result = result_2 + 1
        result_2 = result
        
        if (result s>= arg4)
            goto label_695257
else
    var_28_1 = "DefinitionGetSize"
    var_2c_1 = 0x6d
    var_30_1 = "C:\x\ax2017\Engine\Definition.cpp"
    ecx = "pDefMap->definitionSize != 0"
label_695272:
    edx_2 = &data_801800

sub_63b870(result, edx_2, ecx, var_30_1, var_2c_1, var_28_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
