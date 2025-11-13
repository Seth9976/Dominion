// 函数: sub_734490
// 地址: 0x734490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
WSADATA wSAData
int32_t result = WSAStartup(0x202, &wSAData)

if (result == 0)
    CookieCheckFunction(result)
    return result

sub_63b870(result, "WSAStartup failed", "HaltMsg", "C:\x\ax2017\Engine\Windows\WindowsNetwork.cpp", 
    0x2b, "WinsockNetworkInterface::NetworkInterfaceInitForApp")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
