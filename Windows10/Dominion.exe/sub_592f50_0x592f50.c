// 函数: sub_592f50
// 地址: 0x592f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = sub_592e40(arg1)
int32_t eax_1 = sub_592e40(arg2)

if (eax s>= eax_1)
    if (eax s> eax_1)
        eax_1.b = 0
        return eax_1
    
    void* eax_2 = sub_571b30(arg1, 0x18)
    void* eax_3 = sub_571b30(arg2, 0x18)
    int128_t var_4c
    int128_t xmm0_1 = *sub_576c00(&var_4c, *(sub_571b30(arg1, 0x18) + 0x90))
    int32_t var_1c_1 = xmm0_1.d
    int32_t edx = xmm0_1:4.d
    uint32_t var_64[0x6]
    int128_t xmm0_2 = *sub_576c00(&var_64, *(sub_571b30(arg2, 0x18) + 0x90))
    eax_1 = xmm0_1:8.d
    int32_t ebx_1 = xmm0_2
    var_4c = xmm0_2
    int32_t ecx_5 = var_4c:8.d
    int32_t esi_1 = var_4c:4.d
    
    if (var_1c_1 s< ebx_1)
    label_593028:
        
        if (var_1c_1 s< ebx_1)
            eax_1.b = 0
            return eax_1
        
        if (var_1c_1 s<= ebx_1)
            if (edx s>= esi_1)
                if (edx s> esi_1)
                    goto label_59304c
                
                if (eax_1 s>= ecx_5 && (eax_1 s> ecx_5 || xmm0_1:0xc.d != 0 || var_4c:0xc.d == 0))
                    goto label_59304c
            
            eax_1.b = 0
            return eax_1
        
    label_59304c:
        char* eax_9 = *(eax_3 + 0x58)
        char* ecx_7 = *(eax_2 + 0x58)
        
        while (true)
            edx.b = *ecx_7
            char temp0_1 = *eax_9
            bool c_1 = edx.b u< temp0_1
            
            if (edx.b == temp0_1)
                if (edx.b == 0)
                    break
                
                edx.b = ecx_7[1]
                char temp1_1 = eax_9[1]
                c_1 = edx.b u< temp1_1
                
                if (edx.b == temp1_1)
                    ecx_7 = &ecx_7[2]
                    eax_9 = &eax_9[2]
                    
                    if (edx.b == 0)
                        break
                    
                    continue
            
            int32_t eax_12
            eax_12.b = (sbb.d(eax_9, eax_9, c_1) | 1) s> 0
            return eax_12
        
        int32_t eax_10
        eax_10.b = false
        return 0
    
    if (var_1c_1 s<= ebx_1)
        if (edx s< esi_1)
            goto label_593028
        
        if (edx s<= esi_1)
            if (eax_1 s< ecx_5)
                goto label_593028
            
            if (eax_1 s<= ecx_5 && (xmm0_1:0xc.d == 0 || var_4c:0xc.d != 0))
                goto label_593028

eax_1.b = 1
return eax_1
