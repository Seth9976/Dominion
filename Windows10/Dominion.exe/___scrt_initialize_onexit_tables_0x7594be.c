// 函数: ___scrt_initialize_onexit_tables
// 地址: 0x7594be
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_cc89e9 != 0)
    int32_t eax
    eax.b = 1
    return eax

if (arg1 != 0 && arg1 != 1)
    sub_75a095(5)
    breakpoint

int32_t eax_1

if (___asan_report_present() == 0 || arg1 != 0)
    __builtin_memset(&data_cc89ec, 0xff, 0x18)
    data_cc89e9 = 1
    eax_1.b = 1
else if (_initialize_onexit_table(&data_cc89ec) != 0)
    eax_1.b = 0
else if (_initialize_onexit_table(&data_cc89f8) == 0)
    data_cc89e9 = 1
    eax_1.b = 1
else
    eax_1.b = 0

return eax_1
