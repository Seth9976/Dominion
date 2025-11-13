// 函数: sub_5224c0
// 地址: 0x5224c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ebp
uint32_t var_4 = ebp
__chkstk(0x19a8)
__security_cookie
void arg_80
void* result = sub_56ca80(&arg_80)
int32_t arg_d08[0x320]
__builtin_memcpy(&arg_d08, result, 0xc84)
int32_t esi_1 = arg3

if (esi_1 != 0)
    int64_t arg_8 = 0
    int64_t arg_10 = 0
    bool cond:0_1
    
    do
        int64_t arg_1c
        __builtin_memset(&arg_1c, 0, 0x2c)
        int128_t arg_48 = 0x59.o
        int128_t arg_58 = arg1.o
        int128_t arg_68 = arg2.o
        int32_t* __return_addr_1 = sub_563c40(&arg_48, 0xb, 0)
        void* eax_2 = sub_573400()
        int32_t* ecx_1 = *(eax_2 + 4)
        var_4 = *(eax_2 + 0xc)
        uint32_t eax_4 = zx.d(__return_addr_1.w)
        
        if (eax_4 u>= 0x320)
            sub_591930()
        
        int32_t arg_4 = ecx_1[eax_4 * 0x19 + 0x695]
        __return_addr = __return_addr_1
        sub_586320(&__return_addr, var_4, ecx_1, &__return_addr, &arg_10, &arg_8, 0x10)
        result = nullptr
        cond:0_1 = esi_1 != 0
        
        if (esi_1 s> 0)
            do
                void** ecx_2 = &arg_d08[result]
                
                if (arg_d08[result] == __return_addr_1)
                    result = arg_d08[esi_1 - 1]
                    *ecx_2 = result
                    esi_1 -= 1
                    break
                
                result += 1
            while (result s< esi_1)
            
            cond:0_1 = esi_1 != 0
    while (cond:0_1)

CookieCheckFunction(result)
return result
