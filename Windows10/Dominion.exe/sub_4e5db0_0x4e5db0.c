// 函数: sub_4e5db0
// 地址: 0x4e5db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
char* _Str2 = *arg1
uint32_t _MaxCount = arg1[1]
char* _Str2_1 = _Str2

if (_MaxCount == 0)
    return 0

void* esi = &data_93e508

while (true)
    if (strncmp(*(esi + 4), _Str2, _MaxCount) == 0)
        char* eax_2 = *(esi + 4)
        char i
        
        do
            i = *eax_2
            eax_2 = &eax_2[1]
        while (i != 0)
        
        if (_MaxCount == eax_2 - &eax_2[1])
            return *esi
    
    esi += 0x9c0
    
    if (esi == 0xa0d808)
        break
    
    _Str2 = _Str2_1

return 0
