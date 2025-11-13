// 函数: sub_55d1f0
// 地址: 0x55d1f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
__chkstk(0x192c)
__security_cookie
int32_t ebx = 0
int32_t edi
int32_t var_14 = edi
int32_t arg_1914 = 0
uint32_t result = sub_566920(edi)
int32_t arg_c94

for (uint32_t i = result; i != 0; i = result)
    if (ebx s>= 0x320)
        sub_591930()
    
    (&arg_c94)[ebx] = i
    ebx = arg_1914 + 1
    arg_1914 = ebx
    result = sub_4fa550(i.w)
    
    if (result.b != 0)
        break
    
    result = sub_566920(edi)

void arg_c
__builtin_memcpy(&arg_c, &arg_c94, 0xc84)

if (ebx != 0)
    int32_t arg_8
    int32_t esi = (&arg_8)[ebx]
    int32_t edi_1 = 0
    uint32_t ebx_2 = zx.d(esi.w)
    void* eax_3 = *(sub_573400() + 4)
    
    if (ebx_2 u>= 0x320)
        sub_591930()
    
    int32_t ecx_1 = ebx_2 * 0x64
    int32_t var_18_2 = 0
    uint32_t var_1c_1 = 4
    arg_8 = ecx_1
    
    if (sub_5754f0(eax_3, *(ecx_1 + eax_3 + 0x1a4c), eax_3, var_1c_1, var_18_2) != 0)
        int32_t eax_5 = 0
        
        if (arg1 s> 0)
            do
                if (*(&arg_c + (eax_5 << 2)) == esi)
                    void* ecx_4 = arg1 - 1
                    arg1 = ecx_4
                    *(&arg_c + (eax_5 << 2)) = *(&arg_c + (ecx_4 << 2))
                    break
                
                eax_5 += 1
            while (eax_5 s< arg1)
        
        void* eax_7 = sub_573400()
        void* eax_8 = *(eax_7 + 4)
        
        if (ebx_2 u>= 0x320)
            sub_591930()
        
        int32_t* ecx_5 = *(eax_7 + 4)
        uint32_t edx_5 = *(arg_8 + eax_8 + 0x1a70)
        int32_t var_2c
        __builtin_memset(&var_2c, 0, 0x18)
        int32_t var_28
        char* var_24
        int32_t var_20
        void* var_1c_2
        void* var_18_3
        sub_582d10(eax_8, edx_5, ecx_5, esi, 0x3ee, 0xb, 0x471, nullptr, *(eax_7 + 0x28), 
            *(eax_7 + 0x2c), *(eax_7 + 0x30), var_2c, var_28, var_24, var_20, var_1c_2, var_18_3)
        edi_1 = esi
    
    void* eax_9 = sub_573400()
    *(eax_9 + 0xc)
    *(eax_9 + 4)
    result = sub_582eb0(&arg_c, arg1, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
    
    if (edi_1 != 0)
        int32_t var_18_5 = 0
        int32_t var_1c_4 = 1
        arg_c94 = 1
        int32_t arg_c98 = edi_1
        int32_t arg_1918 = 1
        result = sub_56bd60(result, &arg_c94, sub_55d400, var_1c_4, var_18_5)

CookieCheckFunction(result)
return result
