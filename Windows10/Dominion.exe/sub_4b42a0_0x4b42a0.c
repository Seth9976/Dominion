// 函数: sub_4b42a0
// 地址: 0x4b42a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = data_cc8d5c
char const* const var_24
int32_t var_20
char const* const var_1c
int32_t eax
char* ecx

if (edi != 0)
    int32_t ecx_1 = edi[1]
    edi[0x1d62] = *edi
    edi[0x1d63] = ecx_1
    int32_t ecx_2 = *(arg2 + 0xc)
    edi[0x1d60] = *(arg2 + 8)
    edi[0x1d61] = ecx_2
    eax = *arg2
    int32_t* eax_4
    
    if (eax == 3)
        int32_t* ebx = edi[0x1d5c] + (((arg1 s>> 4 | arg1) & edi[0x1d5d]) << 2)
        int32_t* ecx_7 = *ebx
        eax_4 = ecx_7
        
        if (eax_4 != 0)
            while (arg1 != *eax_4)
                eax_4 = eax_4[6]
                
                if (eax_4 == 0)
                    return eax_4
            
            int32_t* temp0_1 = eax_4
            eax_4 = &eax_4[2]
            
            if (temp0_1 != 0xfffffff8)
                int32_t* edx = nullptr
                int32_t* eax_5
                
                while (true)
                    eax_5 = ecx_7[6]
                    
                    if (arg1 == *ecx_7)
                        break
                    
                    edx = ecx_7
                    ecx_7 = eax_5
                    
                    if (ecx_7 == 0)
                        return eax_5
                
                if (edx != 0)
                    edx[6] = eax_5
                else
                    *ebx = eax_5
                
                int32_t* eax_6 = sub_64c080(ecx_7, 0x20)
                edi[0x1d5e] -= 1
                return eax_6
        
        return eax_4
    
    if (eax != 0)
        int32_t ecx_8 = ((arg1 s>> 4 | arg1) & edi[0x1d5d]) << 2
        int32_t* var_c_1 = ecx_8
        
        for (int32_t* i = *(ecx_8 + edi[0x1d5c]); i != 0; i = i[6])
            if (arg1 == *i)
                *(i + 8) = *arg2
                return i
        
        int32_t* eax_12 = sub_64bfd0(0x20)
        eax_12[3] += 1
        
        if (*eax_12 == 0)
            sub_64be70(eax_12)
        
        int32_t* ecx_10 = *eax_12
        *eax_12 = *ecx_10
        *ecx_10 = arg1
        *(ecx_10 + 8) = *arg2
        ecx_10[6] = *(var_c_1 + edi[0x1d5c])
        eax_4 = edi[0x1d5c]
        *(var_c_1 + eax_4) = ecx_10
        edi[0x1d5e] += 1
        return eax_4
    
    var_1c = "SetPresence"
    var_20 = 0xada
    var_24 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx = "presence.status != PRESENCE_NONE"
else
    var_1c = "GetClient"
    var_20 = 0x7b
    var_24 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(eax, &data_801800, ecx, var_24, var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
