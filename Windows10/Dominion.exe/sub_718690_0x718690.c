// 函数: sub_718690
// 地址: 0x718690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

free(*(arg1 + 4))
int32_t i = 0
void* eax = arg1 + 0x10

if (*(arg1 + 8) s> 0)
    do
        void* esi_1 = *(*eax + (i << 2))
        free(*(esi_1 + 0x10))
        free(esi_1)
        i += 1
        eax = arg1 + 0x10
    while (i s< *(arg1 + 8))
    
    eax = arg1 + 0x10

free(*eax)
free(*(arg1 + 0xc))
return free(arg1)
