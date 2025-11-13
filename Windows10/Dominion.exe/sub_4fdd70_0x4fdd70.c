// 函数: sub_4fdd70
// 地址: 0x4fdd70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebp
int32_t* var_4 = ebp
__chkstk(0x19a8)
__security_cookie
int32_t edi
int32_t var_18 = edi
int32_t arg_80[0x320]
memset(&arg_80, 0, 0xc84)
int32_t arg_d08[0x320]
memset(&arg_d08, 0, 0xc84)
int32_t i_1 = arg3

for (int32_t i = sub_566920(edi); i != 0; i = sub_566920(i))
    int32_t eax_4 = *(sub_573400() + 4)
    uint32_t eax_5 = zx.d(i.w)
    uint32_t var_8_1 = eax_5
    
    if (eax_5 u>= 0x320)
        sub_591930()
        eax_5 = var_8_1
    
    int32_t* eax_6 = eax_5 * 0x64
    char eax_9
    
    if (*(eax_6 + eax_4 + 0x1a4c) != 0x50a)
        void* eax_8 = *(sub_573400() + 4)
        
        if (var_8_1 u>= 0x320)
            sub_591930()
        
        eax_9 = sub_5754f0(eax_8, *(eax_6 + eax_8 + 0x1a4c), eax_8, 4, 0)
    
    if (*(eax_6 + eax_4 + 0x1a4c) == 0x50a || eax_9 == 0)
        void* eax_10 = arg4
        
        if (eax_10 s>= 0x320)
            sub_591930()
            eax_10 = arg4
        
        arg_d08[eax_10] = i
        arg4 += 1
    else
        if (i_1 s>= 0x320)
            sub_591930()
        
        arg_80[i_1] = i
        i_1 = arg3 + 1
        arg3 = i_1
        
        if (i_1 == 2)
            break

int32_t eax_14 = *(*(sub_573400() + 4) + 0x1504)

if (eax_14 != 3 && eax_14 != 5 && eax_14 != 4 && eax_14 != 6)
    sub_61b1b0(eax_14, 7, eax_14 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

void* eax_15 = sub_573400()
*(eax_15 + 0xc)
*(eax_15 + 4)
uint32_t result = sub_582eb0(&arg_d08, arg4, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)

if (i_1 s> 0)
    int64_t arg_8 = 0
    int64_t arg_10 = 0
    
    do
        int64_t arg_1c
        __builtin_memset(&arg_1c, 0, 0x2c)
        int128_t arg_48 = 0x43.o
        int128_t arg_58 = arg1.o
        int128_t arg_68 = arg2.o
        int32_t* __return_addr_1 = sub_563c40(&arg_48, 0xb, 1)
        void* eax_16 = sub_573400()
        int32_t* ecx_5 = *(eax_16 + 4)
        uint32_t eax_17 = *(eax_16 + 0xc)
        uint32_t eax_18 = zx.d(__return_addr_1.w)
        
        if (eax_18 u>= 0x320)
            sub_591930()
        
        int32_t arg_4 = ecx_5[eax_18 * 0x19 + 0x695]
        __return_addr = __return_addr_1
        sub_586320(&__return_addr, eax_17, ecx_5, &__return_addr, &arg_10, &arg_8, 0x10)
        result = 0
        
        if (i_1 s<= 0)
            break
        
        do
            uint32_t* ecx_6 = &arg_80[result]
            
            if (arg_80[result] == __return_addr_1)
                result = arg_80[i_1 - 1]
                *ecx_6 = result
                i_1 -= 1
                break
            
            result += 1
        while (result s< i_1)
    while (i_1 s> 0)

CookieCheckFunction(result)
return result
