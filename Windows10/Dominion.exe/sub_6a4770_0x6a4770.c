// 函数: sub_6a4770
// 地址: 0x6a4770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg3
int32_t* result_1 = result

if (arg5 == 0)
    result = sub_69ca80(arg3, arg2)

if (arg4 == 0)
    return result

arg4[4] = arg2

if (*(arg2 + 0x18) != 0 && *(arg2 + 0x14) != 0)
    int32_t* esi_1 = arg4[1]
    
    if (esi_1 == 0)
    label_6a47dc:
        result = 0
    else
        int32_t* eax
        
        while (true)
            eax = *esi_1
            char* const _Str1 = &data_801800
            esi_1 = esi_1[1]
            char* _Str1_1 = *eax
            
            if (_Str1_1 != 0)
                _Str1 = _Str1_1
            
            if (_stricmp(_Str1, "_version") == 0)
                break
            
            if (esi_1 == 0)
                goto label_6a47dc_1
        
        if (eax == 0)
        label_6a47dc_1:
            result = 0
        else
            char* _String_1 = eax[1]
            char* const _String = &data_801800
            
            if (_String_1 != 0)
                _String = _String_1
            
            result = atoi(_String)
    
    int32_t ecx = *(arg2 + 0x18)
    
    if (result != ecx)
        int32_t* esi_2 = arg4[4]
        int32_t edx = esi_2[5]
        
        if (edx != 0)
            result = edx(arg4, result, ecx)
            
            if (result.b == 0)
                int32_t var_24_4 = *esi_2
                sub_63b870(sub_63b5f0("Difficult versioning function failed on '%s'"), 
                    &data_801800, "result", "C:\x\ax2017\Engine\DefParseTree.cpp", 0x473, 
                    "DefParseReadBlock")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn

return sub_6a4510(result, arg2, result_1, arg4)
