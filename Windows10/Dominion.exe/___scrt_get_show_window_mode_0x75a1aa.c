// 函数: ___scrt_get_show_window_mode
// 地址: 0x75a1aa
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

STARTUPINFOW startupInfo
memset(&startupInfo, 0, 0x44)
GetStartupInfoW(&startupInfo)

if ((startupInfo.dwFlags.b & 1) != 0)
    return zx.d(startupInfo.wShowWindow)

return 0xa
