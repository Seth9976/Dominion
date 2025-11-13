// 函数: sub_53eb10
// 地址: 0x53eb10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = __chkstk(0x322c)
__security_cookie
int32_t __saved_ebp
int32_t arg_2594
int32_t ecx
int32_t esi_1
esi_1, ecx = __builtin_memcpy(&arg_2594, sub_568780(&__saved_ebp, edx, 0x3ea, &__saved_ebp), 0xc84)
int32_t var_1c = ecx
void arg_c84
void arg_190c
__builtin_memcpy(&arg_190c, sub_56d960(esi_1, &arg_c84), 0xc84)
void* esi_3 = &arg_190c
void* ebx = &arg_190c + (arg1 << 2)
void* result = &arg_190c

if (&arg_190c != ebx)
    do
        int32_t edi_1 = *esi_3
        void* eax_6 = sub_573400()
        char var_5
        result = sub_565ff0(eax_6, 0x3ea, edi_1, *(eax_6 + 0xc), 0x462, nullptr, &var_5, 0xc, 
            nullptr, nullptr)
        
        if (var_5 != 0)
            int32_t arg_3214 = 0
            
            if (edi_1 != 0)
                arg_2594 = edi_1
                arg_3214 = 1
            
            result = sub_56f1a0(result, &arg_2594, 0x13, 0)
        
        esi_3 += 4
    while (esi_3 != ebx)

CookieCheckFunction(result)
return result
