// 函数: sub_58e330
// 地址: 0x58e330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = arg1
int32_t esi = arg2

if ((eax_2 != 0 || esi != 0x40) && (eax_2 != 0x80000000 || esi != 0)
        && (eax_2 != 0 || (esi != 0x800 && (eax_2 != 0 || esi != 0x400))))
    void* esi_3 = data_cce9c0
    
    while (true)
        uint32_t ebx_3
        
        if (*(esi_3 + 0xc80) != 0 || *(esi_3 + 0x1904) != 0)
            int32_t eax_12
            uint32_t edx_10
            eax_12, edx_10 = sub_58dcc0(eax_2, data_cce9bc, esi_3, 0)
            int32_t var_c98_2 = 0
            void* eax_13 = sub_571b30(edx_10, data_cce9b0)
            
            if (((arg1 & *(eax_13 + 0x98)) | (*(eax_13 + 0x9c) & arg2)) != 0)
                ebx_3 = edx_10
            else
                eax_2 = *(esi_3 + 0x3e8c)
                
                if (eax_2 s>= 0x320)
                    break
                
                *(esi_3 + (eax_2 << 3) + 0x258c) = eax_12
                *(esi_3 + (eax_2 << 3) + 0x2590) = edx_10
                *(esi_3 + 0x3e8c) += 1
                continue
        else
            ebx_3 = 0
        
        sub_58dd90(esi_3)
        CookieCheckFunction(ebx_3)
        return ebx_3
    
    sub_63b870(eax_2, &data_801800, "deck.numRejects < MAX_CARDS", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x4140, "RandomizerDeck_Reject")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* ecx_1 = data_cce9c0
int32_t var_c8c[0x321]
int32_t* eax_3 = sub_58e1e0(eax_2, &var_c8c, data_cce9b0, eax_2, esi)
void* ecx_3 = data_cce9c4
int32_t* var_c90 = eax_3
sub_58e290(&var_c90, &var_c8c, ecx_3, &var_c90)
sub_58dc60(&var_c8c, data_cce9c8, data_cce9b0, &var_c8c, &var_c90)
int32_t* ebx_1 = var_c90
int32_t* eax_6 = data_cce9c8
int32_t edi_1 = 0
bool cond:0 = ebx_1 != 0

if (ebx_1 s> 0)
    eax_6 = &eax_6[0x301]
    int32_t (* esi_1)[0x321] = &var_c8c
    var_c90 = eax_6
    
    do
        for (int32_t i = 0; i s< 0x2bc; )
            int32_t edx_4 = *eax_6
            
            if (edx_4 == 0)
                break
            
            if (edx_4 == *esi_1)
                int32_t eax_7 = (&var_c90)[ebx_1]
                ebx_1 -= 1
                *esi_1 = eax_7
                edi_1 -= 1
                esi_1 -= 4
                break
            
            i += 1
            eax_6 = &eax_6[1]
        
        eax_6 = var_c90
        edi_1 += 1
        esi_1 = &(*esi_1)[1]
    while (edi_1 s< ebx_1)
    
    esi = arg2
    cond:0 = ebx_1 != 0

if (not(cond:0))
    int32_t* eax_8 = sub_58e1e0(eax_6, &var_c8c, data_cce9b0, arg1, esi)
    void* ecx_6 = data_cce9c4
    var_c90 = eax_8
    sub_58e290(&var_c90, &var_c8c, ecx_6, &var_c90)
    ebx_1 = var_c90

uint32_t esi_2 = var_c8c[sub_63ed10(data_cce9bc, ebx_1)]
sub_58ffd0(ecx_1, esi_2)
CookieCheckFunction(esi_2)
return esi_2
