// 函数: sub_508d40
// 地址: 0x508d40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x191c)
__security_cookie
int32_t esi = 0
int32_t edi
int32_t var_14 = edi
int32_t arg_1904 = 0
void* arg_c7c = nullptr
uint32_t i_1 = sub_566920(edi)
int32_t __saved_ebp
int32_t arg_c84[0x320]

for (uint32_t i = i_1; i != 0; i = i_1)
    uint32_t ebx_1 = zx.d(i.w)
    void* ecx_1 = *(sub_573400() + 4)
    void* var_8 = ecx_1
    
    if (ebx_1 u>= 0x320)
        sub_591930()
        ecx_1 = var_8
    
    int32_t eax_3 = ebx_1 * 0x64
    i_1 = sub_5754f0(eax_3, *(eax_3 + ecx_1 + 0x1a4c), ecx_1, 2, 0)
    
    if (i_1.b == 0)
        void* eax_4 = arg_c7c
        
        if (eax_4 s>= 0x320)
            sub_591930()
            eax_4 = arg_c7c
        
        (&__saved_ebp)[eax_4] = i
        arg_c7c += 1
    else
        if (esi s>= 0x320)
            i_1 = sub_591930()
        
        arg_c84[esi] = i
        esi = arg_1904 + 1
        arg_1904 = esi
        
        if (esi == 2)
            break
    
    i_1 = sub_566920(i)

sub_566140(i_1, 0x3ee, &arg_c84, 0x3ea, 3, 0, 0xb, nullptr, nullptr)
void* eax_5 = sub_573400()
*(eax_5 + 0xc)
*(eax_5 + 4)
uint32_t result = sub_582eb0(&__saved_ebp, arg_c7c, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
