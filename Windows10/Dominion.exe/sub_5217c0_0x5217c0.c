// 函数: sub_5217c0
// 地址: 0x5217c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_18 = __chkstk(0x25b4)
void var_8
sub_561e00(__security_cookie ^ &var_8, 0, 1, 0)
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
void arg_c
int32_t arg_191c[0x323]
int32_t edi =
    __builtin_memcpy(&arg_c, sub_568780(&arg_191c, sub_566800(arg1), 0x3ea, &arg_191c), 0xc84)
int32_t eax_7 = sub_56ca00(&arg_c, &arg_191c)
int32_t arg_c94[0x320]
memset(&arg_c94, 0, 0xc84)

for (int32_t i = sub_566920(edi); i != 0; i = sub_566920(i))
    uint32_t ebx_1 = zx.d(i.w)
    int32_t eax_10 = *(sub_573400() + 4)
    
    if (ebx_1 u>= 0x320)
        sub_591930()
    
    int32_t ecx_5 = ebx_1 * 0x64
    int32_t eax_11 = 0
    
    if (eax_7 s<= 0)
    label_5218f4:
        void* eax_12 = sub_573400()
        int32_t eax_13 = *(eax_12 + 4)
        
        if (ebx_1 u>= 0x320)
            sub_591930()
        
        int32_t* ecx_7 = *(eax_12 + 4)
        uint32_t edx_5 = *(ecx_5 + eax_13 + 0x1a70)
        int32_t var_2c_1
        __builtin_memset(&var_2c_1, 0, 0x18)
        int32_t var_28_1
        char* var_24_1
        int32_t var_20_2
        void* var_1c_2
        void* var_18_3
        sub_582d10(eax_13, edx_5, ecx_7, i, 0x3ee, 0xb, 0x3ea, 3, *(eax_12 + 0x28), 
            *(eax_12 + 0x2c), *(eax_12 + 0x30), var_2c_1, var_28_1, var_24_1, var_20_2, var_1c_2, 
            var_18_3)
        break
    
    while (arg_191c[eax_11] != *(ecx_5 + eax_10 + 0x1a4c))
        eax_11 += 1
        
        if (eax_11 s>= eax_7)
            goto label_5218f4
    
    void* eax_15 = arg2
    
    if (eax_15 s>= 0x320)
        sub_591930()
        eax_15 = arg2
    
    arg_c94[eax_15] = i
    arg2 += 1

void* eax_14 = sub_573400()
*(eax_14 + 0xc)
*(eax_14 + 4)
uint32_t result = sub_582eb0(&arg_c94, arg2, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
