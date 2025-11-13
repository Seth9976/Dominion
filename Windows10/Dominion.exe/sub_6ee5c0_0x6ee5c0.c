// 函数: sub_6ee5c0
// 地址: 0x6ee5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
RECT rect
GetClientRect(data_147d46c, &rect)
HWND hWnd = GetDlgItem(data_147d470, 0xab)
int32_t X_2
int32_t Y
POINT point

if (hWnd != 0)
    GetWindowRect(hWnd, &X_2)
    ScreenToClient(data_147d46c, &X_2)
    ScreenToClient(data_147d46c, &point)
    int32_t X = X_2
    MoveWindow(hWnd, X, Y, rect.right - X, point.y - Y, 1)

HWND hWnd_1 = GetDlgItem(data_147d470, 0xac)

if (hWnd_1 != 0)
    GetWindowRect(hWnd_1, &X_2)
    ScreenToClient(data_147d46c, &X_2)
    ScreenToClient(data_147d46c, &point)
    int32_t X_1 = X_2
    hWnd_1 = MoveWindow(hWnd_1, X_1, Y, rect.right - X_1, rect.bottom - Y, 1)

CookieCheckFunction(hWnd_1)
return hWnd_1
