// 函数: sub_537560
// 地址: 0x537560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
int32_t var_cb4 = ecx_2
*(ecx_2 + eax_4 + 0x17558) |= 2
sub_561e00(eax_4, 0, 1, 0)
void* eax_5 = sub_564390()
void* eax_6 = sub_573400()
void* eax_7 = sub_5887c0(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), 0)

if (eax_7 != 0)
    uint32_t esi_1 = zx.d(eax_7.w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t esi_2 = *(esi_1 * 0x64 + edi_1 + 0x1a4c)
    int32_t ecx_4
    ecx_4.b = esi_2 != eax_5
    void* eax_10 = sub_566890(ecx_4)
    
    if (esi_2 == eax_5)
        int32_t var_18 = 0
        void* var_c98
        
        if (eax_10 != 0)
            var_c98 = eax_10
            int32_t var_18_1 = 1
        
        sub_56f1a0(eax_10, &var_c98, 0x1c, 0)
        sub_56e9c0(1)
        void* var_c9c = nullptr
        void* var_ca0 = nullptr
        void* eax_11 = sub_573400()
        uint32_t ebx_1 = zx.d(eax_10.w)
        int32_t eax_12 = *(eax_11 + 4)
        int32_t var_ca4 = eax_12
        
        if (ebx_1 u>= 0x320)
            sub_591930()
            eax_12 = var_ca4
        
        uint32_t eax_13 = sub_582d10(eax_12, *(ebx_1 * 0x64 + eax_12 + 0x1a70), *(eax_11 + 4), 
            eax_10, 0x3eb, 0xb, 0x3ea, 3, *(eax_11 + 0x28), *(eax_11 + 0x2c), *(eax_11 + 0x30), 0, 
            0, nullptr, 0, var_c9c, var_ca0)
        CookieCheckFunction(eax_13)
        return eax_13
    
    eax_7 = sub_56e9c0(nullptr)

CookieCheckFunction(eax_7)
return eax_7
