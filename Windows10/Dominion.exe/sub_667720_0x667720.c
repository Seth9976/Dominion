// 函数: sub_667720
// 地址: 0x667720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
void* esi = arg1

while (*(esi + 0x1718) != 0)
    esi = *(esi + 0x1718)
    
    if (*(esi + 0x1718) == 0)
        break
    
    int32_t* eax_1 = sub_64cc90(esi)
    char* result = sub_6dd140(eax_1, eax_1, &data_8cae70, 0x6f)
    
    if (result != 0 && *result != 0)
        return result

return &data_801800
