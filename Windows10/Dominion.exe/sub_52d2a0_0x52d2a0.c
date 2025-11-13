// 函数: sub_52d2a0
// 地址: 0x52d2a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1920)
__security_cookie
int32_t var_14 = 0
void arg_c88
__builtin_memcpy(&__return_addr, sub_5685f0(&arg_c88, 0, 0x3ea, &arg_c88, 0x10000), 0xc84)
int32_t esi_1 = arg1
int32_t ecx_2
int32_t edi_1

if (esi_1 s> 0)
    edi_1, ecx_2 = __memfill_u32(&arg_c88, 0x3ea, esi_1)
uint32_t eax_4 = sub_56b800()
void* eax_5 = sub_573400()
uint32_t eax_6 = sub_582de0(eax_5, eax_4, *(eax_5 + 4), 0x3e9)
uint32_t eax_8

if (eax_6.b != 0)
label_52d3dd:
    eax_8 = sub_56a880(eax_6, &arg_c88, &__return_addr, 0x14)
    
    if (eax_8 != 0)
        eax_8 = sub_563590(0xc0a)
        
        if (eax_8 != 0)
            void* eax_11 = sub_573400()
            eax_8 = sub_583720(eax_11, *(eax_11 + 0xc), *(eax_11 + 4), eax_8, 0x476, nullptr, 
                0x476, 0, 0, 4)
else
    if (esi_1 s>= 0x320)
        eax_6 = sub_591930()
    
    __return_addr[esi_1] = eax_4
    int32_t ecx_5 = arg1 + 1
    arg1 = ecx_5
    void arg_c84
    *(&arg_c84 + (ecx_5 << 2)) = 0x3e9
    
    if (esi_1 == 0)
        goto label_52d3dd
    
    int32_t eax_7
    eax_7.b = ecx_5 s> 1
    int32_t var_14_2 = eax_7
    eax_8 = sub_56aa00(eax_7, &arg_c88, &__return_addr)
    
    if (eax_8 != 0)
        eax_8 = sub_563590(0xc0a)
        
        if (eax_8 != 0)
            void* eax_9 = sub_573400()
            int32_t eax_10 = sub_583720(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), eax_8, 0x476, nullptr, 
                0x476, 0, 0, 4)
            CookieCheckFunction(eax_10)
            return eax_10

CookieCheckFunction(eax_8)
return eax_8
