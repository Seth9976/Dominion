// 函数: sub_550e70
// 地址: 0x550e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x192c)
int32_t esi
int32_t var_10 = esi
void var_8
sub_561af0(__security_cookie ^ &var_8, 0, 2, 0)
void* eax_2 = sub_573400()
int32_t* ebx = *(eax_2 + 4)
int32_t eax_3 = *(eax_2 + 0xc)
int32_t arg_c[0x320]
uint32_t arg_c94
__builtin_memcpy(&arg_c, sub_550930(esi, &arg_c94), 0xc84)
int32_t eax_7 = *(*(sub_573400() + 4) + 0x1504)

if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6)
    void* var_34
    __builtin_memset(&var_34, 0, 0x20)
    void* var_30
    int128_t* var_2c
    int32_t var_28
    int32_t var_24
    int32_t var_20
    int32_t var_1c
    int32_t var_18_2
    sub_61b1b0(eax_7, 7, eax_7 == 2, 0xffffffff, 0, 1, var_34, var_30, var_2c, var_28, var_24, 
        var_20, var_1c, var_18_2)

__return_addr = nullptr
var_4:3.b = 0
char i

do
    uint32_t eax_8 = sub_56b800()
    i = sub_5875c0(eax_3, &arg_c, 2, &__return_addr, &var_4:3, eax_8)
while (i == 0)
void* const __return_addr_2 = __return_addr
int32_t ecx_3 = arg1

if (__return_addr_2 != 0)
    int32_t eax_9 = 0
    
    if (ecx_3 s> 0)
        do
            if (arg_c[eax_9] == __return_addr_2)
                arg1 = ecx_3 - 1
                arg_c[eax_9] = arg_c[ecx_3 - 1]
                ecx_3 = arg1
                break
            
            eax_9 += 1
        while (eax_9 s< ecx_3)

int32_t* esi_3 = 7
int32_t* result = *(eax_2 + 4) + 0x1594

while (*result != 0x1301)
    if (result[1] == 0x1301)
        break
    
    esi_3 += 1
    result = &result[4]
    
    if (esi_3 s>= 0x48)
        esi_3 = nullptr
        break

int32_t edi = 0

if (ecx_3 s> 0)
    do
        int32_t ecx_5 = arg_c[edi]
        void* eax_13 = zx.d(ecx_5.w)
        
        if (eax_13 u>= 0x320)
            sub_591930()
        
        ebx[eax_13 * 0x19 + 0x69b] |= 1
        int32_t eax_15 = ebx[0x541]
        
        if (eax_15 != 3 && eax_15 != 5 && eax_15 != 4 && eax_15 != 6)
            void* var_34_1
            __builtin_memset(&var_34_1, 0, 0x20)
            int32_t var_3c_2 = ecx_5
            ecx_5.b = eax_15 == 2
            void* var_30_1
            int128_t* var_2c_1
            int32_t var_28_2
            int32_t var_24_2
            int32_t var_20_2
            int32_t var_1c_2
            int32_t var_18_4
            sub_61b1b0(eax_15, 0x21, ecx_5.b, 0xffffffff, var_3c_2, 1, var_34_1, var_30_1, 
                var_2c_1, var_28_2, var_24_2, var_20_2, var_1c_2, var_18_4)
        
        int32_t arg_4 = 0
        void* arg_8 = nullptr
        void* __return_addr_1 = arg_c[edi]
        int32_t var_18_5 = 0x3ee
        __return_addr = __return_addr_1
        result = sub_582de0(__return_addr_1, __return_addr_1, ebx, var_18_5)
        
        if (result.b == 0)
            uint32_t eax_17 = sub_590990(&arg_c94, 0xffffffff, ebx, 5, &arg_c94)
            
            if (eax_17 != 0)
                if (eax_17 != 1)
                    sub_591930()
                
                eax_17 = arg_c94
            
            if (__return_addr == eax_17)
                eax_17 = sub_591930()
            
            void* var_3c_3
            __builtin_memset(&var_3c_3, 0, 0x28)
            int32_t var_38_3
            int32_t var_34_2
            int32_t var_30_2
            int32_t var_2c_2
            int32_t var_28_3
            char* var_24_3
            int32_t var_20_3
            void* var_1c_4
            void* var_18_7
            result = sub_5822e0(eax_17, 0xffffffff, ebx, __return_addr, 8, esi_3, var_3c_3, 
                var_38_3, var_34_2, var_30_2, var_2c_2, var_28_3, var_24_3, var_20_3, var_1c_4, 
                var_18_7)
        
        edi += 1
    while (edi s< arg1)

CookieCheckFunction(result)
return result
