// 函数: sub_6a3dc0
// 地址: 0x6a3dc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* _Str2_2 = *arg4
char* const _Str2 = &data_801800

if (_Str2_2 != 0)
    _Str2 = _Str2_2

int32_t edi = 0
char* const _Str2_1 = _Str2

if (*(arg3 + 8) s<= 0)
label_6a3e1b:
    *arg2 = 0xffffffff
else
    _Str2_2 = nullptr
    void* _Str2_3 = nullptr
    
    while (true)
        void* ecx_1 = *(arg3 + 4) + _Str2_2
        
        if (_stricmp(*(ecx_1 + 4), _Str2) == 0)
            int32_t edx = *ecx_1
            *arg2 = edx
            
            if (edx == 0xffffffff)
                break
            
            void* eax_3 = sub_6dd320(arg3, edx)
            int32_t eax_4 = *(eax_3 + 0x10)
            char const* const var_28
            int32_t var_24_2
            char const* const var_20_2
            char* ecx_3
            
            if (eax_4 == 5)
                var_20_2 = "DefParseReadTagValue"
                var_24_2 = 0x2bd
                var_28 = "C:\x\ax2017\Engine\DefParseTree.cpp"
                ecx_3 = "Halt"
            else if (eax_4 s<= 0 || eax_4 s>= 0x12)
                uint32_t ecx_6 = *(eax_3 + 0xc)
                
                if (ecx_6 == 0)
                label_6a3e99:
                    var_20_2 = "DefinitionGetSize"
                    var_24_2 = 0x6d
                    var_28 = "C:\x\ax2017\Engine\Definition.cpp"
                    ecx_3 = "pDefMap->definitionSize != 0"
                else
                    arg2[2] = sub_687730(ecx_6)
                    eax_4 = sub_69c590(eax_3)
                    int32_t ecx_8 = *arg2
                    
                    if (eax_4.b != 0)
                        if (ecx_8 s< 0 || ecx_8 s>= *(arg3 + 0x10))
                            goto label_6a3fb9
                        
                        int32_t eax_8 = *(arg3 + 0xc)
                        sub_6a34e0(eax_8, eax_3, arg2[2], *(eax_8 + (ecx_8 << 2)), arg4)
                        uint32_t eax_9
                        eax_9.b = 1
                        return eax_9
                    
                    if (ecx_8 s< 0 || ecx_8 s>= *(arg3 + 0x10))
                        goto label_6a3fb9
                    
                    eax_4 = *(*(arg3 + 0xc) + (ecx_8 << 2))
                    
                    if ((*(eax_4 + 0x28) & 0x40) == 0)
                        sub_6a4770(arg4, eax_3, arg2[2], arg4[3], 0)
                        eax_4.b = 1
                        return eax_4
                    
                    void* esi_1 = *(eax_3 + 4)
                    
                    if ((*(esi_1 + 0x28) & 0x40) != 0)
                        sub_6a34e0(sub_69ca80(arg2[2], eax_3), *(esi_1 + 0xc), arg2[2], esi_1, arg4)
                        sub_6a4770(arg4, eax_3, arg2[2], arg4[3], 1)
                        int32_t eax_13
                        eax_13.b = 1
                        return eax_13
                    
                    var_20_2 = "DefParseReadTagValue"
                    var_24_2 = 0x2e6
                    var_28 = "C:\x\ax2017\Engine\DefParseTree.cpp"
                    ecx_3 = "pDefMap->pDTMapFields[0].fieldFlags & DEF_FIELD_FLAG_INLINE_XML"
            else
                int32_t ecx_4 = *arg2
                
                if (ecx_4 s>= 0 && ecx_4 s< *(arg3 + 0x10))
                    int32_t eax_5 = *(arg3 + 0xc)
                    sub_6a34e0(eax_5, eax_3, &arg2[2], *(eax_5 + (ecx_4 << 2)), arg4)
                    eax_4 = *(eax_3 + 0xc)
                    
                    if (eax_4 == 0)
                        goto label_6a3e99
                    
                    if (eax_4 == 1)
                        arg2[2] &= 0xff
                        eax_4.b = eax_4.b
                        return eax_4
                    
                    if (eax_4 != 2)
                        eax_4.b = 1
                        return eax_4
                    
                    *(arg2 + 0xa) = 0
                    int32_t eax_6
                    eax_6.b = 1
                    return 1
                
            label_6a3fb9:
                var_20_2 = "AttribTagGetField"
                var_24_2 = 0x8b
                var_28 = "C:\x\ax2017\Engine\AttribMap.cpp"
                ecx_3 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
            
            sub_63b870(eax_4, &data_801800, ecx_3, var_28, var_24_2, var_20_2)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        edi += 1
        _Str2 = _Str2_1
        _Str2_2 = _Str2_3 + 0x3c
        _Str2_3 = _Str2_2
        
        if (edi s>= *(arg3 + 8))
            goto label_6a3e1b

_Str2_2.b = 0
return _Str2_2
