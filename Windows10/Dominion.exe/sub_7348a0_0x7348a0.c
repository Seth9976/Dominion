// 函数: sub_7348a0
// 地址: 0x7348a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

SOCKET s = sub_734530(1, *arg1)

if (s != 0xffffffff)
    int32_t eax_1 = connect(s, &arg1[1], 0x10)
    enum WSA_ERROR eax_2
    
    if (eax_1 == 0xffffffff)
        eax_2 = WSAGetLastError()
    
    if (eax_1 != 0xffffffff || eax_2 == WSAEWOULDBLOCK)
        return s
    
    closesocket(s)

return 0xffffffff
