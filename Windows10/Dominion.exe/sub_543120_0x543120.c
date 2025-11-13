// 函数: sub_543120
// 地址: 0x543120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1998)
__security_cookie
int32_t arg_cf8
uint32_t result = sub_56ca80(&arg_cf8)
int32_t arg_70[0x320]
__builtin_memcpy(&arg_70, result, 0xc84)
int32_t esi_2 = arg2

if (esi_2 != 0)
    sub_566140(result, 0x474, &arg_70, 0x3ee, 5, 0, 0xb, nullptr, nullptr)
    int32_t arg_14 = 0
    int64_t arg_c = 0
    int64_t arg_1c
    __builtin_memset(&arg_1c, 0, 0x1c)
    int128_t arg_38 = 0x1c.o
    int128_t arg_48 = 1.o
    int128_t arg_58 = arg1.o
    int32_t* eax_2 = sub_563c40(&arg_38, 0xa, 0)
    
    if (eax_2 == 0)
        sub_63b870(eax_2, &data_801800, "cardChosen != CARDID_NULL", 
            "C:\x\ax2017\Jams\Dominion\code\DomCards_Nocturne.cpp", 0x1b8, "Crypt_TakeCard")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_4 = 0
    void* eax_3 = sub_573400()
    int32_t ecx_2 = *(eax_3 + 4)
    uint32_t ecx_3 = zx.d(eax_2.w)
    
    if (ecx_3 u>= 0x320)
        sub_591930()
    
    int32_t var_30_2
    __builtin_memset(&var_30_2, 0, 0x18)
    int32_t var_2c_2
    char* var_28_2
    int32_t var_24_2
    void* var_20_2
    void* var_1c_2
    void* ecx_6 = sub_582d10(eax_3, *(ecx_3 * 0x64 + ecx_2 + 0x1a70), *(eax_3 + 4), eax_2, 0x3ee, 
        0xb, 0x3ea, 3, *(eax_3 + 0x28), *(eax_3 + 0x2c), *(eax_3 + 0x30), var_30_2, var_2c_2, 
        var_28_2, var_24_2, var_20_2, var_1c_2)
    int32_t eax_4 = 0
    
    if (esi_2 s> 0)
        do
            ecx_6 = &arg_70[eax_4]
            
            if (arg_70[eax_4] == eax_2)
                *ecx_6 = arg_70[esi_2 - 1]
                esi_2 -= 1
                break
            
            eax_4 += 1
        while (eax_4 s< esi_2)
    
    int32_t var_1c_3 = 0
    uint32_t eax_6 = sub_56b800()
    result = sub_5661e0(eax_6, 0x3ee, &arg_70, eax_6, ecx_6)
    
    if (esi_2 s> 0)
        arg_cf8 = 4
        void arg_cfc
        memcpy(&arg_cfc, &arg_70, esi_2 << 2)
        int32_t arg_197c = esi_2
        result = sub_56bba0(&arg_cf8, 0, sub_543120, &arg_cf8, 1, 2)

CookieCheckFunction(result)
return result
