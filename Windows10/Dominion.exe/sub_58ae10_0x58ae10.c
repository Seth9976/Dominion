// 函数: sub_58ae10
// 地址: 0x58ae10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* ebx = arg1
uint32_t esi = arg2
int32_t* var_c9c = ebx
int32_t eax_2 = ebx[0x541]
uint32_t var_ca0 = esi

if (eax_2 != 3 && eax_2 != 5 && eax_2 != 4 && eax_2 != 6)
    arg1.b = eax_2 == 2
    sub_61b1b0(eax_2, 0x29, arg1.b, esi, 0, 4, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

ebx[0x67b] = 4
char var_c8d = 1
void* eax_11

do
    int32_t var_c8c[0x321]
    uint32_t eax_4 = sub_590990(&var_c8c, esi, ebx, 0x3ea, &var_c8c)
    uint32_t var_c94_1 = eax_4
    int32_t edi_1 = 0
    int32_t esi_1 = 0
    
    if (eax_4 s> 0)
        do
            int32_t ebx_1 = var_c8c[esi_1]
            eax_4 = sub_5757f0(eax_4, ebx_1.w, var_c9c, 0x40000, 0)
            
            if (eax_4.b != 0)
                var_c8c[edi_1] = ebx_1
                edi_1 += 1
            
            esi_1 += 1
        while (esi_1 s< var_c94_1)
        
        ebx = var_c9c
    
    int64_t var_c98
    void* eax_5 = sub_58ac40(&var_c8c, &var_c98:4)
    
    if (edi_1 == 0)
    label_58b0ce:
        ebx[0x67b] = 0
        CookieCheckFunction(eax_5)
        return eax_5
    
    if (var_c8d != 0)
        int32_t eax_6 = ebx[0x541]
        
        if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6)
            sub_61b1b0(eax_6, 5, eax_6 == 2, var_ca0, 0, 4, nullptr, nullptr, nullptr, 0, 0, 0, 0, 
                0)
    
    int64_t var_ce8
    __builtin_memset(&var_ce8, 0, 0x2c)
    int128_t var_d1c = 8.o
    int32_t var_cdc
    int128_t var_d0c_1 = var_cdc.o
    var_c8d = 0
    int64_t var_ccc
    int128_t var_cfc_1 = var_ccc.o
    int32_t var_ca8 = 0
    int32_t var_ca4_1 = 0
    eax_5 =
        sub_5869d0(&var_c8c, &var_ca8, ebx, var_ca0, 1, &var_c8c, edi_1, 1, 0, 1, &var_d1c, 1, 0, 0)
    
    if (eax_5 != 1)
        if (eax_5 == 0)
            goto label_58b0ce
        
        sub_63b870(eax_5, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
            0x397b, "NightPhase")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t edi_3 = var_c8c[0]
    uint32_t esi_3 = zx.d(edi_3.w)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    esi = var_ca0
    var_c98 = 0
    int64_t var_cb8 = 0
    int32_t var_cac_1 = ebx[esi_3 * 0x19 + 0x695]
    int32_t var_cb0 = edi_3
    eax_11 = sub_586320(&var_cb0, esi, ebx, &var_cb0, &var_cb8, &var_c98, 0)
while (ebx[0x67b] == 4)

CookieCheckFunction(eax_11)
return eax_11
