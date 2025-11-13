// 函数: sub_734900
// 地址: 0x734900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
FD_SET var_220
memset(&var_220, 0, 0x104)
var_220.fd_count += 1
var_220.fd_array[0] = arg1
FD_SET var_118
memset(&var_118, 0, 0x104)
var_118.fd_count += 1
var_118.fd_array[0] = arg1
TIMEVAL timeout
__builtin_memset(&timeout, 0, 8)
int32_t eax_2 = select(arg1, nullptr, &var_220, &var_118, &timeout)

if (eax_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "result != SOCKET_ERROR", 
        "C:\x\ax2017\Engine\Windows\WindowsNetwork.cpp", 0xff, 
        "WinsockNetworkInterface::TCPIsConnected")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (__WSAFDIsSet(arg1, &var_220) != 0)
    CookieCheckFunction(4)
    return 4

int32_t eax_4 = __WSAFDIsSet(arg1, &var_118)
int32_t eax_5 = neg.d(eax_4)
CookieCheckFunction((sbb.d(eax_5, eax_5, eax_4 != 0) & 3) + 2)
return (sbb.d(eax_5, eax_5, eax_4 != 0) & 3) + 2
