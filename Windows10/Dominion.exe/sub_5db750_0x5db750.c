// 函数: sub_5db750
// 地址: 0x5db750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = data_cf65b8
float var_3c = 0f
int32_t var_38 = 0
uint128_t xmm1 = zx.o(*(eax_2 + 0x18))
int32_t xmm2_1 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x14)))
int32_t xmm1_1 = _mm_cvtepi32_ps(xmm1)
int32_t var_34 = xmm2_1
int32_t var_30 = xmm1_1
int128_t xmm0 = var_3c.o
var_3c = 0f
int32_t var_34_1 = xmm2_1
int32_t var_30_1 = xmm1_1
int128_t var_4c = xmm0
int32_t var_38_1 = 0
var_3c.o = var_3c.o
void var_6c
int32_t edx
int128_t* eax_4 = sub_5d77e0(&var_6c, edx, arg1, &var_6c)
int128_t var_28 = *eax_4
int128_t var_18 = eax_4[1]
void* eax_5 = sub_5d8610(arg1)
*arg1 = eax_5
sub_654ce0(&var_4c, &arg1[0x6e8], "arrow", data_171e874, &var_4c, &var_3c, eax_5, nullptr, 0)
sub_666060(arg1[0x6e8], &var_28)
*(sub_64e7a0(arg1[0x6e8]) + 0x18bc) = sub_5db060
void* eax_8 = arg1[0x88]
char const* const var_80_1
int32_t var_7c
char const* const var_78_1
char* ecx_3

if (eax_8 == 0)
    uint32_t eax_12 = sub_64e7a0(arg1[0x6e8])
    sub_665db0(eax_12, &data_be31a8, eax_12, 0x3f800000, 0xffffffff, 0)
    sub_5d8950(arg1[0x6e8], arg1[0x8a])
label_5db911:
    eax_8 = data_cc8dc0
    
    if (eax_8 != 0)
        void** esi_1 = &data_cadf54
        
        if (*(eax_8 + 0xc) == 0)
            esi_1 = &data_cadf60
        
        uint32_t eax_13 = sub_64e7a0(arg1[0x6e8])
        sub_665db0(eax_13, esi_1, eax_13, 0x3f800000, 0xffffffff, 0)
        uint32_t result = sub_65d6e0(arg1[0x6e8], data_8c4634)
        CookieCheckFunction(result)
        return result
    
    var_78_1 = "GetLocalSettings"
    var_7c = 0x5fb
    var_80_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx_3 = "gGameSettings.localSettings"
else if (eax_8 == 3)
    uint32_t eax_9 = sub_64e7a0(arg1[0x6e8])
    sub_665db0(eax_9, &data_be2fa4, eax_9, 0x3f800000, 0xffffffff, 0)
    int32_t ecx_6 = data_b604e0
    int32_t eax_10 = ecx_6
    
    if (ecx_6 == 0xffffffff)
        eax_10 = 0
    
    if (eax_10 != data_b80b44)
    label_5db8c0:
        uint32_t eax_11 = sub_64e7a0(arg1[0x6e8])
        sub_665db0(eax_11, &data_be31b4, eax_11, 0x3f800000, 0xffffffff, 0)
        goto label_5db911
    
    if (ecx_6 == 0xffffffff)
        ecx_6 = 0
    
    eax_8 = data_cc8d5c
    
    if (eax_8 != 0)
        if (ecx_6 == *(eax_8 + 0x7590) || data_b604cc != 3)
            goto label_5db911
        
        goto label_5db8c0
    
    var_78_1 = "GetClient"
    var_7c = 0x7b
    var_80_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_3 = "gClient"
else
    var_78_1 = "DomDeclareArrow"
    var_7c = 0x36b1
    var_80_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_3 = "Halt"

sub_63b870(eax_8, &data_801800, ecx_3, var_80_1, var_7c, var_78_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
