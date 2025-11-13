// 函数: sub_734cb0
// 地址: 0x734cb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = send(arg1, arg2, arg3, 0)

if (result != 0xffffffff)
    return result

int32_t eax_1 = WSAGetLastError() - 0x2733
int32_t eax_2 = neg.d(eax_1)
return sbb.d(eax_2, eax_2, eax_1 != 0)
