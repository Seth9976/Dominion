// 函数: sub_6ee740
// 地址: 0x6ee740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_147ded0

if (ecx != 0 && ecx[1] == 0x19 && sub_5af880(ecx) != 0)
    HWND hWnd = GetDlgItem(data_147d470, 0x7b)
    LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
    
    if (wParam != 0xffffffff)
        return SendMessageA(hWnd, 0x199, wParam, 0)

return 0
