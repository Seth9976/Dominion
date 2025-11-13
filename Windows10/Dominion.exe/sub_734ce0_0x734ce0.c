// 函数: sub_734ce0
// 地址: 0x734ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = recv(arg1, arg2, arg3, 0)

if (result == 0)
    return 0xffffffff

if (result != 0xffffffff)
    return result

int32_t eax_1 = WSAGetLastError() - 0x2733
int32_t eax_2 = neg.d(eax_1)
return sbb.d(eax_2, eax_2, eax_1 != 0)
