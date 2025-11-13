// 函数: sub_531760
// 地址: 0x531760
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_cc4 = ecx
int32_t var_cb4
sub_561e00(__security_cookie ^ &var_cb4, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_2 = *(eax_3 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_4 + 0x17558) |= 2
void* eax_5 = sub_573400()
void* eax_6 = sub_5887c0(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 0)

if (eax_6 != 0)
    uint32_t esi_1 = zx.d(eax_6.w)
    void* ebx_1 = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_8 = esi_1 * 0x64
    var_cb4 = eax_8
    ebx_1.b = sub_5754f0(eax_8, *(eax_8 + ebx_1 + 0x1a4c), ebx_1, 4, 0)
    void var_c94
    memset(&var_c94, 0, 0xc80)
    int32_t var_18
    int32_t var_18_1 = var_18 + 1
    int32_t eax_11 = zx.d(ebx_1.b) ^ 1
    void* var_c98 = eax_6
    sub_566370(eax_11, 0x3eb, &var_c98, eax_11)
    
    if (ebx_1.b != 0)
        sub_56e9c0(1)
        void* eax_12 = sub_573400()
        int32_t* ebx_2 = *(eax_12 + 4)
        uint32_t eax_13 = *(eax_12 + 0xc)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        var_cb4.q = 0
        int32_t var_ca4 = *(var_cb4 + ebx_2 + 0x1a54)
        void* var_ca8 = eax_6
        int64_t var_ca0 = 0
        void* eax_17 = sub_586320(&var_ca8, eax_13, ebx_2, &var_ca8, &var_ca0, &var_cb4, 0x10)
        CookieCheckFunction(eax_17)
        return eax_17
    
    eax_6 = sub_56e9c0(nullptr)

CookieCheckFunction(eax_6)
return eax_6
