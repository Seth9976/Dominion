// 函数: sub_541e00
// 地址: 0x541e00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
__security_cookie
int32_t i = *(sub_573400() + 0xc)
int32_t ecx = 0
void* eax_4 = *(sub_573400() + 4)
int32_t edx = *(eax_4 + 0x1520)
void* result

if (edx s> 0)
    result = eax_4 + 0x1a70
    
    while (*(result - 0x24) != 0xd4a || *result != i)
        ecx += 1
        result += 0x64
        
        if (ecx s>= edx)
            goto label_541e65

if (edx s<= 0 || ecx == 0)
label_541e65:
    sub_56e060(0xd4a)
    void* result_3 = nullptr
    void* result_4 = nullptr
    int32_t i_2 = 3
    void* result_1
    void arg_60
    int32_t i_1
    
    do
        void* eax_5 = sub_573400()
        *(eax_5 + 4)
        result = sub_589750(result_3, *(eax_5 + 0xc), 0x3ee, *(eax_5 + 0x28), *(eax_5 + 0x2c), 
            *(eax_5 + 0x30), 0, 0, 0xffffffff, nullptr)
        result_1 = result
        
        if (result_3 s>= 0x320)
            sub_591930()
            result = result_1
        
        *(&arg_60 + (result_3 << 2)) = result
        result_3 = result_4 + 1
        result_4 = result_3
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    result_1 = result_3
    bool cond:0_1 = result_1 == 0
    int32_t arg_ce8[0x320]
    __builtin_memcpy(&arg_ce8, &arg_60, 0xc84)
    
    if (not(cond:0_1))
        int32_t esi_1 = arg3
        bool cond:1_1
        
        do
            int32_t arg_4
            __builtin_memset(&arg_4, 0, 0x24)
            var_4.q = 0
            int128_t arg_28 = 0xa3.o
            int128_t arg_38 = arg1.o
            int128_t arg_48 = arg2.o
            void* result_2 = sub_563c40(&arg_28, 0xb, 1)
            sub_56e370(result_2, 1, result_2, 0)
            result_1 = result_2
            void* eax_6
            int32_t ecx_3
            int32_t edx_3
            eax_6, ecx_3, edx_3 = sub_573400()
            int32_t var_1c_4 = 8
            sub_589e00(eax_6, edx_3, *(eax_6 + 4), &result_1, ecx_3, 0x3ee)
            result = nullptr
            cond:1_1 = esi_1 != 0
            
            if (esi_1 s> 0)
                do
                    void** ecx_5 = &arg_ce8[result]
                    
                    if (arg_ce8[result] == result_2)
                        result = arg_ce8[esi_1 - 1]
                        *ecx_5 = result
                        esi_1 -= 1
                        break
                    
                    result += 1
                while (result s< esi_1)
                
                cond:1_1 = esi_1 != 0
        while (cond:1_1)

CookieCheckFunction(result)
return result
