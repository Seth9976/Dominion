// 函数: sub_68b2c0
// 地址: 0x68b2c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg1[1]
arg1[0x3b59].b = 1

if (result s< 0x7d0 || result s< 0xbb8)
    result = (*(*data_cf65b8 + 0x44))(arg1)
else if (result s< 0xfa0)
    if (result != 0xbb8)
        sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Engine\Voip.cpp", 0x815, 
            "VoipProcessMessage")
    label_68b432:
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = sub_6fe900(arg1)
else if (result s< 0x1388)
    if (result s> 0xfa1)
        if (result != 0xfa2)
        label_68b406:
            void* result_1 = result
            sub_63b870(sub_63b5f0("unknown http message type %d"), &data_801800, "Halt", 
                "C:\x\ax2017\Engine\Network.cpp", 0x5fe, "HTTPProcessMessage")
            goto label_68b432
    else if (result != 0xfa1 && result != 0xfa0)
        goto label_68b406
    
    result = (*(*data_cf65b8 + 0x44))(arg1)
    
    if (arg1[1] == 0xfa0)
        result = *arg1
        void* edx_1 = data_147abf4
        
        if (result != 0)
            uint32_t ecx_1 = zx.d(result.w)
            
            if (ecx_1 u< *(edx_1 + 4))
                int128_t* ecx_3 = ecx_1 * 0x64 + *edx_1
                
                if (ecx_3[6].d == result && ecx_3 != 0)
                    result = sub_6892c0(ecx_3)
else if (result s< 0xf4628)
    result = (*(*data_cf65b8 + 0x44))(arg1)

if (arg1[0x3b59].b == 0)
    return result

char* eax_2 = arg1[0x3b50]
int32_t* var_8 = arg1

if (eax_2 != 0 && eax_2 != &data_801800)
    if (data_cf65bc != 0 && *eax_2 != 0)
        char* eax_3 = sub_63d4e0(&arg1[0x3b50])
        int32_t temp0_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
    
    arg1[0x3b50] = &data_801800

return sub_68b830(data_147abf4 + 0x50, &var_8)
