// 函数: sub_52b4e0
// 地址: 0x52b4e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 2, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(eax_1 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_2 + 0x17558) |= 8
void* eax_3 = sub_573400()
void* esi = *(eax_3 + 4)
void* j = sub_57da30(esi, 0xc0f)
void* j_1 = j
int32_t i = 7
void* esi_1 = esi + 0x1598

do
    if ((*(esi_1 + 8) & 2) == 0)
        j = *(esi_1 - 4)
        
        if (j == 0xc0f)
        label_52b57e:
            void* esi_2 = 7
            int32_t* ecx_5 = *(eax_3 + 4) + 0x1594
            
            while (*ecx_5 != j)
                if (ecx_5[1] == j)
                    break
                
                esi_2 += 1
                ecx_5 = &ecx_5[4]
                
                if (esi_2 s>= 0x48)
                    esi_2 = nullptr
                    break
            
            if (esi_2 == 0)
                return j
            
            void* eax_4
            int32_t edx_1
            eax_4, edx_1 = sub_573400()
            int32_t eax_5 = sub_583f70(eax_4, edx_1, *(eax_4 + 4), 0x601, esi_2)
            
            if (eax_5 s>= 4)
                sub_56cae0(sub_56e9c0(1), 0x3f1, esi_2, 0x601, eax_5)
                return sub_5624a0(sub_56b800(), 0x3e9)
            
            void* eax_9 = sub_573400()
            int32_t var_14_3 = 0
            int32_t var_18_1 = 0xffffffff
            int32_t var_1c_1 = 0
            void var_24
            return sub_561af0(
                sub_571fa0(eax_9, 0xffffffff, *(eax_9 + 4), 0x601, 1, esi_2, nullptr, var_24), 0, 
                eax_5 + 1, 0)
        
        if (*esi_1 == 0xc0f || j == j_1)
            if (j == 0)
                return j
            
            goto label_52b57e
    
    i += 1
    esi_1 += 0x10
while (i s< 0x48)

return j
