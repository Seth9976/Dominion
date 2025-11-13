// 函数: sub_5cbbf0
// 地址: 0x5cbbf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* result = sub_5cb070()

if (result == 0 || *(result + 0x10) == 0x1a)
    if (*(arg1 + 0x5c) == 0x3ee)
        void* eax_2 = sub_5cc410(result, *(arg1 + 0x58), 0x3ef, *(arg1 + 0x60), *(arg1 + 0x64))
        
        if (eax_2 != 0)
            eax_2 = sub_5cbbf0()
        
        result = sub_5cc410(eax_2, *(arg1 + 0x58), 0x3f0, *(arg1 + 0x60), *(arg1 + 0x64))
        
        if (result != 0)
            result = sub_5cbbf0()
    
    int32_t edi_1 = *(arg1 + 0x5c)
    
    if (edi_1 != 0x3ef)
        result = 0x3ee
        
        if (edi_1 == 0x3f0)
            edi_1 = 0x3ee
    else
        edi_1 = 0x3ee
    
    if (edi_1 != 0x3e9 && edi_1 == 0)
        sub_63b870(result, &data_801800, "where != CW_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xa6d, "DomLocSet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void var_e4
    memset(&var_e4, 0, 0x40)
    int32_t edx_3 = *(arg1 + 0x30)
    int32_t var_f8_1 = *(arg1 + 0x58)
    int32_t eax_4 = *(arg1 + 0x60)
    int32_t eax_5 = *(arg1 + 0x64)
    int32_t var_fc_1 = edi_1
    int32_t var_f4_1 = 0
    int128_t var_80 = 6.o
    int32_t var_ec_1 = eax_5
    int32_t var_e8_1 = 0
    int128_t var_70_1 = eax_4.o
    int128_t var_e0
    int128_t var_60_1 = var_e0
    int128_t var_d0
    int128_t var_50_1 = var_d0
    int128_t var_c0
    int128_t var_40_1 = var_c0
    int32_t var_a4_1 = 0
    int128_t var_b0
    int128_t var_30_1 = var_b0
    int32_t edx_4 = sub_5cb4f0(0x14, edx_3)
    int32_t ecx_2 = *(arg1 + 0x1c28)
    void* esi_1 = data_b809e0
    int32_t var_128_1 = ecx_2
    int32_t* var_130_1 = &data_b809e0
    void* eax_7 = data_b809e4 * 0x1c30 + esi_1
    
    if (esi_1 u>= eax_7)
    label_5cbd96:
        esi_1 = 0xffffffff
    else
        while ((*(esi_1 + 0x1c28) & 0xffff0000) == 0)
            esi_1 += 0x1c30
            
            if (esi_1 u>= eax_7)
                goto label_5cbd96
    
    void* var_12c = esi_1
    
    if (esi_1 != 0xffffffff)
        while (true)
            if (*(esi_1 + 0x2c) == 0 && *(esi_1 + 0x9c) == ecx_2)
                int32_t eax_8
                
                if (data_8db5c4 != 0x27)
                    eax_8 = 0
                    
                    if (data_8db5d4 == 0x27)
                        eax_8 = data_8db5d8
                else
                    eax_8 = data_8db5c8
                
                if (eax_8 == 0)
                    sub_5cb630(esi_1 + 0x258, &var_80)
                else
                    void* var_120
                    int128_t* eax_10 = sub_5de520(&var_120, edx_4, esi_1, &var_120)
                    int128_t var_a0 = *eax_10
                    int128_t var_90_1 = eax_10[1]
                    int128_t* ecx_5 = sub_5cb6e0(esi_1 + 0x258, &var_a0)
                    var_120 = esi_1
                    int64_t var_118_1 = 0
                    int32_t var_11c_1 = 3
                    int128_t* var_144_4 = &var_80
                    var_a0 = var_120.o
                    int32_t var_10c_1 = 0
                    var_90_1.q = 0.q
                    sub_5cb7c0(&var_80, &var_a0, esi_1 + 0x258, ecx_5)
            
            edx_4 = sub_6376d0(var_130_1, &var_12c)
            esi_1 = var_12c
            
            if (esi_1 == 0xffffffff)
                break
            
            ecx_2 = var_128_1
    
    result = sub_5cb630(arg1 + 0x258, &var_80)
    data_b7fcf4 = 0

CookieCheckFunction(result)
return result
