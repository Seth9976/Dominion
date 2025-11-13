// 函数: ___scrt_unhandled_exception_filter@4
// 地址: 0x75a22d
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = *arg1

if (*esi == 0xe06d7363 && esi[4] == 3)
    int32_t eax_1 = esi[5]
    
    if (eax_1 == 0x19930520 || eax_1 == 0x19930521 || eax_1 == 0x19930522 || eax_1 == 0x1994000)
        *__current_exception() = esi
        *__current_exception_context() = arg1[1]
        terminate()
        noreturn

return 0
