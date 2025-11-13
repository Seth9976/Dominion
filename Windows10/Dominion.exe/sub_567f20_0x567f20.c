// 函数: sub_567f20
// 地址: 0x567f20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x19a8)
__security_cookie
uint32_t eax_2

if (sub_567520().b == 0)
    uint32_t count = 0xc7c
    int32_t arg_d08 = ecx
    void arg_d0c
    memset(&arg_d0c, 0, count)
    int32_t arg_1988 = 1
    int64_t arg_1c = 0
    int32_t arg_24 = 0
    int64_t arg_2c
    __builtin_memset(&arg_2c, 0, 0x1c)
    void* eax_3 = sub_573400()
    int128_t arg_48 = edx.o
    int32_t edx_1 = *(eax_3 + 0x2c)
    int128_t arg_58 = ecx.o
    int128_t arg_68 = arg1.o
    arg_68.d = *(eax_3 + 0x28)
    void* var_8 = eax_3
    void* __return_addr_1 = *eax_3
    int32_t var_1c_1 = 0
    int32_t arg_80
    __builtin_memcpy(&arg_80, &arg_d08, 0xc84)
    void* ecx_2 = var_8
    char var_20_2 = 0
    int32_t var_24_2 = 0xb
    __return_addr = __return_addr_1
    int32_t arg_4 = *(ecx_2 + 0x10)
    arg_68:4.d = edx_1
    eax_2 = sub_5869d0(&arg_80, &__return_addr, *(ecx_2 + 4), *(ecx_2 + 0xc), 1, &arg_80, 1, 1, 0, 
        1, &arg_48, var_24_2, var_20_2, var_1c_1)
    
    if (eax_2 != 0)
        if (eax_2 != 1)
            sub_591930()
        
        void* eax_6 = sub_573400()
        int32_t edi_1 = arg_80
        uint32_t esi_1 = zx.d(edi_1.w)
        void* ecx_4 = *(eax_6 + 4)
        void* __return_addr_2 = *(eax_6 + 0xc)
        var_8 = ecx_4
        __return_addr = __return_addr_2
        
        if (esi_1 u>= 0x320)
            sub_591930()
            ecx_4 = var_8
        
        uint32_t __return_addr_3 = __return_addr
        char var_1c_2 = 0
        var_8.q = 0
        int64_t arg_10 = 0
        int32_t arg_c = *(esi_1 * 0x64 + ecx_4 + 0x1a54)
        int32_t* var_20_3 = &var_8
        int32_t arg_8 = edi_1
        sub_586320(&arg_8, __return_addr_3, ecx_4, &arg_8, &arg_10, var_20_3, var_1c_2)
        void* eax_10
        eax_10.b = 1
        CookieCheckFunction(eax_10)
        return eax_10

eax_2.b = 0
CookieCheckFunction(eax_2)
return eax_2
