// 函数: sub_5489f0
// 地址: 0x5489f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_cac = ecx
void var_c9c
sub_561e00(__security_cookie ^ &var_c9c, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 2, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_2 = *(eax_3 + 0xc)
char const* const var_cb4
int32_t var_cb0
char const* const var_cac_1
char* ecx_3

if (ecx_2 != 0xffffffff)
    int32_t eax_4 = *(eax_3 + 4)
    int32_t ecx_4 = ecx_2 * 0x5a30
    *(ecx_4 + eax_4 + 0x17558) |= 2
    uint32_t eax_5 = sub_56b800()
    eax_3 = sub_573400()
    int32_t edx_1 = *(eax_3 + 0xc)
    int32_t ebx_1 = *(eax_3 + 4)
    int32_t esi_1 = *(edx_1 * 0x5a30 + ebx_1 + 0x1752c)
    int32_t esi_2 = esi_1 - 1
    
    if (esi_1 - 1 s>= 0)
        eax_3 = ebx_1 + ((edx_1 * 0x168c + 0x639e + esi_2) << 2)
        int32_t temp1_1
        
        do
            if (*eax_3 == eax_5)
                int32_t var_c98 = 2
                int32_t var_14 = 1
                int32_t ecx_8 = esi_2 | 0x80000000
                
                if (sub_561d80(sub_56b800()) == 0)
                    ecx_8 = esi_2
                
                int32_t var_c94 = ecx_8
                uint32_t result = sub_56beb0(&var_c98, sub_548bf0, 9, sub_4fa550, 0, &var_c98, 0)
                CookieCheckFunction(result)
                return result
            
            eax_3 -= 4
            temp1_1 = esi_2
            esi_2 -= 1
        while (temp1_1 - 1 s>= 0)
    
    var_cac_1 = "GetPlayIndex"
    var_cb0 = 0x252
    var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Plunder.cpp"
    ecx_3 = "Halt"
else
    var_cac_1 = "SetGainFlag"
    var_cb0 = 0x52
    var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_3 = "c.activePlayer != PLAYER_NONE"

sub_63b870(eax_3, &data_801800, ecx_3, var_cb4, var_cb0, var_cac_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
