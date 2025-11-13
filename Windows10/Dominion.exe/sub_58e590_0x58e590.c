// 函数: sub_58e590
// 地址: 0x58e590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_c90 = arg1
uint32_t eax_2

if (arg2 - 6 u<= 0xf)
label_58e5b4:
    eax_2.b = 1
    CookieCheckFunction(eax_2)
    return eax_2

int32_t i = *(arg1 + (arg2 << 2) + 0x118)

if (i == 0)
    sub_63b870(arg2 - 6, &data_801800, "source != CARD_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x4451, "ExtraPileIsAfterDivineWind")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* edx = arg1 + 0x28
void* ebx_1 = edx

while (true)
    int32_t edx_1 = data_cce9b0
    int32_t eax_3 = 0
    int32_t var_c98_1 = edx_1
    int32_t var_c94_1 = 0
    void* eax_11
    void* ebx_2
    int32_t i_2
    
    while (true)
        i_2 = *(arg1 + (eax_3 << 2))
        int32_t var_c8c[0x321]
        
        if (i_2 != 0)
            void* eax_4 = sub_571b30(i_2, edx_1)
            ebx_2 = var_c90
            int32_t eax_5 = sub_4df200(eax_4, ebx_2, eax_4, &var_c8c)
            int32_t ecx_4 = 0
            
            if (eax_5 s> 0)
                while (var_c8c[ecx_4] != i)
                    ecx_4 += 1
                    
                    if (ecx_4 s>= eax_5)
                        goto label_58e640
                
                break
            
        label_58e640:
            eax_3 = var_c94_1 + 1
            var_c94_1 = eax_3
            ebx_1 = edx
            edx_1 = var_c98_1
            
            if (eax_3 s< 0xa)
                arg1 = var_c90
                continue
        
        int32_t var_c94_2 = 0
        
        while (true)
            i_2 = *ebx_1
            
            if (i_2 != 0)
                void* eax_7 = sub_571b30(i_2, edx_1)
                int32_t eax_8 = sub_4df200(eax_7, var_c90, eax_7, &var_c8c)
                int32_t ecx_7 = 0
                
                if (eax_8 s> 0)
                    while (var_c8c[ecx_7] != i)
                        ecx_7 += 1
                        
                        if (ecx_7 s>= eax_8)
                            goto label_58e6a8
                    
                    break
                
            label_58e6a8:
                ebx_1 += 0x3c
                int32_t eax_10 = var_c94_2 + 1
                var_c94_2 = eax_10
                
                if (eax_10 s< 4)
                    edx_1 = var_c98_1
                    continue
            
            int32_t ebx_3 = 0
            void* edi_1 = var_c90 + 0x118
            void* var_c94_3 = edi_1
            int32_t ecx_10
            
            while (true)
                i_2 = *edi_1
                
                if (i_2 != 0)
                    void* eax_12 = sub_571b30(i_2, var_c98_1)
                    eax_11 = sub_4df200(eax_12, var_c90, eax_12, &var_c8c)
                    ecx_10 = 0
                    
                    if (eax_11 s> 0)
                        break
                
            label_58e717:
                ebx_3 += 1
                edi_1 = var_c94_3 + 4
                var_c94_3 = edi_1
                
                if (ebx_3 s>= 0x6b)
                label_58e729:
                    eax_11.b = 0
                    CookieCheckFunction(eax_11)
                    return eax_11
            
            while (var_c8c[ecx_10] != i)
                ecx_10 += 1
                
                if (ecx_10 s>= eax_11)
                    goto label_58e717
            
            break
        
        ebx_2 = var_c90
        break
    
    i = i_2
    eax_11 = nullptr
    
    while (true)
        if (*(ebx_2 + (eax_11 << 2)) == i_2)
            goto label_58e729
        
        eax_11 += 1
        
        if (eax_11 s>= 0xa)
            ebx_1 = edx
            eax_11 = nullptr
            void* ecx_13 = ebx_1
            
            while (true)
                int32_t edx_7 = *ecx_13
                
                if (edx_7 != 0)
                    if (edx_7 == i_2)
                        goto label_58e729
                    
                    eax_11 += 1
                    ecx_13 += 0x3c
                    
                    if (eax_11 s< 4)
                        continue
                
                int32_t i_1 = 0
                eax_2 = var_c90 + 0x130
                
                do
                    if (*eax_2 == i_2)
                        goto label_58e5b4
                    
                    i_1 += 1
                    eax_2 += 4
                while (i_1 s< 0xf)
                
                arg1 = var_c90
                break
            
            break
