// 函数: sub_567be0
// 地址: 0x567be0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_2 = ebp
uint32_t ecx
void* __return_addr_3
ecx, __return_addr_3 = __chkstk(0x19a8)
__security_cookie
int32_t esi
int32_t var_14 = esi
__return_addr = __return_addr_3
void arg_80
uint32_t eax_2 = sub_5678e0(esi, &arg_80, 4, 0, 0, 0)
int32_t arg_24 = 0
int32_t arg_34 = 0
void* const __return_addr_1 = __return_addr
uint32_t result_1
__builtin_memcpy(&result_1, eax_2, 0xc84)
int64_t arg_1c = 0
int32_t eax_3 = 0x35
int64_t arg_2c = 0

if (ecx s<= 1)
    eax_3 = 0xb

int64_t arg_40 = 0
int64_t arg_38 = 0
int128_t arg_48 = __return_addr_1.o
int128_t arg_58 = 0.o
int128_t arg_68 = arg_38.o
int32_t* eax_5 = sub_563960(&arg_80, 0, &result_1, &arg_80, 1, 1, &arg_48, eax_3, 0, 0)
int32_t ecx_2 = __builtin_memcpy(&result_1, eax_5, 0xc84)

if (arg2 == 0)
    CookieCheckFunction(0)
    return 0

uint32_t result = result_1

if (result != 0)
    char arg_8
    
    if (ecx == 1)
        void* eax_6 = sub_573400()
        uint32_t edi_2 = zx.d(result.w)
        void* __return_addr_2 = *(eax_6 + 4)
        uint32_t eax_7 = *(eax_6 + 0xc)
        __return_addr = __return_addr_2
        
        if (edi_2 u>= 0x320)
            sub_591930()
            __return_addr_2 = __return_addr
        
        __builtin_memset(&__return_addr, 0, 8)
        int64_t arg_10 = 0
        int32_t arg_c = *(edi_2 * 0x64 + __return_addr_2 + 0x1a54)
        arg_8.d = result
        sub_586320(&arg_8, eax_7, __return_addr_2, &arg_8, &arg_10, &__return_addr, arg1)
        CookieCheckFunction(result)
        return result
    
    uint32_t var_20_2
    
    if (arg_8 == 0)
        int32_t var_20_3 = ecx_2
        eax_5 = sub_56b800()
        var_20_2 = eax_5
    else
        var_20_2 = 0
    
    sub_566c60(eax_5, ecx, result, var_20_2, arg1)

CookieCheckFunction(result)
return result
