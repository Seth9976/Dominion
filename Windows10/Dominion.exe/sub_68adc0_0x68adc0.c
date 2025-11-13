// 函数: sub_68adc0
// 地址: 0x68adc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = sub_688ff0()
int32_t* ebx = &edi[3]
int32_t i_1 = (*(*data_147abf8 + 0x14))(*(arg1 + 0x20), &edi[0x3b51], ebx, 0xed30)
int32_t i = i_1

if (i != 0)
    while (i != 0xffffffff)
        int32_t var_24_1
        char const* const ecx_1
        
        if (i s<= 0)
            char const* const var_20_2 = "NetLocUDPReceive"
            var_24_1 = 0x51f
            ecx_1 = "len > 0"
        else
            *edi = *(arg1 + 0x60)
            edi[2] = i
            
            if (i u< 4)
                edi[1] = 0x3e9
            label_68ae48:
                void* ebx_1 = data_147abf4
                int32_t* eax_4 = sub_64bfd0(0xc)
                eax_4[3] += 1
                
                if (*eax_4 == 0)
                    sub_64be70(eax_4)
                
                int32_t* ecx_3 = *eax_4
                *eax_4 = *ecx_3
                ecx_3[2] = 0
                *ecx_3 = edi
                ecx_3[1] = 0
                ecx_3[2] = *(ebx_1 + 0x3c)
                void* eax_7 = *(ebx_1 + 0x3c)
                
                if (eax_7 == 0)
                    *(ebx_1 + 0x38) = ecx_3
                else
                    *(eax_7 + 4) = ecx_3
                
                *(ebx_1 + 0x40) += 1
                *(ebx_1 + 0x3c) = ecx_3
                edi = sub_688ff0()
                ebx = &edi[3]
                i_1 = (*(*data_147abf8 + 0x14))(*(arg1 + 0x20), &edi[0x3b51], ebx, 0xed30)
                i = i_1
                
                if (i == 0)
                    break
                
                continue
            else
                i_1 = *ebx
                edi[1] = i_1
                
                if (i_1 s> 0x3e8)
                    goto label_68ae48
                
                char const* const var_20 = "NetLocUDPReceive"
                var_24_1 = 0x52e
                ecx_1 = "netMessage->messageType > NETMSG_MIN_VALUE"
        
        sub_63b870(i_1, &data_801800, ecx_1, "C:\x\ax2017\Engine\Network.cpp", var_24_1, 
            "NetLocUDPReceive")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

char* eax_11 = edi[0x3b50]
int32_t* var_c = edi

if (eax_11 != 0 && eax_11 != &data_801800)
    if (data_cf65bc != 0 && *eax_11 != 0)
        char* eax_12 = sub_63d4e0(&edi[0x3b50])
        int32_t temp0_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
    
    edi[0x3b50] = &data_801800

return sub_68b830(data_147abf4 + 0x50, &var_c)
