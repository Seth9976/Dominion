// 函数: sub_66d420
// 地址: 0x66d420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 1
*arg2 = arg1
int32_t eax_1

if (*(arg1 + 0x1718) != 0)
    int32_t* eax_2 = sub_64cc90(arg1)
    eax_1 = sub_6dd140(eax_2, eax_2, &data_8cae70, 0x6f)
else
    eax_1 = 0

if (*eax_1 != 0)
    int32_t eax_3 = *(arg1 + 0x189c)
    int32_t esi_1 = 0
    
    if (eax_3 != 0)
        do
            char* ecx = *(arg1 + (esi_1 << 2) + 0x179c)
            uint32_t eax_4 = sub_64e7a0(ecx)
            int32_t var_2c_1 = eax_1
            sub_66d3a0(eax_4, &result, eax_4, arg2, ecx)
            esi_1 += 1
        while (esi_1 != eax_3)
        
        return result

return 1
