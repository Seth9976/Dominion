// 函数: sub_594010
// 地址: 0x594010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = *(arg3 + 0x1504)

if (result != 4 && result != 3 && result != 5)
    result = sub_57da30(arg3, arg4)
    void* edx_1 = arg3 + 0x1594
    int32_t esi_1 = 7
    void* ecx = edx_1
    int32_t i
    
    while (true)
        i = *ecx
        
        if (i == arg4)
            break
        
        if (*(ecx + 4) == arg4)
            break
        
        if (i == result)
            break
        
        esi_1 += 1
        ecx += 0x10
        
        if (esi_1 s>= 0x48)
            return result
    
    if (i != 0)
        result = 7
        
        while (*edx_1 != i)
            if (*(edx_1 + 4) == i)
                break
            
            result += 1
            edx_1 += 0x10
            
            if (result s>= 0x48)
                return result
        
        if (result != 0)
            int32_t var_24
            char const* const ecx_2
            
            if (result - 0x22 s< 0)
                char const* const var_20 = "DoLandscapeTracking"
                var_24 = 0x53c6
                ecx_2 = "idx >= 0"
            label_5940fd:
                sub_63b870(result - 0x22, &data_801800, ecx_2, 
                    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_24, "DoLandscapeTracking")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (result - 0x22 s>= 4)
                char const* const var_20_1 = "DoLandscapeTracking"
                var_24 = 0x53c7
                ecx_2 = "idx < MAX_LANDSCAPE_CARDS"
                goto label_5940fd
            
            void* ecx_5 = arg3 + ((result - 0x22 + (arg2 << 2)) << 2)
            result = arg5
            *(ecx_5 + 0x5f01c) += result

return result
