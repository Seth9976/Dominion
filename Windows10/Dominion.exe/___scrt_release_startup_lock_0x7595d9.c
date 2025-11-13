// 函数: ___scrt_release_startup_lock
// 地址: 0x7595d9
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = ___asan_report_present()

if (eax == 0 || arg1 != 0)
    return eax

int32_t temp0_1 = data_cc89e4
data_cc89e4 = 0
return temp0_1
