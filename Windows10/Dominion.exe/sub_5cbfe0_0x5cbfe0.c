// 函数: sub_5cbfe0
// 地址: 0x5cbfe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* esi = arg1
void* var_128 = esi
void* result = sub_5cb070()

if (result == 0)
label_5cc03a:
    void* eax_2 = data_b7fcf4
    
    if (eax_2 != 0 && arg2 == 0 && eax_2 != *(esi + 0x1c28))
        eax_2 = sub_5cbf20()
    
    if (*(esi + 0x5c) == 0x3ee)
        void* eax_3
        int32_t edx_1
        eax_3, edx_1 = sub_5cc410(eax_2, *(esi + 0x58), 0x3ef, *(esi + 0x60), *(esi + 0x64))
        
        if (eax_3 != 0)
            edx_1.b = 1
            eax_3 = sub_5cbfe0()
        
        void* eax_4
        int32_t edx_3
        eax_4, edx_3 = sub_5cc410(eax_3, *(esi + 0x58), 0x3f0, *(esi + 0x60), *(esi + 0x64))
        
        if (eax_4 != 0)
            edx_3.b = 1
            sub_5cbfe0()
    
    int32_t edx_4 = *(esi + 0x30)
    
    if (edx_4 == 0)
        edx_4 = *(esi + 0x5c)
    
    sub_5cb4f0(0x13, edx_4)
    bool cond:0_1 = data_8db5c4 != 0x27
    int32_t ecx_3 = *(esi + 0x1c28)
    int32_t var_124_1 = ecx_3
    data_b7fcf4 = ecx_3
    void* result_1
    void* result_2
    void var_104
    int128_t var_100
    int128_t var_f0
    int128_t var_e0
    int128_t var_d0
    int128_t var_80
    int32_t eax_5
    
    if (cond:0_1)
        if (data_8db5d4 == 0x27)
            eax_5 = data_8db5d8
            goto label_5cc0ec
        
    label_5cc2a7:
        void* edx_8 = data_b809e4 * 0x1c30
        result = data_b809e0
        int32_t* var_130_2 = &data_b809e0
        result_1 = result
        void* edx_9 = edx_8 + result
        
        if (result u>= edx_9)
        label_5cc2e9:
            result = 0xffffffff
            result_1 = 0xffffffff
        else
            while ((*(result + 0x1c28) & 0xffff0000) == 0)
                result += 0x1c30
                result_1 = result
                
                if (result u>= edx_9)
                    goto label_5cc2e9
        
        result_2 = result
        
        if (result != 0xffffffff)
            while (true)
                if (*(result + 0x2c) == 0 && *(result + 0x9c) == ecx_3)
                    int32_t edi_2 = *(esi + 0x58)
                    int32_t esi_2 = *(esi + 0x5c)
                    memset(&var_104, 0, 0x40)
                    void* result_4 = result_1
                    int32_t var_11c_2 = esi_2
                    esi = var_128
                    int32_t var_114_2 = *(result_4 + 0xb0)
                    int32_t eax_11 = *(esi + 0x60)
                    int32_t eax_12 = *(esi + 0x64)
                    int32_t var_118_2 = edi_2
                    var_80 = 0x15.o
                    int32_t var_10c_2 = eax_12
                    int32_t var_108_2 = 0
                    int128_t var_70_2 = eax_11.o
                    int128_t var_60_2 = var_100
                    int128_t var_50_2 = var_f0
                    int128_t var_40_2 = var_e0
                    int32_t var_c4_2 = 0
                    int128_t var_30_2 = var_d0
                    sub_5cb630(result_4 + 0x258, &var_80)
                
                sub_6376d0(var_130_2, &result_2)
                result = result_2
                result_1 = result
                
                if (result == 0xffffffff)
                    break
                
                ecx_3 = var_124_1
    else
        eax_5 = data_8db5c8
    label_5cc0ec:
        
        if (eax_5 == 0)
            goto label_5cc2a7
        
        void* edx_5 = data_b809e4 * 0x1c30
        result = data_b809e0
        int32_t* var_130_1 = &data_b809e0
        result_1 = result
        void* edx_6 = edx_5 + result
        
        if (result u>= edx_6)
        label_5cc139:
            result = 0xffffffff
            result_1 = 0xffffffff
        else
            while ((*(result + 0x1c28) & 0xffff0000) == 0)
                result += 0x1c30
                result_1 = result
                
                if (result u>= edx_6)
                    goto label_5cc139
        
        result_2 = result
        
        if (result != 0xffffffff)
            while (true)
                if (*(result + 0x2c) == 0 && *(result + 0x9c) == ecx_3)
                    int32_t edi_1 = *(esi + 0x58)
                    int32_t esi_1 = *(esi + 0x5c)
                    memset(&var_104, 0, 0x40)
                    void* result_3 = result_1
                    int32_t var_11c_1 = esi_1
                    esi = var_128
                    int32_t var_114_1 = *(result_3 + 0xb0)
                    int32_t eax_7 = *(esi + 0x60)
                    int32_t eax_8 = *(esi + 0x64)
                    int32_t var_118_1 = edi_1
                    var_80 = 0x15.o
                    int32_t var_10c_1 = eax_8
                    int32_t var_108_1 = 0
                    int128_t var_70_1 = eax_7.o
                    int128_t var_60_1 = var_100
                    int128_t var_50_1 = var_f0
                    int128_t var_40_1 = var_e0
                    int32_t var_c4_1 = 0
                    int128_t var_30_1 = var_d0
                    int64_t var_b8_1 = 0
                    int32_t var_bc_1 = 2
                    int128_t* var_144_3 = &var_80
                    int128_t var_a0 = result_3.o
                    int32_t var_ac_1 = 0
                    int64_t var_90_1 = 0.q
                    sub_5cb7c0(&var_80, &var_a0, result_3 + 0x258, result_3)
                
                sub_6376d0(var_130_1, &result_2)
                result = result_2
                result_1 = result
                
                if (result == 0xffffffff)
                    break
                
                ecx_3 = var_124_1
else if (*(result + 0xc) == 0x13)
    int32_t ecx = *(result + 0x18)
    
    if (ecx == 0x70d || ecx == 0x1128 || ecx == 0x718 || *(result + 0x10) == 0x11)
        goto label_5cc03a
else if (*(result + 0x10) == 0x11)
    goto label_5cc03a

CookieCheckFunction(result)
return result
