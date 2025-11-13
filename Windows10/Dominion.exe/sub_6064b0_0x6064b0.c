// 函数: sub_6064b0
// 地址: 0x6064b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* ecx
int32_t edx
ecx, edx = __chkstk(0x7f18)
__security_cookie
int32_t esi = edx
void* arg_4 = ecx
uint32_t eax_12
int128_t arg_8
int32_t arg_19e0[0x664]

if (ecx != data_be153c)
    void* arg_1c
    int32_t eax_16 = sub_6062d0(&arg_1c, data_ccf6f4, data_ccf6f0, &arg_1c, &__return_addr)
    
    if (esi s>= eax_16)
        sub_63b870(eax_16, &data_801800, "idx < numCards", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xa3b0, "GameSpecific_CardsetHitAction")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    __return_addr = sub_4bbdb0()
    int32_t arg_50[0x24]
    memcpy(&arg_50, sub_4e49d0(esi, &arg_19e0), 0x1990)
    int32_t edi_1 = *(arg_1c + (esi << 2))
    eax_12 = data_ccf6e8
    
    if (eax_12 == 1)
        sub_4ad010(arg_4, esi)
        eax_12 = data_ccf6e8
    
    if (eax_12 == 0)
        var_4:3.b = sub_4aceb0(data_be1538, &arg_4)
        eax_12 = sub_606410()
        
        if (eax_12.b != 0 && var_4:3.b == 0)
            void arg_4d00
            int32_t eax_21 = sub_5f69b0(&arg_50, &arg_4d00)
            int32_t edx_9 = 0
            int32_t arg_20[0xc]
            
            if (eax_21 s<= 0)
            label_606759:
                void* eax_23 = sub_571b30(edi_1, sub_5cf7e0())
                
                if (((*(eax_23 + 0x98) & 0x7f000400) | (*(eax_23 + 0x9c) & 0x940)) == 0
                        || arg2 != 0)
                    void* eax_27 = sub_571b30(edi_1, sub_5cf7e0())
                    eax_12 = *(eax_27 + 0x9c) & 0x940
                    int32_t ecx_29 = (*(eax_27 + 0x98) & 0x7f000400) | eax_12
                    
                    if (ecx_29 == 0 && arg1 == ecx_29)
                        goto label_6067c0
                else
                label_6067c0:
                    arg_8.d = 1
                    arg_8:4.d = edi_1
                    arg_8:8.q = 0
                    sub_5f6410(&arg_8, &arg_50, __return_addr, &arg_8)
                    sub_6883d0(data_171e6c4, &arg_20)
                    eax_12 = sub_688660(&arg_20, esi, edi_1)
            else
                void arg_4d04
                void* ecx_21 = &arg_4d04
                
                while (true)
                    esi = *(ecx_21 - 4)
                    
                    if (esi == 0)
                        goto label_606759
                    
                    if (esi == 1 && *ecx_21 == edi_1)
                        arg_8.d = 1
                        arg_8:4.d = edi_1
                        arg_8:8.q = 0
                        sub_5f5f40(&arg_8, &arg_50, __return_addr, &arg_8)
                        break
                    
                    edx_9 += 1
                    ecx_21 += 0x10
                    
                    if (edx_9 s>= eax_21)
                        goto label_606759
                
                sub_6883d0(data_171e6c0, &arg_20)
                eax_12 = sub_688660(&arg_20, esi, edi_1)
else
    if (esi s< 0xe)
        uint32_t eax_14 = sub_4ad010(ecx, edx)
        CookieCheckFunction(eax_14)
        return eax_14
    
    int128_t xmm0_1 = *((esi << 4) + &data_8dbe90)
    int32_t eax_3 = xmm0_1
    arg_8 = xmm0_1
    
    if (eax_3 == 0)
        sub_63b870(eax_3, &data_801800, "entry.type != KINGDOM_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xa37e, "GameSpecific_CardsetHitAction")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_4 = sub_4bbdb0()
    void arg_3370
    memcpy(&arg_19e0, sub_4e49d0(eax_4, &arg_3370), 0x1990)
    
    if (sub_5f6410(&arg_8, &arg_19e0, eax_4, &arg_8) != 0)
        bool cond:1 = data_8db664 != 0x10
        data_8dbf70 = 0
        data_8dbf80 = 0
        data_8dbf90 = 0
        int32_t ecx_3
        
        if (cond:1)
            ecx_3 = 0
            
            if (data_8db674 == 0x10)
                ecx_3 = data_8db678
        else
            ecx_3 = data_8db668
        
        int32_t eax_8 = sub_67bd70(ecx_3, "txt_addItem")
        int32_t ecx_4 = data_c23be0
        
        if (ecx_4 != 0)
            ecx_4 = sub_66ca90(eax_8, 0, ecx_4, 0)
        
        int32_t var_1c_1 = ecx_4
        uint32_t eax_9 = sub_66cc40(eax_8, 0)
        CookieCheckFunction(eax_9)
        return eax_9
    
    int32_t eax_10 = sub_5f69b0(&arg_19e0, &arg_3370)
    uint32_t var_1c_2 = sub_4c89a0()
    eax_12 = sub_5f5a60(eax_10, data_8dbf68, &arg_3370, eax_10)
    
    if (eax_12 s< 3)
        void* i = &(&data_8dbf70)[eax_12 * 4]
        
        do
            *i = 0
            i += 0x10
        while (i s< &data_8dbfa0)
        
        CookieCheckFunction(i)
        return i
CookieCheckFunction(eax_12)
return eax_12
