// 函数: sub_5e2d10
// 地址: 0x5e2d10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* i = data_b809e0

for (void* esi_1 = data_b809e4 * 0x1c30 + i; i u< esi_1; i += 0x1c30)
    if ((*(i + 0x1c28) & 0xffff0000) != 0)
        while (i != 0xffffffff)
            if (*(i + 0x2c) == 6 && *(i + 0x1e0) == arg3 && *(i + 0x1e4) == arg4
                    && *(i + 0x1ec) == arg2)
                *(i + 0x1e8) += 1
                CookieCheckFunction(i)
                return i
            
            i += 0x1c30
            
            if (i u>= esi_1)
                break
            
            while ((*(i + 0x1c28) & 0xffff0000) == 0)
                i += 0x1c30
                
                if (i u>= esi_1)
                    goto label_5e2d73
        
        break

label_5e2d73:
uint32_t esi_2 = sub_637730(&data_b809e0)
uint32_t eax_3 = arg3
*(esi_2 + 0x2c) = 6
*(esi_2 + 0x1e0) = eax_3
*(esi_2 + 0x1e4) = arg4
*(esi_2 + 0x1e8) = 1
*(esi_2 + 0x1ec) = arg2
int32_t* edx_2
int128_t var_cc
int32_t var_6c

if (arg2 == 0)
    void var_50
    int32_t eax_8 = memset(&var_50, 0, 0x40)
    var_6c = 0x13
    int32_t var_68_1 = 0x3f1
    uint32_t var_64_1 = arg4
    uint32_t var_60_1 = sub_5cd0a0(eax_8, arg4, esi_2, 0xffffffff)
    int64_t var_5c_1 = 0
    edx_2 = &var_cc
    int32_t var_54_1 = 0
    int32_t var_10_1 = 0
    var_cc = var_6c.o
    int128_t var_bc_1 = var_5c_1.o
    int128_t var_4c
    int128_t var_ac_1 = var_4c
    int128_t var_3c
    int128_t var_9c_1 = var_3c
    int128_t var_2c
    int128_t var_8c_1 = var_2c
    int128_t var_1c
    int128_t var_7c_1 = var_1c
else
    int32_t edi_1 = 7
    void* esi_3 = &data_b8206c
    
    while (true)
        if (edi_1 s>= 0x48)
            eax_3 = sub_591930()
        
        if (*esi_3 == arg2)
            break
        
        if (*(esi_3 + 4) == arg2)
            break
        
        esi_3 += 0x10
        edi_1 += 1
        
        if (esi_3 s>= 0xb8247c)
            CookieCheckFunction(0)
            return 0
    
    if (edi_1 == 0)
        CookieCheckFunction(0)
        return 0
    
    void* eax_4 = sub_5cc410(eax_3, 0xffffffff, edi_1, 0, 0)
    
    if (eax_4 == 0)
        sub_63b870(eax_4, &data_801800, "retval", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x464f, "DomCreateTokenIcon")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_5 = sub_5cd7d0(esi_2, eax_4)
    int32_t* eax_7 = sub_5cc540(&var_cc, *(eax_4 + 0x5c), 7, &var_cc, 0, 0, 0xffffffff, eax_5, 0)
    edx_2 = &var_6c
    var_6c.o = *eax_7
    int64_t var_5c
    var_5c.o = *(eax_7 + 0x10)
    int128_t var_4c_1 = *(eax_7 + 0x20)
    int128_t var_3c_1 = *(eax_7 + 0x30)
    int128_t var_2c_1 = *(eax_7 + 0x40)
    int128_t var_1c_1 = *(eax_7 + 0x50)
sub_5cb630(esi_2 + 0x258, edx_2)
CookieCheckFunction(esi_2)
return esi_2
