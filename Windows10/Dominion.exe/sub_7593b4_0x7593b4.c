// 函数: sub_7593b4
// 地址: 0x7593b4
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(arg1 - 0x20) = *(arg1 - 0x14)
*(arg1 - 0x1c) = **(arg1 - 0x20)

if (**(arg1 - 0x1c) != 0xe06d7363)
    *(arg1 - 0x28) = 0
    return *(arg1 - 0x28)

int32_t* eax_4 = __current_exception()
*eax_4 = *(arg1 - 0x1c)
*__current_exception_context() = *(*(arg1 - 0x20) + 4)
terminate()
noreturn
