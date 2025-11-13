// 函数: sub_6aa0d0
// 地址: 0x6aa0d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = strrchr(arg1, 0x2e)

if (eax != 0)
    void* const esi_1 = &data_800258
    
    do
        if (_stricmp(*(esi_1 + 4), eax + 1) == 0)
            if (esi_1 != 0)
                return *esi_1
            
            break
        
        esi_1 += 8
    while (*(esi_1 + 4) != 0)

return 0
