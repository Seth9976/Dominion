// 函数: sub_7347f0
// 地址: 0x7347f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = sendto(arg1, arg3, arg4, 0, arg2 + 4, 0x10)

if (result == 0xffffffff)
    enum WSA_ERROR eax_2 = WSAGetLastError()
    
    if (eax_2 == WSAEWOULDBLOCK)
        return 0
    
    enum WSA_ERROR var_c_1 = eax_2
    sub_63b5f0("socket error in UDPSend %d")

return result
