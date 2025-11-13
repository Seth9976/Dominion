// 函数: sub_5333c0
// 地址: 0x5333c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1998)
__security_cookie
int32_t esi
int32_t var_14 = esi
*(sub_573400() + 0x40)
void arg_70
uint32_t eax_3 = sub_56f370(esi, &arg_70, 4, 0)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0x5e.o
void arg_cf8
__builtin_memcpy(&arg_cf8, eax_3, 0xc84)
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t* result = sub_563c40(&arg_38, 0xe, 0)

if (result != 0)
    uint32_t esi_3 = zx.d(result.w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    int32_t eax_5 = esi_3 * 0x64
    int32_t var_4c_1
    int32_t var_3c_1
    int32_t var_38_1
    int32_t var_34_1
    int32_t eax_7
    void* edi_2
    
    if (*(eax_5 + edi_1 + 0x1a50) != 0x3ec)
        int32_t var_c_2 = 0
        int32_t var_8_2 = 0
        edi_2 = sub_573400()
        eax_7 = *(edi_2 + 4)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        int32_t var_30_1
        __builtin_memset(&var_30_1, 0, 0x18)
        var_34_1 = *(edi_2 + 0x30)
        var_38_1 = *(edi_2 + 0x2c)
        var_3c_1 = *(edi_2 + 0x28)
        int32_t var_40_2 = 2
        int32_t var_44_2 = 0x3eb
        int32_t var_48_2 = 0xb
        var_4c_1 = 0x3e9
    else
        var_4 = 0
        int32_t var_8_1 = 0
        edi_2 = sub_573400()
        eax_7 = *(edi_2 + 4)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        int32_t var_30
        __builtin_memset(&var_30, 0, 0x18)
        var_34_1 = *(edi_2 + 0x30)
        var_38_1 = *(edi_2 + 0x2c)
        var_3c_1 = *(edi_2 + 0x28)
        int32_t var_40_1 = 2
        int32_t var_44_1 = 0x3eb
        int32_t var_48_1 = 0xb
        var_4c_1 = 0x3ec
    
    void* var_20
    void* var_1c
    result = sub_582d10(eax_7, *(eax_5 + eax_7 + 0x1a70), *(edi_2 + 4), result, var_4c_1, 0xb, 
        0x3eb, 2, var_3c_1, var_38_1, var_34_1, 0, 0, nullptr, 0, var_20, var_1c)

CookieCheckFunction(result)
return result
