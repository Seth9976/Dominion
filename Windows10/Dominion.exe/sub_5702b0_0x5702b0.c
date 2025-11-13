// 函数: sub_5702b0
// 地址: 0x5702b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(*(sub_573400() + 4) + 0x19c4) == *(sub_573400() + 0xc))
    void* eax_2
    eax_2.b = 1
    return eax_2

int32_t ebx = 0
int32_t var_10 = 0
int32_t var_c = 0
void* eax_3 = sub_573400()
int32_t i = 0
void* var_8 = eax_3
void* esi_1 = *(eax_3 + 4)

if (*(esi_1 + 0x19b8) s> 0)
    do
        if (*(ebx + esi_1 + 0x3b5b4) == 0)
            void* eax_4 = sub_573400()
            eax_3 = var_8
            
            if (*(ebx + esi_1 + 0x3b5b8) == *(eax_4 + 0xc))
                var_10 += 1
        
        if (*(ebx + esi_1 + 0x3b5b4) == 1)
            void* eax_5 = sub_573400()
            eax_3 = var_8
            
            if (*(ebx + esi_1 + 0x3b5b8) == *(eax_5 + 0xc))
                var_c += 1
        
        esi_1 = *(eax_3 + 4)
        i += 1
        ebx += 0xa8
    while (i s< *(esi_1 + 0x19b8))
    
    ebx = var_c

eax_3.b = var_10 s> ebx
return eax_3
