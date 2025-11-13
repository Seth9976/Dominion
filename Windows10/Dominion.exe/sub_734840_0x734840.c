// 函数: sub_734840
// 地址: 0x734840
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t fromlen = arg1
fromlen = 0x20
int32_t result = recvfrom(arg2, arg4, arg5, 0, arg3 + 4, &fromlen)

if (result != 0xffffffff)
    return result

enum WSA_ERROR eax_2 = WSAGetLastError()

if (eax_2 == WSAEWOULDBLOCK)
    return 0

if (eax_2 == WSAECONNRESET)
    return 0

return result
