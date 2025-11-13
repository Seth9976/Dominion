// 函数: sub_4d6110
// 地址: 0x4d6110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
void* result = arg1
int32_t i = 0
void* result_1 = result

if (*(result + 0x11a8) s> 0)
    void* esi_1 = result + 0x11b8
    void* _Destination = result + 0x48
    
    do
        strncpy(_Destination, &data_801800, 0x10)
        *(_Destination + 0xf) = 0
        int32_t eax = *esi_1
        
        if (eax != 0)
            _aligned_free(eax)
        
        result = result_1
        i += 1
        *esi_1 = 0
        _Destination += 0x22c
        *(esi_1 + 8) = 0
        *(esi_1 + 0x14) = 0
        *(esi_1 + 0x10) = 0
        *(esi_1 + 0xc) = 0
        esi_1 += 0x18
    while (i s< *(result + 0x11a8))

return result
