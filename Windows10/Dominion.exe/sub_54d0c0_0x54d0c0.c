// 函数: sub_54d0c0
// 地址: 0x54d0c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x19a8)
__security_cookie
int32_t esi
int32_t var_14 = esi
void arg_80
uint32_t eax_2 = sub_5678e0(esi, &arg_80, 0x20, 0, 0, 0)
int32_t arg_18 = 0x119
int64_t arg_1c
__builtin_memset(&arg_1c, 0, 0x2c)
int128_t arg_48 = arg_18.o
void* result_4
__builtin_memcpy(&result_4, eax_2, 0xc84)
int128_t arg_58 = arg1.o
int128_t arg_68 = arg2.o
__builtin_memcpy(&result_4, sub_563960(&arg_80, 0, &result_4, &arg_80, 1, 1, &arg_48, 0xb, 0, 0), 
    0xc84)
int32_t* var_8
void* result_2
int32_t arg_c
int64_t arg_10

if (arg3 != 0)
    void* result_3 = result_4
    
    if (result_3 != 0)
        void* eax_5 = sub_573400()
        uint32_t edi_1 = zx.d(result_3.w)
        int32_t* ecx_1 = *(eax_5 + 4)
        void* __return_addr_1 = *(eax_5 + 0xc)
        var_8 = ecx_1
        __return_addr = __return_addr_1
        
        if (edi_1 u>= 0x320)
            sub_591930()
            ecx_1 = var_8
        
        void* const __return_addr_3 = __return_addr
        var_8.q = 0
        arg_10 = 0
        arg_c = ecx_1[edi_1 * 0x19 + 0x695]
        result_2 = result_3
        sub_586320(&result_2, __return_addr_3, ecx_1, &result_2, &arg_10, &var_8, 0)

uint32_t eax_9 = sub_563590(0x102)

if (eax_9 != 0)
    void* eax_10 = sub_573400()
    sub_583720(eax_10, *(eax_10 + 0xc), *(eax_10 + 4), eax_9, 0x476, nullptr, 0x476, 0, 0, 4)

sub_5636e0(4, 0)
void* result = sub_547860(0x476)
void* result_1 = result

if (result_1 != 0)
    result = sub_56f260(result_1)
    
    if (result.b != 0)
        void* eax_11 = sub_573400()
        uint32_t edi_2 = zx.d(result_1.w)
        int32_t* __return_addr_2 = *(eax_11 + 4)
        int32_t* eax_12 = *(eax_11 + 0xc)
        __return_addr = __return_addr_2
        var_8 = eax_12
        
        if (edi_2 u>= 0x320)
            sub_591930()
            __return_addr_2 = __return_addr
        
        int32_t* edx_3 = var_8
        arg_10 = 0
        __builtin_memset(&__return_addr, 0, 8)
        arg_c = __return_addr_2[edi_2 * 0x19 + 0x695]
        result_2 = result_1
        result =
            sub_586320(&result_2, edx_3, __return_addr_2, &result_2, &__return_addr, &arg_10, 0x10)

CookieCheckFunction(result)
return result
