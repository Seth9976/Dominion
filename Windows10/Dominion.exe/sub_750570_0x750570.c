// 函数: sub_750570
// 地址: 0x750570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_19e2778
LRESULT result = *(ecx + 4)

if (result != 0)
    result = *(result + 0x14)
    
    if (result != 0x63 && result != 3)
        HWND hWnd = GetParent(*(ecx + 0x14))
        data_1a9a5a4 = hWnd
        data_1a9a5a8 = GetDlgCtrlID(hWnd)
        void* eax_1 = data_19e2778
        data_1a9a5ac = 0x42a
        LRESULT eax_2 = SendMessageA(*(eax_1 + 0x18), 0x18f, 0, *(eax_1 + 4))
        WPARAM wParam = data_1a9a5a8
        
        if (eax_2 == 0xffffffff)
            eax_2 = 0xffffffff
        
        data_1a9a5b0 = eax_2
        return SendMessageA(*(data_19e2778 + 8), 0x4e, wParam, &data_1a9a5a4)

return result
