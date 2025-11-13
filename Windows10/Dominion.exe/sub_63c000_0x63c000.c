// 函数: sub_63c000
// 地址: 0x63c000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

TEB* fsbase

if (data_1a98f4c s> *(*fsbase->ThreadLocalStoragePointer + 8))
    sub_75970e(&data_1a98f4c)
    
    if (data_1a98f4c == 0xffffffff)
        int32_t frequency
        QueryPerformanceFrequency(&frequency)
        data_1a98f50 = frequency
        int32_t var_8
        data_1a98f54 = var_8
        __Init_thread_footer(&data_1a98f4c)

int32_t eax_6
int32_t edx
edx:eax_6 = mulu.dp.d(arg1, 0x3e8)
return __aulldiv(eax_6, arg2 * 0x3e8 + edx, data_1a98f50, data_1a98f54)
