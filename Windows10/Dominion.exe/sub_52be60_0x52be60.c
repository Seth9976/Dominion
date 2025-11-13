// 函数: sub_52be60
// 地址: 0x52be60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
void* eax = sub_573400()
void* esi = *(eax + 4)
int32_t* result = sub_57da30(esi, arg2)
int32_t i = 7
void* esi_1 = esi + 0x1598

do
    if ((*(esi_1 + 8) & 2) == 0)
        int32_t j = *(esi_1 - 4)
        
        if (j == arg2 || *esi_1 == arg2 || j == result)
            if (j != 0)
                void* esi_2 = 7
                result = *(eax + 4) + 0x1594
                
                while (*result != j)
                    if (result[1] == j)
                        break
                    
                    esi_2 += 1
                    result = &result[4]
                    
                    if (esi_2 s>= 0x48)
                        esi_2 = nullptr
                        break
                
                if (esi_2 != 0)
                    void* eax_3 = sub_573400()
                    int32_t var_1c_1 = 0
                    int32_t var_20_1 = 0xffffffff
                    int32_t var_24_1 = 0
                    return sub_571fa0(eax_3, 0xffffffff, *(eax_3 + 4), 0x601, 1, esi_2, nullptr)
            
            return result
    
    i += 1
    esi_1 += 0x10
while (i s< 0x48)

return result
