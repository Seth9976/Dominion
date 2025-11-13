// 函数: sub_549200
// 地址: 0x549200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x3f38)
__security_cookie
uint32_t __return_addr_4
void arg_2610
__builtin_memcpy(&arg_2610, sub_5476b0(&__return_addr_4), 0xc84)
void* eax_3 = sub_573400()
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &__return_addr_4, 4)
var_4:3.b = 0
void arg_3298
__builtin_memcpy(&arg_3298, &__return_addr_4, 0xc84)
void* esi_1 = &arg_2610
void* c = nullptr
void* arg_4 = nullptr
void* c_1 = nullptr
arg_4 = &arg_2610
void* __return_addr_1 = &arg_2610 + (arg3 << 2)
__return_addr = __return_addr_1
int32_t arg_c
int64_t arg_1c
int128_t arg_48
int128_t arg_58
int128_t arg_68
uint32_t __return_addr_6
void* eax_28
uint32_t __return_addr_5

if (&arg_2610 == __return_addr_1)
label_5494cf:
    __builtin_memset(&arg_1c, 0, 0x2c)
    arg_48 = 0x10e.o
    arg_58 = arg1.o
    arg_68 = arg2.o
    
    if (c != 0)
        void* eax_19 = *(sub_573400() + 4)
        uint32_t esi_7 = zx.d(__return_addr_6.w)
        
        if (esi_7 u>= 0x320)
            sub_591930()
        
        int32_t esi_8 = 1
        arg_c = *(esi_7 * 0x64 + eax_19 + 0x1a4c)
        
        if (c s> 1)
            while (true)
                void* eax_24 = *(sub_573400() + 4)
                uint32_t eax_25 = zx.d((&__return_addr_6)[esi_8].w)
                
                if (eax_25 u>= 0x320)
                    sub_591930()
                    eax_25 = zx.d((&__return_addr_6)[esi_8].w)
                
                if (*(eax_25 * 0x64 + eax_24 + 0x1a4c) != arg_c)
                    break
                
                esi_8 += 1
                
                if (esi_8 s>= c)
                    goto label_5495a7
            
            goto label_5495d5
        
    label_5495a7:
        __return_addr_5 = __return_addr_6
        
        if (__return_addr_5 == 0)
        label_5495d5:
            void arg_d00
            uint32_t __return_addr_3 =
                sub_563960(&arg_d00, 1, &__return_addr_6, &arg_d00, 1, 7, &arg_48, 0xc, 0, 0)
            __builtin_memcpy(&__return_addr_4, __return_addr_3, 0xc84)
            int32_t var_20_4
            char const* const var_1c_4
            char* ecx_13
            
            if (eax_4 == 0)
                var_1c_4 = "ChooseCard"
                var_20_4 = 0x3c3
                ecx_13 = "Halt"
            label_54966c:
                sub_63b870(__return_addr_3, &data_801800, ecx_13, 
                    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", var_20_4, var_1c_4)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            __return_addr_3 = __return_addr_4
            __return_addr = __return_addr_3
            
            if (__return_addr_3 == 0)
                var_1c_4 = "ChooseCard"
                var_20_4 = 0x3c6
                ecx_13 = "retval.cards[0] != CARDID_NULL"
                goto label_54966c
            
            __return_addr_5 = __return_addr_3
        
        eax_28 = sub_573400()
        __return_addr_1 = sub_583720(eax_28, *(eax_28 + 0xc), *(eax_28 + 4), __return_addr_5, 
            0x476, nullptr, 0x476, 0, 0, 4)
else
    do
        void* eax_6 = sub_573400()
        uint32_t esi_3 = zx.d((*esi_1).w)
        uint32_t eax_7 = *(eax_6 + 4)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        void* esi_4 = &arg_3298
        arg_c = *(esi_3 * 0x64 + eax_7 + 0x1a4c)
        
        if (&arg_3298 == &arg_3298 + (eax_4 << 2))
        label_549353:
            __return_addr_1.b = 1
            var_4:3.b = 1
        else
            while (true)
                int32_t eax_11 = *(sub_573400() + 4)
                uint32_t eax_12 = zx.d((*esi_4).w)
                
                if (eax_12 u>= 0x320)
                    sub_591930()
                
                int32_t i = *esi_4
                
                if (arg_c == *(eax_12 * 0x64 + eax_11 + 0x1a4c))
                    __return_addr_1 = nullptr
                    
                    if (c s<= 0)
                    label_54936f:
                        (&__return_addr_6)[c] = i
                        c = c_1 + 1
                        c_1 = c
                    else
                        while ((&__return_addr_6)[__return_addr_1] != i)
                            __return_addr_1 += 1
                            
                            if (__return_addr_1 s>= c)
                                goto label_54936f
                    
                    __return_addr_1.b = var_4:3.b
                    break
                
                esi_4 += 4
                
                if (esi_4 == &arg_3298 + (eax_4 << 2))
                    goto label_549353
        
        esi_1 = arg_4 + 4
        arg_4 = esi_1
    while (esi_1 != __return_addr)
    
    if (__return_addr_1.b == 0)
        goto label_5494cf
    
    __builtin_memset(&arg_1c, 0, 0x2c)
    int32_t arg_18 = 0x10d
    
    if (c == 0)
        uint32_t eax_14 = memset(&__return_addr_4, c, 0xc84)
        CookieCheckFunction(eax_14)
        return eax_14
    
    void* __return_addr_2 = sub_573400()
    arg_48 = arg_18.o
    int32_t edx_3 = *(__return_addr_2 + 0x28)
    arg_58 = arg1.o
    arg_68 = arg2.o
    __return_addr = __return_addr_2
    int32_t eax_15 = *__return_addr_2
    arg_68:4.d = *(__return_addr_2 + 0x2c)
    int32_t var_1c_2 = 0
    __builtin_memcpy(&__return_addr_4, &__return_addr_6, 0xc84)
    char var_20_2 = 0
    int32_t var_24_2 = 0xc
    arg_c = eax_15
    int32_t arg_10 = *(__return_addr + 0x10)
    arg_68.d = edx_3
    __return_addr_1 = sub_5869d0(&__return_addr_4, &arg_c, *(__return_addr + 4), 
        *(__return_addr + 0xc), 1, &__return_addr_4, c, 1, 0, 7, &arg_48, var_24_2, var_20_2, 
        var_1c_2)
    
    if (__return_addr_1 != 0)
        __return_addr_5 = __return_addr_4
        
        if (__return_addr_5 != 0)
            eax_28 = sub_573400()
            __return_addr_1 = sub_583720(eax_28, *(eax_28 + 0xc), *(eax_28 + 4), __return_addr_5, 
                0x476, nullptr, 0x476, 0, 0, 4)
CookieCheckFunction(__return_addr_1)
return __return_addr_1
