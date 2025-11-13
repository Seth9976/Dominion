// 函数: sub_615360
// 地址: 0x615360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* i = arg5
int32_t var_78 = arg2
uint32_t i_2 = i
int32_t esi = arg6
int32_t var_f8_1
char const* const var_f4_1
char* ecx

if (arg4 == 0x474)
    if (esi != 0)
        goto label_6153ca
    
    var_f4_1 = "DomCreateToken"
    var_f8_1 = 0xc43b
    ecx = "whereCard != CARDID_NULL"
else if (esi == 0)
label_6153ca:
    i = data_b809e0
    
    for (void* ecx_2 = data_b809e4 * 0x1c30 + i; i u< ecx_2; i += 0x1c30)
        if ((*(i + 0x1c28) & 0xffff0000) != 0)
            while (i != 0xffffffff)
                if (*(i + 0x2c) == 4 && *(i + 0x1b4) == arg2 && *(i + 0x1bc) == arg4)
                    if (arg4 != 0x474)
                        if (esi != 0)
                            var_f4_1 = "FindToken"
                            var_f8_1 = 0xc41b
                            ecx = "whereCard == CARDID_NULL"
                            goto label_615792
                    else if (esi == 0)
                        var_f4_1 = "FindToken"
                        var_f8_1 = 0xc41a
                        ecx = "whereCard != CARDID_NULL"
                        goto label_615792
                    
                    if (*(i + 0x1c0) == esi)
                        esi = arg6
                        
                        if (*(i + 0x1c4) == i_2)
                            arg2 = var_78
                            
                            if (*(i + 0x1c8) == arg9 && *(i + 0x1cc) == arg10)
                                if (i == 0)
                                    break
                                
                                if (*(i + 0x1b0) != 0xffffffff)
                                    var_f4_1 = "DomCreateToken"
                                    var_f8_1 = 0xc441
                                    ecx = "existingToken->token.token == (TokenID)-1"
                                    goto label_615792
                                
                                bool cond:3_1 = *(i + 0x1bc) != 0x474
                                *(i + 0x1b0) = arg3
                                
                                if (cond:3_1)
                                    goto label_615770
                                
                                if (*(i + 0x1c0) != esi)
                                    break
                                
                                CookieCheckFunction(i)
                                return i
                
                i += 0x1c30
                
                if (i u>= ecx_2)
                    break
                
                while ((*(i + 0x1c28) & 0xffff0000) == 0)
                    i += 0x1c30
                    
                    if (i u>= ecx_2)
                        goto label_6153fe
            
            break
    
label_6153fe:
    void* i_3 = sub_637730(&data_b809e0)
    *(i_3 + 0x1d8) = arg7
    *(i_3 + 0x1b0) = arg3
    *(i_3 + 0x1c8) = arg9
    i = arg10
    *(i_3 + 0x2c) = 4
    *(i_3 + 0x1b4) = var_78
    *(i_3 + 0x1b8) = 0
    *(i_3 + 0x1c4) = i_2
    *(i_3 + 0x1bc) = arg4
    *(i_3 + 0x1c0) = esi
    *(i_3 + 0x1d4) = 0
    *(i_3 + 0x1cc) = i
    void var_e0
    int32_t* eax_8
    int32_t ecx_9
    
    if (arg4 != 6)
        int128_t var_70
        
        if (arg4 != 0x3f1)
            if (arg4 != 0x474)
                void* eax_13 = sub_5cc4b0(0, 0)
                *(i_3 + 0x1b8) = *(eax_13 + 0x1c28)
                eax_8, ecx_9 = sub_5cc540(&var_e0, arg4, 7, &var_e0, 0, 0, 0xffffffff, 
                    sub_5cd7d0(i_3, eax_13), 0)
                goto label_615717
            
            int32_t edx_5 = 0
            void* i_1 = data_b809e0
            
            for (void* ecx_12 = data_b809e4 * 0x1c30 + i_1; i_1 u< ecx_12; i_1 += 0x1c30)
                if ((*(i_1 + 0x1c28) & 0xffff0000) != 0)
                    while (i_1 != 0xffffffff)
                        if (*(i_1 + 0x2c) == 4 && *(i_1 + 0x1bc) == 0x474 && *(i_1 + 0x1c0) == esi)
                            edx_5 += 1
                        
                        i_1 += 0x1c30
                        
                        if (i_1 u>= ecx_12)
                            break
                        
                        while ((*(i_1 + 0x1c28) & 0xffff0000) == 0)
                            i_1 += 0x1c30
                            
                            if (i_1 u>= ecx_12)
                                goto label_6156be
                    
                    break
            
        label_6156be:
            eax_8, ecx_9 = sub_5cc540(&var_e0, 0x474, 9, &var_e0, 0, 0, i_2, edx_5 - 1, 0)
            var_70 = *eax_8
            var_70:4.d = esi
        else
            eax_8, ecx_9 = sub_5cc540(&var_e0, arg4, 0x13, &var_e0, 0, 0, i_2, 
                sub_5cd0a0(i, i_2, i_3, 0xffffffff), 0)
        label_615717:
            var_70 = *eax_8
        
        int128_t var_60_1 = *(eax_8 + 0x10)
        int128_t var_50_1 = *(eax_8 + 0x20)
        int128_t var_40_1 = *(eax_8 + 0x30)
        int128_t var_30_1 = *(eax_8 + 0x40)
        int128_t var_20_1 = *(eax_8 + 0x50)
        
        if (arg8 == 0)
            int32_t var_f4_2 = ecx_9
            sub_5af980(ecx_9, *(i_3 + 0x1b4))
        
        sub_5cb630(i_3 + 0x258, &var_70)
        i = i_3
    label_615770:
        CookieCheckFunction(i)
        return i
    
    if (var_78 == 0x600)
        void* eax_5 = sub_5cc6c0(0x603)
        *(i_3 + 0x1b8) = *(eax_5 + 0x1c28)
        int32_t eax_6 = sub_5cd7d0(i_3, eax_5)
        eax_8, ecx_9 = sub_5cc540(&var_e0, *(eax_5 + 0x5c), 7, &var_e0, 0, 0, 0xffffffff, eax_6, 0)
        goto label_615717
    
    var_f4_1 = "DomCreateToken"
    var_f8_1 = 0xc45d
    ecx = "token == TOKEN_TRADE_ROUTE"
else
    var_f4_1 = "DomCreateToken"
    var_f8_1 = 0xc43c
    ecx = "whereCard == CARDID_NULL"

label_615792:
sub_63b870(i, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_f8_1, var_f4_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
