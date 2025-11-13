// 函数: sub_74cd80
// 地址: 0x74cd80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

HWND var_8 = arg3
char* edx = arg4

do
    arg1 = *edx
    edx = &edx[1]
while (arg1 != 0)

if (edx != &edx[1] && SendMessageA(arg3, 0x18b, 0, 0) s> 0)
    WPARAM wParam = 0
    
    if (SendMessageA(arg3, 0x18b, 0, 0) s> 0)
        LRESULT eax_4
        
        do
            LRESULT eax_2 = SendMessageA(arg3, 0x199, wParam, 0)
            
            if (eax_2 != 0xffffffff && eax_2 != 0 && _mbsicmp(*eax_2, arg4) == 0)
                return wParam
            
            wParam += 1
            eax_4 = SendMessageA(arg3, 0x18b, 0, 0)
        while (wParam s< eax_4)

return 0xffffffff
