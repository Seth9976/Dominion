// 函数: sub_540360
// 地址: 0x540360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x191c)
__security_cookie
void* eax_2 = sub_573400()

if (*(eax_2 + 0x40) == 0)
    sub_591930()

int32_t ebx_1 = *(eax_2 + 0x40)
uint32_t esi = zx.d(ebx_1.w)
int32_t edi = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_4 = esi * 0x64
int32_t var_18 = 0
int32_t __saved_ebp
int32_t arg_c84[0x320]
__builtin_memcpy(&arg_c84, sub_5685f0(eax_4, *(eax_4 + edi + 0x1a4c), 0x462, &__saved_ebp, 0), 
    0xc84)
void* ecx_1 = arg1
int32_t eax_6 = 0

if (ecx_1 s> 0)
    do
        if (arg_c84[eax_6] == ebx_1)
            arg1 = ecx_1 - 1
            arg_c84[eax_6] = arg_c84[ecx_1 - 1]
            ecx_1 = arg1
            break
        
        eax_6 += 1
    while (eax_6 s< ecx_1)

int32_t (* esi_2)[0x320] = &arg_c84
int32_t (* eax_8)[0x320] = &arg_c84
void* edi_1 = &arg_c84[ecx_1]

if (&arg_c84 != edi_1)
    do
        eax_8 = sub_56e890(eax_8, 0x20, *esi_2, 0)
        esi_2 = &(*esi_2)[1]
    while (esi_2 != edi_1)

void* eax_9 = sub_573400()
*(eax_9 + 0xc)
*(eax_9 + 4)
uint32_t result = sub_582eb0(&arg_c84, arg1, 0x462, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
