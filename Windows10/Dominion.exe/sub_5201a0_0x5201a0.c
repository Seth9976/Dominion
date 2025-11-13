// 函数: sub_5201a0
// 地址: 0x5201a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x191c)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_573400()
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
*(ecx_2 + eax_4 + 0x17558) |= 2
int32_t __saved_ebp
int32_t arg_c84[0x323]
__builtin_memcpy(&__saved_ebp, sub_568780(&arg_c84, edx_1, 0x3ea, &arg_c84), 0xc84)
sub_566800(arg1)
int32_t esi_1 = 0
int32_t edi = 0
uint32_t eax_10
int32_t ecx_6

if (arg2 s<= 0)
label_520294:
    void* eax_11 = sub_573400()
    eax_10 = sub_56b800()
    int32_t ecx_5 = *(*(eax_11 + 4) + 0x1504)
    
    if (ecx_5 != 3 && ecx_5 != 5 && ecx_5 != 4 && ecx_5 != 6)
        void* var_34
        __builtin_memset(&var_34, 0, 0x20)
        ecx_5.b = ecx_5 == 2
        void* var_30
        int128_t* var_2c
        int32_t var_28
        int32_t var_24_1
        int32_t var_20_1
        int32_t var_1c_1
        int32_t var_18_2
        eax_10, ecx_5 = sub_61b1b0(eax_10, 0x24, ecx_5.b, *(eax_11 + 0xc), eax_10, 1, var_34, 
            var_30, var_2c, var_28, var_24_1, var_20_1, var_1c_1, var_18_2)
    
    int32_t var_18_3 = ecx_5
    ecx_6 = 3
else
    while (true)
        void* eax_7 = sub_573400()
        uint32_t ebx_1 = zx.d((&__saved_ebp)[esi_1].w)
        int32_t var_8 = *(eax_7 + 4)
        
        if (ebx_1 u>= 0x320)
            sub_591930()
        
        int32_t i = *(ebx_1 * 0x64 + var_8 + 0x1a4c)
        eax_10 = 0
        
        if (esi_1 s> 0)
            while (arg_c84[eax_10] != i)
                eax_10 += 1
                
                if (eax_10 s>= esi_1)
                    goto label_520282
            
            int32_t i_1 = i
            ecx_6 = 1
            break
        
    label_520282:
        arg_c84[esi_1] = i
        edi += 1
        esi_1 += 1
        
        if (edi s>= arg2)
            goto label_520294

uint32_t result = sub_561e00(eax_10, 0, ecx_6, 0)
CookieCheckFunction(result)
return result
