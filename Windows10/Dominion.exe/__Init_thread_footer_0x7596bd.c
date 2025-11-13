// 函数: __Init_thread_footer
// 地址: 0x7596bd
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

AcquireSRWLockExclusive(&data_cc8a08)
int32_t ecx_1 = data_8c4004 + 1
data_8c4004 = ecx_1
*arg1 = ecx_1
TEB* fsbase
*(*(fsbase->ThreadLocalStoragePointer + (data_cc8d3c << 2)) + 8) = data_8c4004
ReleaseSRWLockExclusive(&data_cc8a08)
return WakeAllConditionVariable(&data_cc8a04)
