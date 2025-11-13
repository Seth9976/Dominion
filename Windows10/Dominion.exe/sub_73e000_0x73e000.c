// 函数: sub_73e000
// 地址: 0x73e000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
ebx.b = 0
int32_t* esi = arg1
uint32_t eax

if (*(data_147df48 + 4) == 0x19 && *esi == 0)
    eax = esi[1]
    
    if (eax == 0x20 && esi[2] == 0)
        sub_73d740()
        int32_t eax_1
        eax_1.b = 0
        return eax_1

char const* const var_14
int32_t var_10
char const* const var_c
char* ecx

if (*(data_147df48 + 4) != 0x19 || *esi != 0 || eax != 0x66 || esi[2] != 0)
    eax = data_147df8c
    
    if (eax u<= 3)
        switch (eax)
            case 0, 3
                goto label_73e0f4
            case 1
                int32_t edi
                sub_73cc60(arg1, &data_147def0, esi, edi)
            label_73e0f4:
                
                if (*esi != 0)
                    eax.b = ebx.b
                    return eax
            case 2
                ebx.b = sub_73d910(arg1, &data_147def0).b
                
                if (ebx.b != 0 || *esi != 0)
                    eax.b = ebx.b
                    return eax
        
        eax = esi[1]
        
        if (eax == 0x5d && esi[2] == 0)
            data_147df84 = data_147df84 * 0.5f
            eax.b = 0
            return eax
        
        if (eax != 0x5b)
            eax.b = ebx.b
            return eax
        
        if (esi[2] != 0)
            eax.b = ebx.b
            return eax
        
        eax.b = 0
        data_147df84 = data_147df84 * 2f
        return eax
    
    var_c = "EditorControlsInputHandle"
    var_10 = 0x553
    var_14 = "C:\x\ax2017\Engine\Editor\EditorControls.cpp"
    ecx = "Halt"
else
    void* edx_1 = data_147abe8
    
    if (edx_1 != 0)
        int32_t* edx_2 = *(edx_1 + 0x10)
        void* ecx_1 = nullptr
        
        while (true)
            if (ecx_1 != 0)
                ecx_1 += 0x7c
            else
                ecx_1 = *edx_2
            
            eax = edx_2[1] * 0x7c + *edx_2
            
            if (ecx_1 u>= eax)
                break
            
            while ((*(ecx_1 + 0x78) & 0xffff0000) == 0)
                ecx_1 += 0x7c
                
                if (ecx_1 u>= eax)
                    eax.b = 0
                    return eax
            
            float xmm0_1 = *(ecx_1 + 0x4c)
            xmm0_1 f- 0
            eax:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                | (xmm0_1 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                *(ecx_1 + 0x4c) = 0x3f000000
                *(ecx_1 + 0x50) = 0x3f000000
        
        eax.b = 0
        return eax
    
    var_c = "GetGameData"
    var_10 = 0x45
    var_14 = "C:\x\ax2017\Engine\Game.h"
    ecx = "gpGameData"

sub_63b870(eax, &data_801800, ecx, var_14, var_10, var_c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
