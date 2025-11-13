// 函数: sub_734b50
// 地址: 0x734b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
FD_SET var_118
memset(&var_118, 0, 0x104)
var_118.fd_count += 1
var_118.fd_array[0] = arg1
TIMEVAL timeout
__builtin_memset(&timeout, 0, 8)
int32_t result = select(arg1, &var_118, nullptr, nullptr, &timeout)
int32_t var_138
char const* const ecx

if (result != 0xffffffff)
    if (result s> 0)
        int32_t addrlen_1 = 0x1c
        
        if (*arg2 == 1)
            addrlen_1 = 0x10
        
        int32_t addrlen = addrlen_1
        result = __WSAFDIsSet(arg1, &var_118)
        int32_t var_138_2
        char* ecx_1
        
        if (result != 0)
            result = accept(arg1, arg2 + 4, &addrlen)
            
            if (result == 0xffffffff)
                char const* const var_134_6 = "WinsockNetworkInterface::TCPListenAccept"
                var_138_2 = 0x13e
                ecx_1 = "acceptSocket != INVALID_SOCKET"
                goto label_734c5b
            
            CookieCheckFunction(result)
            return result
        
        char const* const var_134_3 = "WinsockNetworkInterface::TCPListenAccept"
        var_138_2 = 0x13b
        ecx_1 = "FD_ISSET((SOCKET)handle, &fdread)"
    label_734c5b:
        sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Engine\Windows\WindowsNetwork.cpp", 
            var_138_2, "WinsockNetworkInterface::TCPListenAccept")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = __WSAFDIsSet(arg1, &var_118)
    
    if (result == 0)
        CookieCheckFunction(result)
        return result
    
    char const* const var_134_7 = "WinsockNetworkInterface::TCPListenAccept"
    var_138 = 0x143
    ecx = "FD_ISSET((SOCKET)handle, &fdread) == false"
else
    char const* const var_134_1 = "WinsockNetworkInterface::TCPListenAccept"
    var_138 = 0x135
    ecx = "result != SOCKET_ERROR"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\Windows\WindowsNetwork.cpp", var_138, 
    "WinsockNetworkInterface::TCPListenAccept")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
