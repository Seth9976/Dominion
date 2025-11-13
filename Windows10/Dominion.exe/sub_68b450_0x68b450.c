// 函数: sub_68b450
// 地址: 0x68b450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr

if (data_147abf4 == 0)
    return 

void* esi_1 = nullptr

while (true)
    void* ecx_1 = data_147abf4
    
    if (esi_1 != 0)
        esi_1 += 0x10
    else
        esi_1 = *(ecx_1 + 0x1c)
    
    int32_t eax_3 = (*(ecx_1 + 0x20) << 4) + *(ecx_1 + 0x1c)
    
    if (esi_1 u>= eax_3)
        break
    
    while (true)
        if ((*(esi_1 + 0xc) & 0xffff0000) != 0)
            int32_t* ecx_3 = data_147abf8
            int32_t eax_4 = *(esi_1 + 8)
            int128_t var_30
            __builtin_memset(&var_30, 0, 0x20)
            var_30.d = eax_4
            int32_t i = (*(*ecx_3 + 0x24))(*(esi_1 + 4), &var_30)
            
            if (i == 0)
                break
            
            do
                int32_t* eax_8 = sub_689090()
                *eax_8 = var_30
                eax_8[8] = i
                eax_8[0xf] = 1
                int128_t var_20
                *(eax_8 + 0x10) = var_20
                eax_8[9] = 1
                eax_8[0xe] = 4
                sub_6891a0(eax_8, 0x5dd)
                i = (*(*data_147abf8 + 0x24))(*(esi_1 + 4), &var_30)
            while (i != 0)
            
            break
        
        esi_1 += 0x10
        
        if (esi_1 u>= eax_3)
            goto label_68b4b0

label_68b4b0:
void* esi_2 = nullptr

while (true)
    int32_t* ecx_2 = data_147abf4
    
    if (esi_2 != 0)
        esi_2 += 0x64
    else
        esi_2 = *ecx_2
    
    uint32_t eax = ecx_2[1] * 0x64 + *ecx_2
    int32_t var_48_3
    char const* const var_44_3
    int32_t* eax_14
    char* ecx_7
    
    if (esi_2 u>= eax)
    label_68b566:
        void* esi_3 = data_147abf4
        
        if (*(esi_3 + 0x40) == 0)
            break
        
        while (true)
            int32_t* ecx_6 = *(esi_3 + 0x38)
            void* eax_13 = ecx_6[1]
            *(esi_3 + 0x38) = eax_13
            
            if (eax_13 == 0)
                *(esi_3 + 0x3c) = 0
            else
                *(eax_13 + 8) = 0
            
            int32_t* edi_1 = *ecx_6
            *(esi_3 + 0x40) -= 1
            eax_14 = sub_64c080(ecx_6, 0xc)
            
            if (edi_1[1] s<= 0x3e8)
                break
            
            sub_68b2c0(edi_1)
            eax = edi_1[1]
            
            if (eax == 0x5de || eax == 0x3ec || eax == 0xfa2)
                eax = *edi_1
                void* edx_1 = data_147abf4
                
                if (eax != 0)
                    uint32_t ecx_14 = zx.d(eax.w)
                    
                    if (ecx_14 u< *(edx_1 + 4))
                        int128_t* ecx_16 = ecx_14 * 0x64 + *edx_1
                        
                        if (ecx_16[6].d == eax && ecx_16 != 0)
                            sub_6892c0(ecx_16)
            
            if (*(esi_3 + 0x40) == 0)
                return 
        
        var_44_3 = "NetworkProcessMessages"
        var_48_3 = 0x63f
        ecx_7 = "message->messageType > NETMSG_MIN_VALUE"
    else
        while ((*(esi_2 + 0x60) & 0xffff0000) == 0)
            esi_2 += 0x64
            
            if (esi_2 u>= eax)
                goto label_68b566
        
        eax_14 = *(esi_2 + 0x24)
        
        if (eax_14 == 1 || eax_14 == 2 || eax_14 == 3 || eax_14 == 4)
            sub_68aa70(esi_2)
        label_68b5ce:
            
            if (*(esi_2 + 0x38) != 4)
                continue
            else
                eax_14 = *(esi_2 + 0x24)
                
                if (eax_14 == 5)
                    goto label_68b608
                
                if (eax_14 == 1 || eax_14 == 2 || eax_14 == 3 || eax_14 == 4)
                    sub_68abb0(esi_2)
                label_68b608:
                    eax_14 = *(esi_2 + 0x24)
                    
                    if (eax_14 == 2 || eax_14 == 3)
                        sub_68a4b0(esi_2)
                        continue
                    
                    if (eax_14 == 4)
                        continue
                    else
                        if (eax_14 == 1 || eax_14 == 5)
                            sub_68a830(esi_2)
                            continue
                        
                        if (eax_14 == 0)
                            continue
                        else
                            var_44_3 = "NetworkLocReceive"
                            var_48_3 = 0x5d5
                            ecx_7 = "Halt"
                else
                    if (eax_14 == 0)
                        sub_68adc0(esi_2)
                        goto label_68b608
                    
                    var_44_3 = "NetworkLocReceive"
                    var_48_3 = 0x5c1
                    ecx_7 = "Halt"
        else
            if (eax_14 == 0 || eax_14 == 5)
                goto label_68b5ce
            
            var_44_3 = "NetworkUpdateReceive"
            var_48_3 = 0x681
            ecx_7 = "Halt"
    
    sub_63b870(eax_14, &data_801800, ecx_7, "C:\x\ax2017\Engine\Network.cpp", var_48_3, var_44_3)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn
