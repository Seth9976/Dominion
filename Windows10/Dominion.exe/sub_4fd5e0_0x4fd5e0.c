// 函数: sub_4fd5e0
// 地址: 0x4fd5e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4_1 = ebp
int32_t var_18 = __chkstk(0x1934)
void var_8
sub_561e00(__security_cookie ^ &var_8, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_573400()
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
void arg_14
void arg_c9c
__builtin_memcpy(&arg_c9c, sub_566240(&arg_14, edx_1, 4, &arg_14, &data_78317c), 0xc84)
memset(&arg_14, 0, 0xc84)
void* edi = &arg_c9c
void* eax_8 = &arg_c9c + (arg2 << 2)
void* arg_10 = eax_8

if (&arg_c9c != eax_8)
    int32_t esi_1 = arg1
    
    do
        uint32_t ebx_2 = zx.d((*edi).w)
        int32_t eax_10 = *(sub_573400() + 4)
        
        if (ebx_2 u>= 0x320)
            sub_591930()
        
        void* eax_11 = ebx_2 * 0x64
        
        if (*(eax_11 + eax_10 + 0x1a4c) != 0x104)
            var_4_1 = *(sub_573400() + 4)
            
            if (ebx_2 u>= 0x320)
                sub_591930()
        
        if (*(eax_11 + eax_10 + 0x1a4c) == 0x104 || *(eax_11 + var_4_1 + 0x1a4c) == 0x500)
            void* ecx_6 = sub_573400()
            int32_t eax_16 = *(ecx_6 + 4)
            
            if (ebx_2 u>= 0x320)
                sub_591930()
            
            eax_8 = sub_582d10(eax_11, *(eax_11 + eax_16 + 0x1a70), *(ecx_6 + 4), *edi, 0x3ee, 0xb, 
                0x3ea, 3, *(ecx_6 + 0x28), *(ecx_6 + 0x2c), *(ecx_6 + 0x30), 0, 0, nullptr, 0, 
                nullptr, nullptr)
        else
            if (esi_1 s>= 0x320)
                sub_591930()
            
            eax_8 = *edi
            *(&arg_14 + (esi_1 << 2)) = eax_8
            esi_1 = arg1 + 1
            arg1 = esi_1
        
        edi += 4
    while (edi != arg_10)

uint32_t result = sub_569330(eax_8, 0x3ee, &arg_14, 0x18)
CookieCheckFunction(result)
return result
