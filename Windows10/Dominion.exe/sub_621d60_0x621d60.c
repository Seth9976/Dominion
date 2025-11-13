// 函数: sub_621d60
// 地址: 0x621d60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
*(sub_64e7a0(arg1) + 0x18bc) = sub_621910
void* eax_3 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t ecx_3 = *(eax_3 + 0x3508)
void** esi

if (ecx_3 == 0)
    esi = &data_bf0170
else
    if (ecx_3 != 1)
        sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0xe473, "CampaignHomeDlgUpdate")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    esi = &data_bf017c

uint32_t eax_4 = sub_64e7a0(arg1)
sub_665db0(eax_4, esi, eax_4, 0x3f800000, 0xffffffff, 0)
int32_t var_50 = 0
int32_t i = 0
void* ecx_8 = eax_3 + 0x35c0
int128_t var_90

do
    int32_t edi_1 = *(ecx_8 + 4)
    
    if (edi_1 == 0)
        break
    
    if (*(ecx_8 - 4) == 0)
        int32_t edx_1 = var_50
        var_50 = edx_1 + 1
        int32_t eax_6 = *ecx_8
        
        if (eax_6 u> 3)
            sub_63b870(eax_6, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
                0xac6a, "AILevelToType")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t eax_7
        
        switch (eax_6)
            case 0
                eax_7 = 2
            case 1
                eax_7 = 3
            case 2
                eax_7 = 4
            case 3
                eax_7 = 1
        
        int32_t edx_2 = edx_1 * 2
        *(&var_90 + (edx_2 << 3)) = eax_7
        int32_t eax_8 = *(ecx_8 + 8)
        
        if (eax_8 s<= 0)
            int32_t eax_9 = *(ecx_8 + 0xc)
            *(&var_90:8 + (edx_2 << 3)) = edi_1
            *(&var_90:4 + (edx_2 << 3)) = 0
            *(&var_90:0xc + (edx_2 << 3)) = eax_9
        else
            *(&var_90:8 + (edx_2 << 3)) = eax_8
            *(&var_90:4 + (edx_2 << 3)) = 1
            *(&var_90:0xc + (edx_2 << 3)) = 0
    
    i += 1
    ecx_8 += 0x14
while (i s< 0xa0)

int32_t eax_11 = var_50 << 4 s>> 4
sub_637c10(eax_11, &(&var_90)[var_50], &var_90, eax_11, sub_60ddf0)
int32_t var_c = var_50
int128_t var_4c = var_90
int128_t var_80
int128_t var_3c = var_80
int128_t var_70
int128_t var_2c = var_70
int128_t var_60
int128_t var_1c = var_60
uint32_t eax_12 = sub_64e7a0(arg1)
int32_t var_b0 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** eax_14 = sub_666120(
    sub_665db0(eax_12, &data_bf0194, eax_12, 0x3f800000, 0xffffffff, 0), &data_bf0140, arg1, var_50)
int32_t esi_1 = 0

if (var_50 s> 0)
    int128_t* edi_3 = &var_4c
    
    do
        eax_14 = sub_60ba50(eax_14, edi_3, arg1, esi_1)
        esi_1 += 1
        edi_3 = &edi_3[1]
    while (esi_1 s< var_50)

void* result = sub_60de40(eax_14, 6, arg1, 0)
CookieCheckFunction(result)
return result
