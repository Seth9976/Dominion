// 函数: sub_544e00
// 地址: 0x544e00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x191c)
__security_cookie
int32_t edi
int32_t var_14 = edi
void* arg_c7c = nullptr
int32_t* ebx = nullptr
int32_t* esi = sub_566920(edi)
int32_t __saved_ebp

if (esi != 0)
    while (true)
        uint32_t edi_1 = zx.d(esi.w)
        void* ebx_1 = *(sub_573400() + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        int32_t eax_4 = edi_1 * 0x64
        
        if (sub_5754f0(eax_4, *(eax_4 + ebx_1 + 0x1a4c), ebx_1, 4, 0) != 0)
            ebx = esi
            break
        
        void* eax_6 = arg_c7c
        
        if (eax_6 s>= 0x320)
            sub_591930()
            eax_6 = arg_c7c
        
        (&__saved_ebp)[eax_6] = esi
        arg_c7c += 1
        esi = sub_566920(edi_1)
        
        if (esi == 0)
            ebx = nullptr
            break

int32_t eax_10 = *(*(sub_573400() + 4) + 0x1504)

if (eax_10 != 3 && eax_10 != 5 && eax_10 != 4 && eax_10 != 6)
    sub_61b1b0(eax_10, 7, eax_10 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

void* eax_11 = sub_573400()
*(eax_11 + 0xc)
*(eax_11 + 4)
uint32_t result = sub_582eb0(&__saved_ebp, arg_c7c, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)

if (ebx != 0)
    uint32_t eax_12 = sub_56b800()
    void* eax_13 = sub_573400()
    int32_t var_18_1 = 0
    sub_5820c0(eax_13, *(eax_13 + 0xc), *(eax_13 + 4), ebx, 0x3ee, eax_12, 0xb, 0, 
        *(eax_13 + 0x28), *(eax_13 + 0x2c), 0, nullptr)
    int32_t arg_c84 = 1
    int32_t* arg_c88 = ebx
    int32_t arg_1908 = 1
    result = sub_56bba0(&arg_c84, 0, sub_544fc0, &arg_c84, 1, 2)

CookieCheckFunction(result)
return result
