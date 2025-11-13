// 函数: sub_52dd70
// 地址: 0x52dd70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx = 0
int32_t i = 7
int32_t* eax_4 = *(sub_573400() + 4) + 0x1594
int32_t var_78[0x1b]

do
    int32_t edx_1 = *eax_4
    
    if (edx_1 != 0)
        var_78[ebx] = edx_1
        ebx += 1
    
    i += 1
    eax_4 = &eax_4[4]
while (i s< 0x21)

if (ebx s> 0x19)
    sub_63b870(eax_4, &data_801800, 
        "num <= NUM_KINGDOM_PILES + MAX_EXTRA_KINGDOM_PILES + MAX_STANDARD_PILES", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Empires.cpp", 0x383, 
        "Tax_Setup::<lambda_ce671fd9f13ff472e6da122f56ca29b2>::operator ()")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t result = 0
uint32_t result_1 = 0

if (ebx s> 0)
    while (true)
        int32_t edi_1 = var_78[result]
        void* eax_5 = sub_573400()
        void* esi_1 = *(eax_5 + 4)
        int32_t eax_6 = sub_57da30(esi_1, edi_1)
        int32_t edx_3 = 7
        void* esi_2 = esi_1 + 0x1594
        void* esi_3
        
        while (true)
            int32_t i_1 = *esi_2
            
            if (i_1 != edi_1 && *(esi_2 + 4) != edi_1 && i_1 != eax_6)
                edx_3 += 1
                esi_2 += 0x10
                
                if (edx_3 s< 0x48)
                    continue
            else if (i_1 != 0)
                esi_3 = 7
                int32_t* eax_9 = *(eax_5 + 4) + 0x1594
                
                while (*eax_9 != i_1)
                    if (eax_9[1] == i_1)
                        break
                    
                    esi_3 += 1
                    eax_9 = &eax_9[4]
                    
                    if (esi_3 s>= 0x48)
                        goto label_52de35
                
                break
            
        label_52de35:
            esi_3 = nullptr
            break
        
        void* eax_10 = sub_573400()
        int32_t var_94_1 = 0
        int32_t var_98_1 = 0xffffffff
        int32_t var_9c_1 = 0
        sub_571fa0(eax_10, 0xffffffff, *(eax_10 + 4), 0xc00, 1, esi_3, nullptr)
        result = result_1 + 1
        result_1 = result
        
        if (result s>= ebx)
            break

CookieCheckFunction(result)
return result
