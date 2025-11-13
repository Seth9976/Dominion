// 函数: sub_591880
// 地址: 0x591880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[0xa] = 0
arg1[0xb] = 0
*arg1 = arg2
arg1[8] = arg3
arg1[4] = arg5
TEB* fsbase
void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
arg1[9] = arg4

if (*(*ThreadLocalStoragePointer + 0xf010) s<= 2)
    void* eax_4 = sub_573400()
    uint32_t eax_5 = sub_576b30(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x18, 0, 0, 0)
    
    if (eax_5 s<= 0)
        sub_576b30(eax_5, *(eax_4 + 0xc), *(eax_4 + 4), 0x19, 0, 0, 0)

arg1[0xa] = 0
return arg1
