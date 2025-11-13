// 函数: sub_519950
// 地址: 0x519950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = data_cca780

while (true)
    void* eax_3 = sub_516f30(0x2710)
    void* ebx_1 = eax_3
    int32_t edx_1 = 0
    void* ecx_1 = ebx_1
    int32_t ecx_4
    int32_t esi_2
    
    while (true)
        if (*(ecx_1 + 0xc) == 4)
            eax_3 = edx_1 * 0x26c
            void* ecx_2 = ecx_1 + 0x10
            int32_t edi_1 = 0
            void* var_210_1 = ecx_2
            int32_t esi_1 = 0
            int32_t ebx_2 = *(eax_3 + ebx_1 + 0x270)
            
            if (ebx_2 s> 0)
                int32_t var_20c[0x81]
                
                do
                    void* var_228_1 = ecx_2
                    eax_3 = sub_517980(*(ecx_2 + (esi_1 << 2)), 5)
                    ecx_2 = var_210_1
                    
                    if (eax_3.b != 0)
                        eax_3 = *(ecx_2 + (esi_1 << 2))
                        var_20c[edi_1] = eax_3
                        edi_1 += 1
                    
                    esi_1 += 1
                while (esi_1 s< ebx_2)
                
                if (edi_1 s> 0)
                    uint32_t eax_4 = sub_63ed10(&data_cc8de0, edi_1)
                    ecx_4 = data_cca790
                    esi_2 = var_20c[eax_4]
                    break
        else
            edx_1 += 1
            ecx_1 += 0x26c
            
            if (edx_1 s< 4)
                continue
        
        sub_63b870(eax_3, &data_801800, "numFilteredEntries > 0", 
            "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x2168, "RollThemeCategory")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* edx_5
    
    if (ecx_4 != 2)
        edx_5 = data_cca780 + ((ecx_4 + 0xa02) << 3)
    else
        edx_5 = data_cca780 + 0x540 + (data_cca784 << 0xb)
    
    int32_t ecx_7 = 0
    *(edx_5 + 4) = esi_2
    int32_t* result = eax_2 + 0x5010
    
    while (edx_5 == result || *result != 0x384 || result[1] != esi_2)
        ecx_7 += 1
        result = &result[2]
        
        if (ecx_7 s> 1)
            CookieCheckFunction(result)
            return result
