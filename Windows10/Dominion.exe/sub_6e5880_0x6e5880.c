// 函数: sub_6e5880
// 地址: 0x6e5880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = data_147abe8
int32_t* result

if (edi != 0)
    int32_t* edi_1 = *(edi + 0xc)
    void* esi_1 = nullptr
    
    while (true)
        if (esi_1 != 0)
            esi_1 += 0x94
        else
            esi_1 = *edi_1
        
        result = edi_1[1] * 0x94 + *edi_1
        
        if (esi_1 u>= result)
            break
        
        while ((*(esi_1 + 0x90) & 0xffff0000) == 0)
            esi_1 += 0x94
            
            if (esi_1 u>= result)
                goto label_6e58d6
        
        sub_6e5c50(esi_1)
    
label_6e58d6:
    void* ebx_1 = data_147abe8
    
    if (ebx_1 != 0)
        int32_t* edi_2 = *(ebx_1 + 0xc)
        
        if (*edi_2 != 0)
            void* eax_1 = &edi_2[4]
            int32_t edx_1 = 0
            void* ebx_2 = &edi_2[3]
            void* ecx_2 = eax_1
            void* esi_2
            
            while (true)
                esi_2 = ebx_2
                
                if (edx_1 != 0)
                    edx_1 += 0x94
                    ecx_2 = eax_1
                else
                    edx_1 = *edi_2
                
                ebx_2 = &edi_2[3]
                int32_t eax_3 = edi_2[1] * 0x94 + *edi_2
                
                if (edx_1 u>= eax_3)
                    break
                
                while (true)
                    int32_t eax_4 = *(edx_1 + 0x90)
                    
                    if ((eax_4 & 0xffff0000) != 0)
                        int32_t ecx_4 = edi_2[3]
                        edi_2[3] = zx.d(eax_4.w)
                        eax_1 = &edi_2[4]
                        *(edx_1 + 0x90) = ecx_4
                        ecx_2 = &edi_2[4]
                        *ecx_2 -= 1
                        break
                    
                    edx_1 += 0x94
                    ecx_2 = &edi_2[4]
                    esi_2 = ebx_2
                    
                    if (edx_1 u>= eax_3)
                        goto label_6e594d
            
        label_6e594d:
            result = *edi_2
            edi_2[1] = 0
            *esi_2 = 0
            
            if (result != 0)
                result = _aligned_free(result)
                ecx_2 = &edi_2[4]
            
            *edi_2 = 0
            edi_2[1] = 0
            edi_2[2] = 0
            *esi_2 = 0
            *ecx_2 = 0
            edi_2[6] = 0
        
        int32_t* ecx_3 = *(ebx_1 + 0xc)
        
        if (ecx_3 != 0)
            result = sub_64c080(ecx_3, 0x1c)
            *(ebx_1 + 0xc) = 0
        
        return result

sub_63b870(result, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
